#include<bits/stdc++.h>
using namespace std;

#define          ll                     long long int

double bisection( ll x )
{
    double low = 0.0 ;
    double high = x , mid = 0.0 ;
    while( high - low >= 0.00001 )
    {
        mid = (low+high) / 2 ;
        if( mid * mid > x )
        {
            high = mid ;
        }
        else if( mid * mid < x )
        {
            low = mid ;
        }
        else break;
    }
    return mid ;
}


int main()
{
    ll b ;
    cin >> b ;
    cout<<bisection(b);
    return 0;
}
