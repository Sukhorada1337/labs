#ifndef LAB_2_2_CEM_CYLINDER_H
#define LAB_2_2_CEM_CYLINDER_H

using namespace std;
class cylinder {

private:
    char name[25];
    float square;
    float radius;
    float height;
    float volume;
    static
    const int maxlen = 255;
    float setSquare() {
        square = 2 * height * 3.15 * (radius + height);
        return square;
    };
    float setVolume() {
        volume = square * height;
        return volume;
    };

public:
    void setName(char * n);
    void getName(char * n);
    float getSquare() {
        return setSquare();
    };
    void setRadius(float r);
    float getRadius();
    void setHeight(float h);
    float getHeight();
    float getVolume() {
        return setVolume();
    };
};

#endif //LAB_2_2_CEM_CYLINDER_H
