#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter the sp value : ";
    cin>>sp;
    int cp;
    cout<<"enter the cp value : ";
    cin>>cp;
    if(sp>cp){
        cout<< "profit = "<<sp-cp;
    }
    if(sp<cp){
        cout<<"loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"no profit , no loss";
    }
    return 0;
}