#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"Maximun is "<<a<<endl;
    }else if(b>=a && b>=c){
        cout<<"Maximun is "<<b<<endl;
    }else{
        cout<<"Maximun is "<<c<<endl;
    }
    return 0;
}