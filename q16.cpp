#include <iostream>
using namespace std;

int main(){
    int n;

    cin>>n;
    n=n%10;//for last digit check whether even or odd
    if(n%2==0){
        cout<<"even number";
    }else{
        cout<<"odd number";
    }
    return 0;
}