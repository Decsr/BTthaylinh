#include<bits/stdc++.h>
using namespace std;
long long a[10000001],dem[10000001];
long long n,i;
int main()
{
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        dem[a[i]]++;
    }
    for (i=1;i<=n;i++)
        if (dem[a[i]]!=0)
            {
                printf("%lld %lld\n",a[i],dem[a[i]]);
                dem[a[i]]=0;
            }
}
