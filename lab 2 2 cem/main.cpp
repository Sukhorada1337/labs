#include "cylinder.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    cylinder one;
    char name[25] = {
            "-"
    };
    one.setName(name);
    one.setHeight(0);
    one.setRadius(0);

    cout << "cylinder name: ";
    // 2*3.14*r*(r+h)
    // s*h
    char new_name[25];
    one.getName(new_name);
    cout << new_name << endl;
    cout << " height: " << one.getHeight() << endl;
    cout << " radius: " << one.getRadius() << endl;
    cout << " square: " << one.getSquare() << endl;
    cout << " volume: " << one.getVolume() << endl;
}
