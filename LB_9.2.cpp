#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;

enum Specialty {
    ComputerScience,
    Informatics,
    MathAndEconomics,
    PhysicsAndInformatics,
    LaborEducation
};

struct Student {
    string surname;
    int course;
    Specialty specialty;
    int physicsGrade;
    int mathGrade;
    int additionalGrade;
};

vector<Student> inputStudents(int n) {
    vector<Student> students(n);
    for (int i = 0; i < n; ++i) {
        cout << "������ ��� ��� �������� " << i + 1 << ":\n";
        cout << "�������: ";
        cin >> students[i].surname;
        cout << "����: ";
        cin >> students[i].course;
        cout << "������������ (0 - ComputerScience, 1 - Informatics, 2 - MathAndEconomics, 3 - PhysicsAndInformatics, 4 - LaborEducation): ";
        int specialty;
        cin >> specialty;
        students[i].specialty = static_cast<Specialty>(specialty);
        cout << "������ � ������: ";
        cin >> students[i].physicsGrade;
        cout << "������ � ����������: ";
        cin >> students[i].mathGrade;
        switch (students[i].specialty) {
        case ComputerScience:
            cout << "������ � �������������: ";
            break;
        case Informatics:
            cout << "������ � ��������� ������: ";
            break;
        default:
            cout << "������ � ���������: ";
            break;
        }
        cin >> students[i].additionalGrade;
    }
    return students;
}

void printStudents(const vector<Student>& students) {
    cout << "========================================================================================================" << endl;
    cout << "| # | Surname       | Course | Specialization               | Physics | Mathematics | Additional Grade |" << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < students.size(); ++i) {
        cout << "| " << setw(1) << right << i + 1 << " | ";
        cout << setw(13) << left << students[i].surname << " | ";
        cout << setw(6) << right << students[i].course << " | ";
        switch (students[i].specialty) {
        case ComputerScience:
            cout << setw(28) << left << "Computer Science" << " | ";
            break;
        case Informatics:
            cout << setw(28) << left << "Informatics" << " | ";
            break;
        case MathAndEconomics:
            cout << setw(28) << left << "Math and Economics" << " | ";
            break;
        case PhysicsAndInformatics:
            cout << setw(28) << left << "Physics and Informatics" << " | ";
            break;
        case LaborEducation:
            cout << setw(28) << left << "LaborEducation" << " | ";
            break;
        }
        cout << setw(7) << right << students[i].physicsGrade << " | ";
        cout << setw(11) << right << students[i].mathGrade << " | ";
        cout << setw(16) << right << students[i].additionalGrade << " |\n";
    }
    cout << "========================================================================================================" << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ ������� ��������: ";
    cin >> n;

    vector<Student> students = inputStudents(n);

    printStudents(students);

    return 0;
}
