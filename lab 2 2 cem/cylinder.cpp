#include "bits/stdc++.h"

#include "cylinder.h"

using namespace std;

void cylinder::setName(char * n) {
    cout << "enter the name of the cylinder: ";
    cin >> n;
    strcpy(name, n);
}
void cylinder::getName(char * n) {
    strcpy(n, name);
}
void cylinder::setRadius(float r) {
    cout << "enter a radius value: ";
    cin >> r;
    radius = r;
}
float cylinder::getRadius() {
    return radius;
}
void cylinder::setHeight(float h) {
    cout << "enter the height of the cylinder: ";
    cin >> h;
    height = h;
}
float cylinder::getHeight() {
    return height;
}
