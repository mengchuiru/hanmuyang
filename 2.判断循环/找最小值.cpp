#include <iostream>

using namespace std;

int main()
{
    int n, a, min = 1010;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < min)
            min = a;
    }
    cout << min << endl;
    return 0;
}