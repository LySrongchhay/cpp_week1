#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char password[30]="admin123";
    char userInputPassword[30];
    cout<<"Enter your password : ";
    cin>>userInputPassword;
    if(strcmp(password,userInputPassword)==0){
        cout<<"The password is correct."<<endl;

    }else{
        cout<<"Wrong password!"<<endl;
    }






    return 0;

}