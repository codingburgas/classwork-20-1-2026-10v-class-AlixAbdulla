
#include "../StaticLib1/add.h"
#include "../StaticLib1/sub.h"
#include "../StaticLib1/div.h"
#include "../StaticLib1/multi.h"
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << "add = " << add(a, b) << endl;
    cout << "sub = " << subtract(a, b) << endl;
    cout << "multi = " << multiply(a, b) << endl;
    cout << "sub = " << divition(a, b) << endl;
}

