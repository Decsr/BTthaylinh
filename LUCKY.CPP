#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int max1=0,tam,k,a[100010],n,b[100010],i;
int main()
{
    freopen("LUCKY.INP","r",stdin);
    freopen("LUCKY.OUT","w",stdout);
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for (i=1;i<=n;i++)
    {
        tam=0;
        while (a[i]>=0)
        {
            tam+=a[i]%10;
            a[i]=a[i]/10;
            if (a[i]==0)
            {
                a[i]=tam;
                if tam/10
            }
        b[a[i]]++;
        max1=max(max1,a[i]);
    }
    sort(b+1,b+max1+1);
    max1=0;
    for (i=1;i<=n;i++)
    {
        max1=max(max1,b[a[i]]);
        k=a[i];
//printf("%d",b[i]);
    }
    printf("%d",k);
}
