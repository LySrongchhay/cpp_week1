#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(number%3==0 && number%5==0){
        cout<<number<<" is multiple of 3 and 5."<<endl;
    }else{
        cout<<number<<" is not multiple of 3 and 5."<<endl;
    }



    return 0;
}