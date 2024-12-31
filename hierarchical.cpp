#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student: public Person{
    public:
    int rollno;
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Rollno: "<<rollno<<endl;
    }
};

class Teacher:public Person{
    public:
    string subject;
    double salary;
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

