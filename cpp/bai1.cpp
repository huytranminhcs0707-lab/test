#include <iostream>
#include <string>
using namespace std;
struct Date
{
    int day, month, year;
};
struct Student
{
    string name;
    int age;
    Date dob;
    void display()
    {
        cout << "Ten: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "Ngay thang nam sinh: " << dob.day << "/" << dob.month << "/" << dob.year;
    }
};
int main() {
    // Student student1;
    // cout << "Nhap ten: " ;
    // cin >> student1.name;
    // cout << "Nhap tuoi: " ;
    // cin >> student1.age;
    // cout << "Nhap ngay sinh: " ;
    // cin >> student1.dob.day;
    // cout << "Nhap thang sinh: " ;
    // cin >> student1.dob.month;
    // cout << "Nhap nam sinh: " ;
    // cin >> student1.dob.year;
    // student1.display();
    return 0;
    
}
