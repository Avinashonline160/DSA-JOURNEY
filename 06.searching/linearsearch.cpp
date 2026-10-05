#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }

    return-1;
  }
    int main(){
        int arr[5]={4,5,3,2,1};
        int n=sizeof(arr)/sizeof(int);
        cout<<linearsearch(arr,n,5)<<endl;
        return 0;

    }
