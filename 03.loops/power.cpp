#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter the base : ";
    cin>>a;
    int b;
    cout<<"enter the exponent : ";
    cin>>b;
    int power = 1 ;
    for(int i = 1;i<=b;i++){
        power = power*a;
    }
    cout<<power;

}
   