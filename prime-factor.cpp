#include<bits/stdc++.h>
using namespace std;

void primefact(int n)
{
    int cnt=0;
    for( int i=2;i*i<=n;i++){
        if(n%i==0){

           while(n%i==0){
             cnt++;
              n=n/i;

           }
        cout<<i<<'^'<<cnt<<" ";
    }



    }
    if(n>1){
      cout<<n<<'^'<<1;
    }

    else {
        cout<<'\n';
    }
}
int main()
{
    int n;
    cin>>n;
    primefact(n);
    return 0;
}
