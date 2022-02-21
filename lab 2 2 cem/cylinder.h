//
// Created by Пысь on 19.02.2022.
//

#ifndef UNTITLED1_CYLINDER_H
#define UNTITLED1_CYLINDER_H
#include <bits/stdc++.h>

using namespace std;
class cylinder {


private:
    char name[25];
    float square;
    float radius;
    float height;
    float volume;
    static const int maxlen = 255;
    float setSquare(){
       square = 2*height*(radius+height);
        return square;
    };
    float setVolume (){
        volume = square * height;
        return volume;
    };

public:
    void setName(char *n);
    void getName(char *n);
    float getSquare(){
        return setSquare();
    };
    void setRadius(float r);
    float getRadius();
    void setHeight(float h);
    float getHeight();
    float getVolume(){
        return setVolume();
    };
};

#endif //UNTITLED1_CYLINDER_H
