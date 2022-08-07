#include <iostream>
#include <cstring> //字符数组
#include <string>

using namespace std;

string s1 = "23456", s2 = "2345";
//字典顺序
int main()
{
    string ss;
    int a = 12345;
    ss = to_string(a);
    s1[0] = '1';
    puts(s1.c_str());


    cout << strcmp("bcde", "bcd") << endl;

    cout << s1.size() << endl;
    cout << s1.substr(1, 3) << endl;
    ss = s1.insert(0, "123");
    cout << ss << endl;
    cout << int(s1.find("45")) << endl;

    return 0;
}