#include <iostream>
using namespace std;
int main(){
    string name="admin";
    string password = "1234";
    string inputName, inputPassword;
    int i=0;
    do{
        cout<<"Enter your name : ";
        cin>>inputName;
        cout<<"Enter your password : ";
        cin>>inputPassword;

        
        if(name==inputName && password==inputPassword){
            cout<<"Access granted"<<endl;
            break;
        }else{
            cout<<"Access denied"<<endl;
            cout<<3-1-i<<" attemp left"<<endl;
        }
        i++;
    }while (i!=3);


    return 0;
}