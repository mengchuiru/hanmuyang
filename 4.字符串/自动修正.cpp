#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
    }
    cout << s << endl;

    return 0;
}