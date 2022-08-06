// 润年  1、4整除  2、 100 400整除

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (!((n % 4 || !(n % 100) )&& n % 400 ))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}