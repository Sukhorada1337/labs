#include "Vector.h"
#include "Error.h"
#include "bits/stdc++.h"

using namespace std;

int main()
{
    try
    {
        Vector a(10);
        Vector b;
        Vector c;
        b = a - 3;
        cout << b;
        b = a + 3;
        cout << b;
        b = a - 2;
        cout << b;
        c(4);
        cout << c;

    }
    catch(Error &e)
    {
        e.what();
    }
    return 0;
}
