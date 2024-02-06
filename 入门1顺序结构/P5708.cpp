#include<bits/stdc++.h>
using namespace std;
//float 保留1位精度不够 5个测试有一个不过
double a,b,c,s,p;
int main(){
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",s);
    return 0;
}