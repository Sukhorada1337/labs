#include "bits/stdc++.h"

#include "Pair.h"

using namespace std;

Pair::Pair() {

}
Pair::Pair(int r) {
    re = r;
    im = 0;
}

Pair::Pair(int r, int i) {
    re = r;
    im = i;
}

Pair::Pair(const Pair & c) {
    re = c.re;
    im = c.im;
}

Pair::~Pair() {}

void Pair::setRE(int r) {
    re = r;
}

void Pair::setIM(int i) {
    im = i;
}

Pair Pair::operator + (Pair op2) {
    Pair temp;
    temp.re = im + re;
    temp.im = op2.im + op2.re;
    return temp;
}

Pair Pair::operator = (Pair op2) {

    re = op2.re;
    im = op2.im;
    return *this;
}

istream & operator >> (istream & in , Pair & c) {
    cout << "\nВвод первого числа пары: "; in >> c.re;
    cout << "\Ввод второго числа пары: "; in >> c.im;
    return in;
}

ostream & operator << (ostream & out,const Pair & c) {
    out << c.re << ", " << c.im;
    return out;
}
