/*
Reference variables and type casting
*/

#include <iostream>

using namespace std;
int main(){
    float dn = 51.65;
    long double dl = 51.65;
    cout<<"The sizeof 51.65 =  "<<sizeof(51.65)<<endl; //double
    cout<<"The sizeof 51.65f =  "<<sizeof(51.65f)<<endl;
    cout<<"The sizeof 51.65F =  "<<sizeof(51.65F)<<endl;
    cout<<"The sizeof 51.65l =  "<<sizeof(51.65l)<<endl;
    cout<<"The sizeof 51.65L=  "<<sizeof(51.65L)<<endl;

    cout<<"***************Typecasting*****************";
    float a=32.45;
    int b=56;
    cout<<"\nThe typecasting of a "<<int(a)<<endl;
    cout<<"The typecasting of b "<<float(b)<<endl;      

}