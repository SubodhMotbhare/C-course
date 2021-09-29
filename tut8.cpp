//Constants Manipulators and operators precedence

#include<iostream>
using namespace std;

int main(){
    //when you intilize variable without "const" then its value is changed
    int ad=45;
    cout<<"Value of ad "<<ad<<endl;
    ad=78;
    cout<<"Value of ad "<<ad<<endl;

    //when you intilize variable with "const" then its value is not changed
    const float df = 25.32;
    cout<<"Value of "<<df;
    // it shows error df=56;

}