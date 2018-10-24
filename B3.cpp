#include<bits/stdc++.h>
using namespace std;
long long i,dem=0;


int main()
{
    for ( i=100000; i<=999999; i++ )
        if ( floor(sqrt(i)) == sqrt(i) )
            if ( i/1000 == i%1000 - 4 )
                dem++;
    printf("%lld",dem);
}
