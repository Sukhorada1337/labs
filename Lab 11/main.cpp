#include <bits/stdc++.h>

using namespace std;

int main()
{
    char S[124]; // ������ ��������
char c = '+'; // ������� ������
int i;
bool f_is; // f_is=true - ������ ���� � ������, ����� f_is=false
   cout << " Enter the text: " << endl; // �������� ������
   cin >> S; // ����� ������

for (i=0; i<strlen(S); i++)
    if (S[i]==c)
    {
        f_is = true; // ������ c ���� � ������ S
        break;
    }

if (f_is)
    cout << "symbol " << "'+'" << " available" << endl;  // ����� "������ ����"
else
    cout << "symbol " << "'+'" << " not available" << endl; // ����� "������� ���"

for (i=0; i<strlen(S); i++)
    if (S[i] == '+'){ // ���� ������ "+", �� ����� ��� ������ ���������� "-"
        S[i-1] = '-';
        break;
    }
    cout << "specified text: " << S << endl; // ����� ������



return 0;
}
