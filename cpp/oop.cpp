#include <iostream>
using std:: string;
class AbstractEmployee{
public:
    virtual void AskForPromotion(){
      std:: cout << "Yes" << std:: endl;
    }
};
class Employee: public AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age =age;
    }
    int getAge(){
        return Age;
    }

    void Introduc_yourself(){
        std:: cout << "Name: " << Name << std:: endl;
        std:: cout << "Company: " << Company << std:: endl;
        std:: cout << "Age: " << Age << std:: endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    Employee(){}
    // void AskForPromotion(){
    //     if (Age > 30){
    //         std:: cout << Name << " got promoted" << std:: endl;
    //     }
    //     else{
    //         std:: cout << Name << " don't get promoted" << std:: endl;
    //     }
    // }
};
class Developer:public Employee{
public:
    string favProgrammingLanguage;
    Developer(){}
};
int main(){
    Employee employee1 = Employee("Stupid Bin", "obc", 43);
    // employee1.Name = "Stupid Bin";
    // employee1.Company = "obc";
    // employee1.Age = 22;
    // employee1.Introduc_yourself();
    Employee employee2 = Employee("Pon", "oo", 18);
    // // employee2.Name = "Pon";
    // // employee1.Company = "oo";
    // // employee1.Age = 18;
    // employee2.Introduc_yourself();
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();
    Developer d;
    Employee* e = &d;
    e->AskForPromotion();

}