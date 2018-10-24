#include<bits/stdc++.h>
using namespace std;
long long i,dem=0;

int main()
{
    for ( i=101; i<=999; i+=2 )
        if ( (i%10)+i/100 == (i%100)/10 )
        {
            printf("%lld ",i);
            dem++;
            if ( dem % 10 == 0 ) printf("\n");
        }
}
