//normally prime cheching
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2)return true;
    if(n<=3)return true;
    if(n%2==0)return false;

    for(int i=3;i*i<n;i+=2){

        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      if(prime(n)){
        cout<<"yes"<<'\n';
      }
      else{
        cout<<"no"<<'\n';
      }
    }
    return 0;
}
