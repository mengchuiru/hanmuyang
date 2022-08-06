#include <iostream>

using namespace std;

int l, m, u, v;
bool st[10005] = {false};

int main()
{
    cin >> l >> m;
    while (m--)
    {
        cin >> u >> v;
        for (int i = u; i <= v; i++)
            st[i] = true;
    }

    int ans = 0;
    for (int i = 0; i <= l; i++)
    {
        if (!st[i])
            ans++;
    }
    cout << ans << endl;

    return 0;
}