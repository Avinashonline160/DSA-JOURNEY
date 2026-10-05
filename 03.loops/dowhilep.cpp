#include<iostream>
using namespace std;
int main(){
    int n;
    do {
        cout<<"enter number: ";
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"you entered: "<<n <<endl;
    } while(true);
    return 0;
}