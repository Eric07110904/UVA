#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    long long int dp[30002]={1};
    long long int cost[5]={1,5,10,25,50};
    for(int i=0;i<5;i++){
        for(int j=cost[i];j<30002;j++){
            dp[j]=dp[j]+dp[j-cost[i]];
        }
    }
    while(cin>>n){
        cout<<dp[n]<<endl;
    }















    return 0;
}
