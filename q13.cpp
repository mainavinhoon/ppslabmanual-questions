#include <iostream>
using namespace std;

int main(){
    float basic,Da,Hra,Pf,Gross,Nt,Ma = 300;

    cin>>basic;

    Da = 0.10*basic;
    Hra = 0.075*basic;
    Pf = 0.125*basic;
    Gross = basic+Da+Hra+Ma;
    Nt = Gross-Pf;

    cout<<Da<<" "<<Hra<<" "<<Pf<<endl;
    cout<<Gross<<" "<<Nt;


    return 0;
}