#ifndef LAB_4_2CEM_COMPLEX_H
#define LAB_4_2CEM_COMPLEX_H


class Complex {
    int re, im;
public:
    Complex() {

    }
    Complex(double r) {
        re = r;
        im = 0;
    }

    Complex (double r, double i)
    {
        re = r;
        im = i;
    }

    Complex (const Complex &c)
    {
        re = c.re;
        im = c.im;
    }

    ~Complex ()
    {
    }

    int getRE(){
        return re;
    }
    int getIM(){
        return im;

    }

    Complex operator = ( Complex op2);
    friend Complex operator++ ( Complex &op1);
    friend Complex operator++ ( Complex &op1, int notused);
    friend bool operator!= (Complex &op1, Complex &op2);
    friend bool operator == (Complex &op1, Complex &op2);
    void show();
};
Complex operator* (Complex &op1, Complex &op2);
#endif //LAB_4_2CEM_COMPLEX_H
