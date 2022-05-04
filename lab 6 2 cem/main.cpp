#include <bits/stdc++.h>
using namespace std;

class Number {
public:
    virtual string toStr() = 0;
};
class Rational:public Number {
    string toStr(){
        string a;
        printf("Rational\n");
        printf("Введите рациональное число: ");
        cin >> a;
        return a;
    }
};
class Decimal:public Number {
    string toStr(){
        string c;
        c = '/';
        string x,y;
        printf("\nDecimal");
        printf("\nВведите числитель и знаменатель через 'Enter':\n");
        cin >> x;
        cin >> y;
        return x+c+y;
    }
};


int main() {
    Number *number;
    Rational rational;
    Decimal decimal;
    number = &rational;
    cout << number->toStr() << endl;
    number = &decimal;
    cout << number->toStr() << endl;

    return 0;
}
