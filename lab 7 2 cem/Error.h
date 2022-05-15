#ifndef LAB_7_2_CEM_ERROR_H
#define LAB_7_2_CEM_ERROR_H
#include "bits/stdc++.h"

using namespace std;
class Error {
    string str;
public:
    Error(string s) {
        str = s;
    }
    void what() {
        cout << str << endl;
    }
};

#endif //LAB_7_2_CEM_ERROR_H
