#include<bits/stdc++.h>
using namespace std;
long long n,i,s=0,rest=0,m,res=0;
void input()
{
    scanf("%lld",&n);
}
namespace SNT {
    int main()
    {
        m=n;
        for (i=2;i<=floor(sqrt(n));i++)
            if (n%i==0) { res++; break; }
        while (m>0)
        {
            s+=m%10;
            m/=10;
        }
        for (i=2;i<=floor(sqrt(s));i++)
            if (s%i==0) { rest++; break; }
        if (res==0 && rest==0) printf("YES"); else printf("NO");
    }
}
int main()
{
    freopen("SIEUNTO.INP","r",stdin);
    freopen("SIEUNTO.OUT","w",stdout);
    input();
    SNT::main();
}
