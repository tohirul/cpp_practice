#include <iostream>
using namespace std;

class Student {
private:
  double grade, credit, fee;
  string registration;

public:
  string name, className, roll;

  void setStudentInfo(string studentName, string studentClassName,
                      string studentRoll) {
    name = studentName;
    className = studentClassName;
    roll = studentRoll;
  }
  void setAcademicInfo(double studentGrade, double studentCredit,
                       double studentFee);
  void getStudentInfo() const {
    cout << "Student Name: " << name << endl;
    cout << "Class: " << className << endl;
    cout << "Roll No: " << roll << endl;
  }
  void getStudentAcademicData() const {
    cout << "Grade: " << grade << endl;
    cout << "Credit: " << credit << endl;
  };
};
void Student::setAcademicInfo(double studentGrade, double studentCredit,
                              double studentFee) {
  grade = studentGrade;
  credit = studentCredit;
  fee = studentFee;
};

int main() {

  Student one;
  one.setStudentInfo("Tohirul Islam", "40-A", "A-2348");
  one.getStudentInfo();

  one.setAcademicInfo(3.19, 12.5, 24536.00);
  one.getStudentAcademicData();
  return 0;
}