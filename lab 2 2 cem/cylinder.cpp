//
// Created by Пысь on 19.02.2022.
//

#include "cylinder.h"
void cylinder::setName(char *n) {
    strcpy(name, n);
}
void cylinder::getName(char *n) {
   strcpy(n, name);
}
void cylinder::setRadius(float r) {
    cout << "znachenie radiusa: ";
    cin >> r;
    radius = r;
}
float cylinder::getRadius() {
    return radius;
}
void cylinder::setHeight(float h) {
    cout << "znachenie visoti : ";
    cin >> h;
    height = h;
}
float cylinder::getHeight() {
    return height;
}

