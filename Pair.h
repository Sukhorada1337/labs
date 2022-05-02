#ifndef LAB_5_2_PAIR_H
#define LAB_5_2_PAIR_H
#include "bits/stdc++.h"

using namespace std;
class Pair {
protected:
    int re, im;
public:
    Pair();
    Pair(int);
    Pair(int, int);
    Pair(const Pair & c);
    ~Pair();
    int getRE() {
        return re;
    }
    int getIM() {
        return im;
    }
    void setRE(int);
    void setIM(int);

    Pair operator + (Pair op2);
    Pair operator = (Pair op2);

    friend istream & operator >> (istream & in , Pair & c);
    friend ostream & operator << (ostream & out, const Pair & c);
};


#endif //LAB_5_2_PAIR_H
