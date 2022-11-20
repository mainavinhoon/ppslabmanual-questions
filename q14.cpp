#include <iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch (day)
    {
    case 1:
    {
        /* code */cout<<"mondey";
        break;
    }
    case 2:
    {
        /* code */cout<<"tuesday";
        break;
    }
    case 3:
    {
        /* code */cout<<"wednesday";
        break;
    }
    case 4:
    {
        /* code */cout<<"thursday";
        break;
    }
    case 5:
    {
        /* code */cout<<"friday";
        break;
    }
    case 6:
    {
        /* code */cout<<"saturday";
        break;
    }
    default:
    cout<<"sunday";
        break;
    }
    return 0;
}