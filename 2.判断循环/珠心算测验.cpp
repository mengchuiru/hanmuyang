#include <iostream>

using namespace std;
int a[110];
int b[10010];

int main()
{
    int n, m = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            b[m++] = a[i] + a[j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i] == b[j])
            {
                ans++;
                break;
            }

    cout << ans << endl;
    return 0;
}