#include <bits/stdc++.h>
using namespace std;
int s, v, x, h, m, temp;
/**
 * 1、ceil()向上取整但没用直接if
 * 2、只考虑了HH的补位没有考虑MM的补位
 * 3、粗心对参数加引号
*/
int main()
{
    cin >> s >> v;
    temp = 8 * 60 + 24 * 60;
    // x = s/v + 1;向上取整函数ceil() 在c++中整数除法直接忽略小数位
    if (s % v == 0)
        x = s / v + 10;
    else
        x = s / v + 1 + 10;
    h = (temp - x) / 60 % 24;
    m = (temp - x) % 60;
    if (h < 10)
    {
        if (m < 10)
        {
            cout << '0' << h << ':' << '0' << m;
        }
        else
        {
            cout << '0' << h << ':' << m;
        }
    }
    else if (m < 10)
    {
        cout << h << ':' << '0' << m;
    }
    else
    {
        cout << h << ':' << m;
    }

    return 0;
}