#include<bits/stdc++.h>
using namespace std;
long long n,i,b=1,x=1,s=0,a[3001000];
int main()
{
    freopen("SEQUENCE.INP","r",stdin);
    freopen("SEQUENCE.OUT","w",stdout);
    scanf("%lld",&n);
    i=1;
    while (1)
    {
        if (s>n)
        {
            b--;
            s=s-b;
            x=x-2;
            n=n-s;
            printf("%lld",a[x]+b*(n-1));
            break;
        }
        s+=b;
        a[x]=i;
        i+=b*(b-1);
        x++;
        a[x]=i;
        x++;
        b++;
        i+=(b-(i%b));
    }
}
