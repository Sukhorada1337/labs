#include "bits/stdc++.h"
#include "Complex.h"

using namespace  std;

Complex Complex::operator=(Complex op2) {
    re = op2.re;
    im = op2.im;

    return *this;
}
bool operator== ( Complex &op1, Complex &op2)
{
    return (op1.im == op2.im && op1.re == op2.re);
}

bool operator!= ( Complex &op1, Complex &op2){
    return !(op1 == op2);
}

Complex operator* ( Complex &op1, Complex &op2){
    return Complex(op1.getRE() * op2.getRE(), op1.getIM() * op2.getIM());
}

Complex operator++( Complex &op1){
    op1.re++;
    op1.im++;
    return op1;
}

Complex operator++( Complex &op1, int notused){
    Complex temp = op1;
    op1.re++;
    op1.im++;
    return temp;
}
void Complex::show(){
    cout << re << ", " << im << "\n";
}