#include<bits/stdc++.h>
using namespace std;
#define  CIN            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  ll             long long int
ll N, A , R , M ,i;
vector<ll>v1(100005),cnt(100005);
ll fun(ll mid)
{
    ll taka = 0,lagbe=0,extra=0;
    for( i = 0 ; i < N ; i++)
    {
        if(v1[i]>=mid) extra+=(v1[i]-mid);
        else lagbe += (mid-v1[i]);
    }
    if(lagbe>extra)
    {
        taka+=(lagbe-extra)*A;
        lagbe=extra;
    }
    else if(extra>lagbe)
    {
        taka+=(extra-lagbe)*R;
        extra=lagbe;
    }
    ll p = (lagbe*A)+(extra*R);
    ll q = M*extra;
    if(p < q) taka += p;
    else taka+=q;
    return taka;
}
int main()
{
    CIN;
    cin >> N >> A >> R >> M ;
    for( i = 0 ; i < N ; i++ ) cin>>v1[i];
    ll l=0,h=10e9,ans=LLONG_MAX;
    while(l<=h)
    {
        ll mid1 = l+(h-l)/3;
        ll mid2 = h-(h-l)/3;
        ll x = fun(mid1);
        ll y = fun(mid2);
        if(x<=y)
        {
            ans = min(x,ans);
            h=mid2-1;
        }
        else
        {
            ans = min(y,ans);
            l = mid1+1;
        }
    }
    cout<<ans<<endl;
    return 0 ;
}
//https://codeforces.com/contest/1355/problem/E
