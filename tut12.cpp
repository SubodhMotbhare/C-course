// pointers in c++
#include<iostream>
using namespace std;
int main(){
    int a=56;
    int *b=&a;//in pointer variable b address of variable a is stored
    cout<<"The address of a is "<<&a<<endl; //both &a and b returns address of a
    cout<<"The address of a is "<<b<<endl;
    cout<<"The value of a is "<<*b<<endl;
    cout<<"The value of a is "<<a<<endl;

    return 0;
}