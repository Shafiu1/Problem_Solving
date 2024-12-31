#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    //methods
    Teacher()//non-parameterized constructor
    {
        dept = "CSE";
    }
    Teacher(string name,string dept, string subject, double salary){
        (*this).name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    //copy constructor
    Teacher(Teacher &orgobj){
        cout<<"I am the custom copy constructor"<<endl;
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->subject=orgobj.subject;
        this->salary=orgobj.salary+1000;
    }
    void changeDept(string newDept){
        dept= newDept;
    } 
    //settter   
    void setsalary(double newSalary){
        salary=newSalary;
    }
    //getter
    double getSalary(){
        return salary;
    }  
    
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Dept: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

class Account{
private:
    double balance;
    string password;//data hiding...encapsulation

public:
    string accountId;
    string username;
    
};

class Student{
public:
    string name;
    double* cgpaPtr;
    
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
        
    }

    Student(Student &orgobj){
        cout<<"I am the custom copy constructor"<<endl;
        this->name=orgobj.name;
        cgpaPtr=new double;
        *cgpaPtr=*orgobj.cgpaPtr;
    }   

    void getInfo(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }

    ~Student(){
        cout<<"Hi, I delete everythingj\n";
        delete cgpaPtr;
    }
};
int main(){
    Teacher t1;
    t1.name="Shafiul Alam";
    t1.subject="C++";
    t1.dept="CSE";
    t1.setsalary(50000);
    Teacher t2("Shahin","EEE","EEE",60000);//initialize with parameterized constructor.
    t2.getInfo();
    
    // cout<<t1.dept<<endl;
    Teacher t3(t2);//t3(t2)
    t3.getInfo();
    Teacher t4;
    // cout<<t1.getSalary()<<endl;

    Student s1("Shafiul Alam",3.75);

    Student s2(s1);
    // s2.getInfo();
    s1.getInfo();
    *(s2.cgpaPtr)=4.00;
    s1.getInfo();
    return 0;
}
//Types of  constructor->
//1. Non-parameterized constructor
//2. Parameterized constructor
//3. Copy constructor.

//Constructor overloading 
//number of parameters same but type of parameters are different.