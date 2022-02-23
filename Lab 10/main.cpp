#include <bits/stdc++.h>

using namespace std;

void sort_str(char * i, int n) {

  char s[80];



  int a, b;
  char t;

  for (a = 0; a < n; a++)
    for (b = n - 1; b >= a; b--) {
      if (i[b - 1] < i[b]) {
        t = i[b - 1];
        i[b - 1] = i[b];
        i[b] = t;
      }
    }






}
int main(void) {

  char s[80];


    ofstream f2;
  string path = "D:\\d2.txt";
  f2.open(path);

  if (!f2.is_open()) {
    cout << "File d2 NOT OPEN!" << endl; }



  gets(s);
  sort_str(s, strlen(s));



     f2 << "String in alphabetical order - " << s << endl;


 f2.close();

}
