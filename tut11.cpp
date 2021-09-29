// break and continue statement program

#include<iostream>
using namespace std;
int main(){
    cout<<"******break program*******";
    for(int i=0; i<=10;i++){
        if(i==6){
            break;
        }
        cout<<i<<endl;
    }

    
    cout<<"*******countinue program********";
    for(int p=0; p<=10;p++){
        if(p==6){
            continue;
        }
        cout<<endl<<p<<endl;
    }
    return 0;
}