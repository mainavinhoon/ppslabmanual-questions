#include<iostream>
using namespace std;

int main(){
    int a[10],max,min;
    
    for(int i=0; i<10;i++){
        cin>>a[i];
    }
max=a[0];
min=a[0];
  
  for(int i=1;i<10;i++){
    if(max<a[i]){
        max=a[i];
    }
    if(min>a[i]){
        min=a[i];
    }
  }
cout<<max<<" "<<min;

    
    return 0;
}