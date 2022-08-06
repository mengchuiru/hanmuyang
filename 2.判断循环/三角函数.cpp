#include <iostream>

using namespace std;

int main()
{
    int a, b, c, t;
    cin >> a >> b >> c;

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }

    int aa = a, cc = c;
    
    while (aa!=0)
    {
        t = cc%aa;
        cc = aa;
        aa = t;
    }
    cout << a/cc << '/' << c/cc << endl;

    return 0;
}