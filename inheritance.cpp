//code reusability

#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    // Person(){
    //     cout<<"Parents constructor"<<endl;
    // }
    ~Person(){
        cout<<"I am the parents constructor"<<endl;
    }
};

class Student{
    //name,age,rollno
public:
    int rollno;
    string name;


};

class Teacher{
    public:
    string subject;
    double salary;
};

class TA: public Student, public Teacher{

};
int main(){
    // Student s1("Shafiul Alam",21,1234);
    // s1.name="Shafiul Alam";
    // s1.age=21;
    // s1.rollno=1234;
    // s1.getInfo();

    TA t1;
    t1.name="tony startk";
    t1.rollno=1234;
    t1.salary=100000;
    t1.subject="Math";
    cout<<t1.name<<endl;
    return 0;

}