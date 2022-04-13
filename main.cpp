#include "bits/stdc++.h"
#include "Complex.h"

using namespace std;

int main() {
    int choice;
    Complex a(10,10), b(10,10), c;
    cout << "a = "; a.show();
    cout << "b = "; b.show();
    cout << "c = "; c.show();
    cout << endl;

    printf( "Выберите: \n"
            "1 - a!=b\n"
            "2 - a * b\n"
            "3 - ++c\n"
            "4 - c++\n"
            "5 - a = b\n"
            "Ваш выбор: ");
    cin >> choice;

    while (1){
        if (choice == 1){
            printf("c = a!=b \n");
            c = a!=b;
            cout << "c = "; c.show();
            break;
        }
        else if (choice == 2){
            printf("c = a * b \n");
            c = a * b;
            cout << "c = "; c.show();
            break;
        }
        else if (choice == 3){
            printf("a = ++c \n");
            a = ++c;
            cout << "a = "; a.show();
            cout << "c = "; c.show();
            break;
        }
        else if (choice == 4){
            printf("a = c++ \n");
            a = c++;
            cout << "a = "; a.show();
            cout << "c = "; c.show();
            break;
        }
        else if (choice == 5){
            printf("c = a = b \n");
            c = a = b;
            cout << "a = "; a.show();
            cout << "b = "; b.show();
            cout << "c = "; c.show();
            break;
        }
    }


}
