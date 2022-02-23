#include <bits/stdc++.h>

using namespace std;

int main()
{
    char S[124]; // строка символов
char c = '+'; // искомый символ
int i;
bool f_is; // f_is=true - символ есть в строке, иначе f_is=false
   cout << " Enter the text: " << endl; // печатаем строку
   cin >> S; // вывод строки

for (i=0; i<strlen(S); i++)
    if (S[i]==c)
    {
        f_is = true; // символ c есть в строке S
        break;
    }

if (f_is)
    cout << "symbol " << "'+'" << " available" << endl;  // вывод "символ есть"
else
    cout << "symbol " << "'+'" << " not available" << endl; // вывод "символа нет"

for (i=0; i<strlen(S); i++)
    if (S[i] == '+'){ // если символ "+", то перед ним символ становится "-"
        S[i-1] = '-';
        break;
    }
    cout << "specified text: " << S << endl; // вывод строки



return 0;
}
