#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = (s[i] - 'a' + n) % 26 + 'a';

        //    'a' +()%26
    }
    cout << s << endl;

    return 0;
}