#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name, department, semester;
public:
    void setInformation(int id, string n, string dept, string sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }

    void displayInformation() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Semester: " << semester << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Student s1, s2, s3;
    s1.setInformation(25049, "Dolal", "ICT", "2nd Semester");
    s2.setInformation(25050, "Rahim", "CSE", "2nd Semester");
    s3.setInformation(25051, "Nusrat", "ICT", "1st Semester");

    cout << "STUDENT INFORMATION" << endl;
    cout << "=============================" << endl;
    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();
    return 0;
}
