#include<bits/stdc++.h>
using namespace std;
long long n,i,m,s=0,res=0,rest=0;
long long a[10001];
int input()
{
    scanf("%lld",&n);
}
namespace NTO
{
    int main()
    {
        m=n;
        while (m>0)
        {
            s=s*10+m%10;
            m/=10;
        }
        for (i=2;i<=floor(sqrt(n));i++)
            if (n%i==0) { res++; break; }
        for (i=2;i<=floor(sqrt(s));i++)
            if (s%i==0) { rest++; break; }
        if (res==0 && rest==0) printf("YES"); else printf("NO");
    }
}
int main()
{
    freopen("NTO.INP","r",stdin);
    freopen("NTO.OUT","w",stdout);
    input();
    NTO::main();
}
