#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long Max,tam,t,a[1000001],n;
bool snt[1000100];
void sangnt()
{
    Max=1000100;
    long long i,j;
    for (i=2;i<=Max;i++)
    {
        snt[i]=true;
    }

    i=2;
    while (i<=floor(sqrt(Max)))
    {
        while (snt[i]==false)
            i++;
        for (j=2;j<=Max/i;j++)
            {
                snt[i*j]=false;
            }
        i++;
    }
}
int main()
{
    scanf("%lld",&n);
    for (t=1;t<=n;t++)
        scanf("%lld",&a[t]);
    sangnt();
    sort(a+1,a+n+1);
    tam=2;
    for (t=1;t<=n;t++)
    {
        while (snt[tam]==false)
            tam++;
        if (tam<a[t]) {printf("%lld",tam);exit(0);}
        else tam=a[t]+1;
    }
}
