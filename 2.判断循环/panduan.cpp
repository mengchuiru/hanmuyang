#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a % 5)
    {
    case 0:
        cout << "0" << endl;
        break;
    case 1:
        cout << "1" << endl;
        break;

    default:
        cout << "2~4" << endl;
        break;
    }

    return 0;
}