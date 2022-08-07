#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int ans = 0;
    getline(cin, s);
    for (char c : s)
    {
        if (c != ' ')
            ans++;
    }
    cout << ans << endl;

    return 0;
}