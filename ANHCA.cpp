#include<bits/stdc++.h>;
using namespace std;
long long i,j,n,t,tam,a[10000];
int main()
{
    freopen("ANHCA.INP","r",stdin);
    freopen("ANHCA.OUT","w",stdout);
    i=0;
    scanf("%lld",&n);
    while (n!=0)
    {
        i++;
        a[i]=n%10;
        n=n/10;
    }
    t=i;
    for (i=1;i<=t-1;i++)
    {
        for (j=i+1;j<=t;j++)
            if (a[i]<a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
    }
    for (i=1;i<=t;i++)
        printf("%lld",a[i]);
}
