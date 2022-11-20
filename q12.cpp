#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks >= 80 && marks < 100)
    {
        cout << "Distiction";
    }
    else if (marks >= 60 && marks <80)
    {
        cout << "first clas";
    }
    else if (marks >= 40 && marks <60)
    {
        cout << "second class";
    }
    else if (marks < 40)
    {
        cout << "fail";
    }
    else
    {
        cout << "enter correct marks";
    }

    return 0;
}