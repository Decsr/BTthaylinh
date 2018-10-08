#include<bits/stdc++.h>
using namespace std;
long long a[10000001];
long long n,i,j,tam,b=0;
int main()
{
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for (i=1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]<a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
    for (i=n;i>=1;i--)
            if (b<a[i])
            {
                printf("%lld",b);exit(0);
            } else b=a[i]+1;
    printf("%lld",a[1]+1);
}
