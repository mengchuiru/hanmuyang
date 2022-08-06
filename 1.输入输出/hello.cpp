#include <iostream> //导入输入输出流
#include <cstdio>   //
#include <cmath>

using namespace std; //标准命名空间

int main() //主函数
{
    int a, b;
    bool bo = true;
    scanf("%d %d", &a, &b);
    double c = sqrt(a); //根号
    int d =  pow(a,b);

    printf("%08d\n%08d\n%.2lf",a,b,a*1.0/b);


    return 0;
}