#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll coin[5]={1,5,10,25,50};
    ll n;
    ll* dp=new ll [30001]{};
    dp[0]=1;
    for(int i=0;i<5;i++){
        for(int j=coin[i];j<=30001;j++){
            dp[j]=dp[j]+dp[j-coin[i]];
        }
    }
    while(cin>>n){
        if(dp[n]==1){
            printf("There is only 1 way to produce %lld cents change.\n",n);
        }
        else{
            printf("There are %lld ways to produce %lld cents change.\n",dp[n],n);
        }

    }




    return 0;
}
