#include "Vector.h"
#include "Error.h"
#include <iostream>
using namespace std;
Vector::Vector(int s)
{
    if(s>maxsize) throw Error("!Вектор больше максимального значения!\n");
    size=s;
    beg=new int [s];
    for(int i=0; i<size; i++)
        beg[i]=i+1;
}
Vector::Vector(const Vector &v)
{
    size=v.size;
    beg=new int [size];
    for(int i=0; i<size; i++)
        beg[i]=v.beg[i];
}
Vector::~Vector()
{
    if (beg!=0) delete[]beg;
}
Vector::Vector(int s,int *mas)
{
    if(s>maxsize) throw Error("!Вектор больше максимального значения!\n");
    size=s;
    beg=new int[size];
    for(int i=0; i<size; i++)
        beg[i]=mas[i];
}
Vector& Vector::operator =(const Vector &v)
{
    if(this==&v)return *this;
    if(beg!=0) delete []beg;
    size=v.size;
    beg=new int [size];
    for(int i=0; i<size; i++)
        beg[i]=v.beg[i];
    return*this;
}
ostream& operator<<(ostream&out, const Vector&v)
{
    if(v.size==0) out<<"!Вектор пуст!\n";
    else
    {
        for (int i=0; i<v.size; i++)
            out<<v.beg[i]<<" ";
        out<<endl;
    }
    return out;
}
istream& operator >>(istream&in, Vector&v)
{
    for(int i=0; i<v.size; i++)
    {
        cout<<">";
        in>>v.beg[i];
    }
    return in;
}
int Vector::operator [](int i)
{
    if(i<0) throw Error("!Индекс не может быть пустым!");
    if(i>=size) throw Error("!Индекс больше размера вектора!");
    return beg[i];
}
Vector Vector::operator +(int a)
{
    Vector temp(size, beg);
    delete[]beg;
    if (size < 0) throw Error("!Размер вектора меньше 0!");
    beg = new int[size];
    for (int i = 0; i < size; i++) {
        beg[i] = temp.beg[i]+a;
    }
    return *this;
}
Vector Vector::operator -(int n) {
    if (size == 0) throw Error("!Вектор пуст!");
    Vector temp(size, beg);
    delete[]beg;
    size -= n;
    if (size < 0) throw Error("!Размер меньше нуля!");
    beg = new int[size];
    for (int i = 0; i < size; i++) {
        beg[i] = temp.beg[i];
    }
    return *this;
}

int Vector::operator()(int a) {
    if (a < 0) throw Error("!Размер меньше нуля!");
    Vector temp(size, beg);
    size = a;
    if (beg != 0) {
        delete[]beg;
    }
    beg = new int[size];
    for (int i = 0; i < size; i++) {
        if (i < temp.size) {
            beg[i] = temp.beg[i];
        }
        else {
            beg[i] = i+1;
        }
    }
}


