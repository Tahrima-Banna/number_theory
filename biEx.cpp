#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll base,ll p)
{
    ll res=1;
    while(p)
    {
        if(p%2==1){
           res*=base;
           p--;
        }
     else{
        base*=base;
        n/=2;
     }


    }
    return res;

}
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        power(m,n);
    }

    return 0;
}
