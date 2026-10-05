#include <iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<< " ";
    cout<<endl;
}
void selectionsort(int arr[],int n){
    for(int i= 0; i<n-1;i++){
    int minIdx = i;
    for(int j= i+1;j<n;j++){
        if (arr[j]<arr[minIdx]){
            minIdx = j;
        }
     }
     swap (arr[i],arr[minIdx]);
    }
     print(arr,n);
}
     int main(){
       int arr[5]={5,4,1,3,2};
       selectionsort(arr,5);
       return 0;
     }