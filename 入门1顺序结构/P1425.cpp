#include <bits/stdc++.h>
using namespace std;
/**
 * 小鱼游泳的时间
 * 1、题目给我笑死
 * 2、ez
 */
int a, b, c, d, temp, h, m;
int main()
{
    cin >> a >> b >> c >> d;
    temp = (c * 60 + d) - (a * 60 + b);
    h = temp / 60;
    m = temp % 60;
    cout << h << ' ' << m;
    return 0;
}