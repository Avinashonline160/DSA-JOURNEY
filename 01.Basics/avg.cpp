#include <iostream>
using namespace std;
int main(){
    int eng;
    int math;
    int sci;
    cout<<"Enter the marks of eng; ";
    cin>>eng;
    cout<<"Enter the marks of math: ";
    cin>>math;
    cout<<"Enter the mark of sci: ";
    cin>>sci;
    int avg = (eng+math+sci)/3;
    cout<<"average mark= "<<avg<<endl;
    return 0;
}