#include<bits/stdc++.h>
using namespace std;
/**
 * 大象喝水
 * 1.1立方分米水为1升即1000立厘米
*/
int h,r,need,ret;
double sum;
int main(){
    cin >> h >>r;
    need = 1000*20;
    sum = 3.14*r*r;
    ret = ceil(need/sum);
    cout << ret;
    return 0;
}