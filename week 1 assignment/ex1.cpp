#include <iostream>
using namespace std;
int main(){
    char fullName[30];
    cout<<"Enter your full name : ";
    cin.getline(fullName,30);
    cout<<"Welcom "<<fullName<<" to our C++ course."<<endl;
    return 0;
}
