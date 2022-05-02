
#include "Complex.h"
#include "bits/stdc++.h"


using namespace std;

Complex::Complex() {

}

Complex::Complex(int r, int i): Pair(r, i) {}

Complex::Complex(const Complex & L) {
    re = L.re;
    im = L.im;
}

Complex::~Complex() {

}
istream & operator >> (istream & in , Complex & l) {
    cout << "\nВвод первого числа пары: "; in >> l.re;
    cout << "\Ввод второго числа пары: "; in >> l.im;
    return in;
}

ostream & operator << (ostream & out,const Complex & l) {
    out << l.re << ", " << l.im;
    out << "\n";
    return out;
}
Complex & Complex::operator = (const Complex & l) {
    re = l.re;
    im = l.im;

    return *this;
}

Complex operator - (Complex op1, Complex op2) {
    Complex temp;
    temp.re = op1.re - op1.im;
    temp.im = op2.re - op2.im;
    return temp;
}

Complex operator + (Complex op1, Complex op2) {
    Complex temp;
    temp.re = op1.re + op1.im;
    temp.im = op2.re + op2.im;
    return temp;
}

Complex operator * (Complex op1, Complex op2) {
    return Complex(op1.getRE() * op2.getRE() - op1.getIM() * op2.getIM(), op1.getRE() * op2.getIM() + op1.getIM() * op2.getRE());
}
