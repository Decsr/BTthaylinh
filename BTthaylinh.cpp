#include<bits/stdc++.h>
using namespace std;
long long dem=0,i,a,b;
int main()
{
    for (i=100000;i<=999999;i++)
        if (floor(sqrt(i))==sqrt(i))
        {
            b=i%1000;
            a=i/1000;
            if (b-a==4) dem++;
        }
    printf("%lld",dem);
}
