#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout<<" non- parameterized constructor"<<endl;
    }
    Student(string name){
        this->name=name;
        cout<<"parameterized constructor"<<endl;
    }

};

int main(){
    Student s1;
    Student s2("Shafiul Alam");
}

//Constructor overloading, function overloading is type of compile time polymorphism.