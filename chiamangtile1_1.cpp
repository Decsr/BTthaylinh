#include<bits/stdc++.h>
using namespace std;
long long n,j,i,a[10000001],f[10000001],dem=0;

int main()
{
    f[0]=0;
    scanf("%lld",&n);
    for ( i=1; i<=n; i++ )
    {
        scanf("%lld",&a[i]);
        f[i]=a[i]+f[i-1];
    }
    for ( i=1; i<=n; i++ )
    {
        if ( f[i] == f[n] - f[i] )
        {
            for ( j=1; j<=i; j++ ) printf("%lld ",a[j]);
            printf("\n");
            for ( j=i+1; j<=n; j++ ) printf("%lld ",a[j]);
            dem++;
            break;
        }
    }
    if ( dem == 0 ) printf("khong co");
}
