#include <iostream>

using namespace std;

const int N = 25; //设置常量

int a[N][N];

int main()
{
    int n;
    cin >> n;
    a[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}