#include <bits/stdc++.h>
using namespace std;


class Print{
public:
    void show(int x){
        cout<<"Int : "<<x<<endl;
    }

    void show(char x){
        cout<<"Char : "<<x<<endl;
    }

};
int main() {
     // Your code here
    Print p;
    p.show(23);
    p.show('A');
    return 0;
}