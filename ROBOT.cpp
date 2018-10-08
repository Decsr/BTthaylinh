#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int dem=0,n,i,a;
int main()
{
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (a==1) dem++; else dem--;
    }
    dem=abs(dem);
    printf("%d",dem);
}

