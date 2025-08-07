#include <iostream>
using namespace std;
int main(){
    string name;
    int age;
    float GPA;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your GPA : ";
    cin>>GPA;
    
    cout<<"Name : "<<name<<endl;
    cout<<"Age  : "<<age<<endl;
    cout<<"GPA  : "<<GPA<<endl;

    return 0;
}