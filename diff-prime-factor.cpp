#include<bits/stdc++.h>
using namespace std;

void primefact(int n)
{
    int cnt=0;
    for( int i=2;i*i<=n;i++){
        if(n%i==0){
           cnt++;
           while(n%i==0){

              n=n/i;

           }

    }



    }
    if(n>1){
      cnt++;
    }

   cout<<cnt<<endl;
}
int main()
{
    int n;
    cin>>n;
    primefact(n);
    return 0;
}
