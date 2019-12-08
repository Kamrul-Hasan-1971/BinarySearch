#include<bits/stdc++.h>
using namespace std;

#define          ll                     long long int
#define          all(v)        v.begin(),v.end()

vector<ll>v1;

ll lower_bnd(ll key )
{
    //key value then , return positive value
    //no key value but junior , return negative value
    //no key value and no junior ,return 10e10
    ll low = 0 ;
    ll high = v1.size() ;
    high -= 1 ;
    ll indx = -1 ;
    ll imediate_junior = -10e10 , mn = 10e10 ;

    while( low <= high )
    {
        ll mid = ( low + high ) / 2 ;

        if( v1[mid] == key )
        {
            indx = mid ;
            high = mid - 1 ;
        }
        else if( v1[mid] > key )
        {
            high = mid - 1 ;
        }
        else
        {
            low = mid + 1 ;
        }
        if( key > v1[mid] && key-v1[mid] <= mn )
        {
            mn = key-v1[mid] ;
            imediate_junior = mid ;
        }
    }
    if( indx == -1 )
    {
        return (imediate_junior*-1) ;
    }
    return indx ;
}

ll higher_bnd(ll key )
{
    //key value then , return positive value
    //no key value but senior , return negative value
    //no key value and no senior ,return 10e10
    ll low = 0 ;
    ll high = v1.size() ;
    high -= 1 ;
    ll indx = -1 ;
    ll imediate_senior = -10e10, mn = 10e10;

    while( low <= high )
    {
        ll mid = ( low + high ) / 2 ;

        if( v1[mid] == key )
        {
            indx = mid ;
            low = mid + 1 ;
        }
        else if( v1[mid] > key )
        {
            high = mid - 1 ;
        }
        else
        {
            low = mid + 1 ;
        }

        if(key < v1[mid] && v1[mid] - key <= mn )
        {
            mn = v1[mid] - key ;
            imediate_senior = mid ;
        }
    }
    if( indx == -1 )
    {
        return (imediate_senior*-1) ;
    }
    return indx ;
}


int main()
{
    ll b ;
    for ( ll i = 0 ; i < 10 ; i++ )
    {
        cin >> b ;
        v1.push_back(b) ;

    }
    sort(all(v1));

    for( ll i = 0 ; i < 5 ; i++)
    {
        cin >> b ;
        cout<<lower_bnd(b)<<" "<<higher_bnd(b)<<endl;
    }

    return 0;
}
