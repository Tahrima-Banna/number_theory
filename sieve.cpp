#include<bits/stdc++.h>
using namespace std;
bool prime[90000001];
int n=90000000;
vector<int>v;

void solve()    //finding k-th prime soj problem
{

    for(int i=2;i*i<=n;i++){

        if(prime[i]==false){

            for(int j=i*i;j<=n;j+=i){

                prime[j]=true;
            }
        }

    }
  for(int i=2;i<=n;i++){
        if(prime[i]==false)
        v.push_back(i);
    }

}
int main()
{
    solve();
    int t;
     cin>>t;
    while(t--)
    {
       int q;
       cin>>q;
       cout<<v[q-1]<<'\n';
    }
}
