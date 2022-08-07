#include <iostream>
#include <string>

using namespace std;
// 0-670-82162-4
int main()
{
    string s0, s;
    int su = 0;
    cin >> s0;
    s = s0.substr(0, 1) + s0.substr(2, 3) + s0.substr(6, 5);
    for (int i = 1; i <= 9; i++)
    {
        su += i * (s[i - 1] - '0');
    }
    su %= 11;
    char c;
    if (su == 10)
        c = 'X';
    else
        c = '0' + su;
    if (c == s0[s0.length() - 1])
        cout << "Right" << endl;
    else
    {
        s0[s0.length() - 1] = c;
        cout << s0 << endl;
    }
    return 0;
}