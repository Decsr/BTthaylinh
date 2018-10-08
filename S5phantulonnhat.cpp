#include<bits/stdc++.h>
using namespace std;
int s,a[10000],n,i,j,tam;
int main()
{
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%d",&a[i]);
    for (i=1;i<=n-1;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (a[i]<a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    s=0;
    for (i=1;i<=5;i++) s+=a[i];
    printf("%d",s);
}
