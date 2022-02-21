#include <bits/stdc++.h>
#include "cylinder.h"


using namespace std;

int main()
{   cylinder one;
    one.setHeight(0);
    one.setRadius(0);
    cout << "cylinder name: ";
    char name[25] = {"ABCD"};
    one.setName(name);
// 2*3.14*r*(r+h)
// s*h
    char new_name[25];
    one.getName(new_name);
    cout << new_name << endl;
    cout << " height: " << one.getHeight() << endl;
    cout << " radius: " << one.getRadius() << endl;
    cout << " square: " << one.getSquare() << endl;
    cout << " volume: " << one.getVolume() << endl;}