//control structures and if-else, switch case statement
#include<iostream>
using namespace std;
int main(){
    cout<<"Tell your age "<<endl;
    int age;
    cin>>age;
    if(age>18){
        cout<<"Your are elegible for voting";
    }

    else if(age==18){
        cout<<"You are also elegible for voting";
    }

    else{
        cout<<"You are child. Not elegible for voting";
    }

}