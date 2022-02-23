#include <bits/stdc++.h>

using namespace std;


void foo(char* arr){




}

int main() {
    string str1;
char* arr[254];
  ifstream f1;
    f1.open("D:\\d1.txt");
 while (!f1.eof())//зчитування з файлу всього тексту в рядок s1
 {
getline(f1, str1); // зчитування робимо порядково в рядок str1
 }

f1.close();

string str = string(arr[254]);

         ofstream f2;
f2.open("D:\\d2.txt");

f2 << str1 << endl; // without

f2.close();

foo(arr[254]);
  return 0;
}

