#include "trigon.h"

#include <bits/stdc++.h>

using namespace std;

int main() {

    trigon a;
    a.Print();

    trigon b("N/a", 0, 0);
    b.Print();

    trigon c = b;
    c.Print();

//    trigon arr[5] = {};
//    for (int i = 0; i < 5; i++){
//        arr[i].Print();
//    }





















//    int m;
//    printf("Введите:\n"
//           "1 - Конструктор с зам.\n"
//           "2 - Конструктор с пар.\n"
//           "3 - Конструктор с коп.\n"
//           "4 - Все конструкторы\n");
//    cin >> m;
//    while(1) {
//        trigon a;
//        trigon b("N/a",0,0);
//        trigon c = b;
//        if (m == 1) {
//            a.Print();
//            break;
//        } else if (m == 2) {
//            b.Print();
//            break;
//        } else if (m == 3) {
//            c.Print();
//            break;
//        } else if (m == 4){
//            a.Print();
//            b.Print();
//            c.Print();
//        }
//    };


    return 0;
};
