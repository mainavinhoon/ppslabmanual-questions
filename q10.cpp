#include<iostream>
using namespace std;

int main(){
    int a,b,c,max,min;
    cin>>a>>b>>c;

    max=a;
    if(b>a || b>c){
        max=b;
        cout<<"max "<<max;
    }else if(c>a || c>b){
        max=c;
         cout<<"max "<<max;
    }else{
        cout<<"max "<<max;
    }
    return 0;
}