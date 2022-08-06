#include <iostream>

using namespace std;

int a[101];

int main()
{
    int n = 0;
    do
    {
        cin >> a[n++];
    } while (a[n - 1] != 0);

    while (--n)
    {
        cout << a[n-1] << ' ';
    }

    return 0;
}