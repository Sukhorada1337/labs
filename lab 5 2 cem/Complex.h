#ifndef LAB_5_2_COMPLEX_H
#define LAB_5_2_COMPLEX_H
#include "Pair.h"


class Complex: public Pair {
public: Complex();
    Complex(int, int);
    Complex(const Complex & );~Complex();
    int getRE() {
        return re;
    }
    int getIM() {
        return im;
    }
    void setRE(int);
    void setIM(int);

    Complex & operator = (const Complex & );
    friend Complex operator - (Complex op1, Complex op2);
    friend Complex operator + (Complex op1, Complex op2);

    friend istream & operator >> (istream & in , Complex & c);
    friend ostream & operator << (ostream & out,
                                  const Complex & c);
};
Complex operator * (Complex op1, Complex op2);
#endif //LAB_5_2_COMPLEX_H
