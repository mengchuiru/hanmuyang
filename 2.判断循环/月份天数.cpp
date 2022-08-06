#include <iostream>

using namespace std;

int main()
{
    int y, m;
    cin >> y >> m;
    if (m == 1)
        cout << 31 << endl;
    else if (m == 2)
        cout << 28 << endl;
    else if (m == 3)
        cout << 31 << endl;
    else if (m == 4)
        cout << 30 << endl;

    return 0;
}