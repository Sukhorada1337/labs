#include "trigon.h"

#include "bits/stdc++.h"

using namespace std;

float trigon::Volume() {
    return (height * side + side);
}

float trigon::Square() {
    return (0.5 * side * height);
}

void trigon::Print() {

    square = Square();
    volume = Volume();

    printf("\nТреугольник: \n");
    cout << "Имя: " << name << "\t" << endl;
    printf("Высота: %f\tСторона: %f\tПощадь: %f\tОбъем: %f\n\n", height, side, square, volume);
}

trigon::trigon() {
    printf("Конструктор с зам.");
    height = 0;
    side = 0;
    square = 0;
    volume = 0;
    name = "N/A";

}

trigon::trigon(string name, float height, float site) {
    printf("\nКонструктор с параметрами\n");
    printf("Enter name:\t");
    cin >> name;
    printf("Enter height:\t");
    cin >> height;
    printf("Enter side:\t");
    cin >> side;

    this -> name = name;
    this -> height = height;
    this -> side = side;

    square = Square();
    volume = Volume();
}

trigon::trigon(const trigon & scr) {
    printf("\nВызван конструктор копирования:");

    name = scr.name;
    height = scr.height;
    side = scr.side;
    square = scr.square;
    volume = scr.volume;

}

trigon::~trigon() {
    printf("\nВызван деструктор");

}

float trigon::getHeight() {
    return height;
}

float trigon::getSide() {
    return side;
}

string trigon::getName() {
    return name;
}