#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long n,i,b;
long long a[1000001];
int main()
{
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    sort(a+1,a+n+1);
    b=2;
    i=1;
    while (b>0)
        {
        	if (b*b==a[i]) {b++;}
        	if (b*b<a[i]) {printf("%lld",b*b);exit(0);}
            else i++;
            if (i==n) {i=1;b++;}
        }
}
