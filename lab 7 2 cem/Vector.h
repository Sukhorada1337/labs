#ifndef LAB_7_2_CEM_VECTOR_H
#define LAB_7_2_CEM_VECTOR_H
#include "bits/stdc++.h"

using namespace std;
const int maxsize = 20;
class Vector {
    int size;
    int * beg;

public:
    Vector() {
        size = 0;
        beg = 0;
    }
    Vector(int s);
    Vector(int s, int * mas);
    Vector(const Vector & v);
    ~Vector();
    Vector & operator = (const Vector & v);
    int operator[](int i);
    int operator()(int a);
    Vector operator + (int a);
    Vector operator - (int a);
    friend ostream & operator << (ostream & out, const Vector & v);
    friend istream & operator >> (istream & in, Vector & v);
};
#endif //LAB_7_2_CEM_VECTOR_H