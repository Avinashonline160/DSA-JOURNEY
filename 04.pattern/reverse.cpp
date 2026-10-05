#include<iostream>
using namespace std;
int main () {
    int n =10829;
    int res = 0;
    while(n>0){
        int lastDig = n%10;
        res = res * 10 + lastDig;
        n/=10;
    }
    cout<<"reverse= "<< res <<endl;
    return 0;
}