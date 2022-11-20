#include <iostream>
using namespace std;

int main()
{
    float meter, inch, cm, feet, km;
    cin >> km;
    meter = 1000 * km;
    cout << meter << endl;
    cm = 100000 * km;
    cout << cm << endl;
    inch = 39370 * km;
    cout << inch << endl;
    feet = 3281 * km;
    cout << feet << endl;
    return 0;
}