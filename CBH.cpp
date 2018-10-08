#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long x,i,j,s=1;
int main()
{
    freopen("CBH.INP","r",stdin);
    freopen("CBH.OUT","w",stdout);
    scanf("%lld",&x);
    i=2;
    while (i*i<=x)
    {
        if (x%(i*i)==0)
        {
            s=s*i;
            x=x/(i*i);
        }
        else i++;
    }
    printf("%lld",s);
}

