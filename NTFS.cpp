#include<bits/stdc++.h>
using namespace std;
long long n,res;
int main()
{
    freopen("NTFS.INP","r",stdin);
    freopen("NTFS.OUT","w",stdout);
    scanf("%lld",&n);
    res=n%1024;
    if (res>=1024/2)
        printf("%lld",n/1024+1);
    else printf("%lld",n/1024);
}
