#include <iostream>

using namespace std;
/*
0 0   ---   0 3
0 1  ------ 1 3
0 2   ----- 2 3
0 3 ------- 3 3

1 0 ------  0 2
1 1     --- 1 2

i j          j  , n-1-i

*/

char m0[12][12], m1[12][12], p[10][12][12];

int main()
{
    int n;
    bool tmp = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m0[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m1[i][j];
    // 90
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[1][j][n - 1 - i] = m0[i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[1][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 1 << endl;
        return 0;
    }
    // 180
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[2][j][n - 1 - i] = p[1][i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[2][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 2 << endl;
        return 0;
    }
    // 270
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[3][j][n - 1 - i] = p[2][i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[3][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 3 << endl;
        return 0;
    }
    // 水平翻转
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[4][i][n - 1 - j] = m0[i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[4][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 4 << endl;
        return 0;
    }
    //组合 90
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[5][j][n - 1 - i] = p[4][i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[5][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 5 << endl;
        return 0;
    }
    //组合 180
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[6][j][n - 1 - i] = p[5][i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[6][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 5 << endl;
        return 0;
    }
    //组合 270
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            p[7][j][n - 1 - i] = p[6][i][j];
    //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != p[7][i][j])
                tmp = false;
    if (tmp)
    {
        cout << 5 << endl;
        return 0;
    }

    // 不改变：原图案不改变。
        //判断
    tmp = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m1[i][j] != m0[i][j])
                tmp = false;
    if (tmp)
    {
        cout << 6 << endl;
        return 0;
    }

    cout << 7 <<endl;
    return 0;
}