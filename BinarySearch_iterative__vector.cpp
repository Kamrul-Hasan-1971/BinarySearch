#include <bits/stdc++.h>
using namespace std;
///...................................*****.................................................///
///                  Kamrul Hasan ( icthasan36@gmail.com )                                  ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
#define           ll               long long int
#define           pii              pair < ll, ll>
vector<ll>v;
ll binarySearch(ll l, ll r, ll x)
{
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (v[m] == x)
            return m;
        if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    ll e,start,endd,search_value;
    e=binarySearch(start,endd,search_value);
    return 0;
}
