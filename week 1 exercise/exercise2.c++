#include <iostream>
using namespace std;
int main(){
    int choice;
    float a,b,result;
    cout<<"1. Add"<<endl;
    cout<<"2. Substract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divided"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    cout<<"Enter two numbers : ";
    cin>>a>>b;

    if(choice == 1){
        result = a+b;
    }else if(choice == 2 ){
        result = a-b;
    
    }else if(choice == 3){
        result =a*b;
    }else if(choice == 4){
        if(b != 0){
            result=a/b;
        }else{
            cout<<"Error : Division by zero"<<endl;
            return 1;
        }
    }else{
        cout<<"Invalid choice"<<endl;
        return 1;
    }

    cout<<"Result: "<<result<<endl;
    return 0;

}