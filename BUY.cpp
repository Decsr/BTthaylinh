#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int n;
long long m,a[101],i,j,tam;
int main()
{
    freopen("BUY.INP","r",stdin);
    freopen("BUY.OUT","w",stdout);
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%lld",&a[i]);
    for (i=1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]>a[j])
                {
                    tam=a[i];
                    a[i]=a[j];
                    a[j]=tam;
                }
    tam=1;
    for (i=1;i<=n;i++)
    {
        if (tam<a[i])
        {
            printf("%lld",tam);
            exit(0);
        }
        else tam+=a[i];
    }
    printf("%lld",tam);
}
