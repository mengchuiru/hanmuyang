#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m, a, b, c;
    string s;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;
        if (x == "a" || x == "b" || x == "c")
        {
            m = x[0] - 'a';
            cin >> a >> b;
        }
        else
        {
            a = 0;
            int tmp = 1;
            cin >> b;
            for (int i = x.size() - 1; i >= 0; i--)
            {
                a += (x[i] - '0') * tmp;
                tmp *= 10;
            }
        }
        if (m == 0)
        {
            c = a + b;
            s = to_string(a) + "+" + to_string(b) + "=" + to_string(c);
            cout << s << endl;
            cout << s.size() << endl;
        }
        else if (m == 1)
        {
            c = a - b;
            s = to_string(a) + "-" + to_string(b) + "=" + to_string(c);
            cout << s << endl;
            cout << s.size() << endl;
        }
        else if (m == 2)
        {
            c = a * b;
            s = to_string(a) + "*" + to_string(b) + "=" + to_string(c);
            cout << s << endl;
            cout << s.size() << endl;
        }
    }

    return 0;
}