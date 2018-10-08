#include<bits/stdc++.h>
using namespace std;
int a,b,n,m;
int main()
{
    scanf("%d %d",&a,&b);
    m=a;
    n=b;
    while (a!=b)
        (a>b)? a=a-b:b=b-a;
    printf("a=%d b=%d",m/a,n/b);
}
