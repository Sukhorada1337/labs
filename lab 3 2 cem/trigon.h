#ifndef UNTITLED_TRIGON_H
#define UNTITLED_TRIGON_H
#include "bits/stdc++.h"

using namespace std;
    int const maxlenth = 256;

class trigon {

private:
    float square;
    float height;
    float side;
    float volume;
    string name;

    float Square();
    float Volume();


public:
    trigon();
    trigon(string name,float height, float side);
    trigon(const trigon &src);
    ~trigon();

    float getHeight();
    float getSide();
    string getName();
    void Print();
};


#endif //UNTITLED_TRIGON_H
