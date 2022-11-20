#include <iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
 
    if(isupper(n)){
        cout<<n<<" is capital";
    }
    else if(islower(n)){
        cout<<n<<" is small";
    }
    else if(isdigit(n)){
        cout<<n<<" is digit";
    }
    else{
        cout<<n<<" is capital";
    }
    return 0;
} 