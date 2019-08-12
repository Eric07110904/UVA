#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,ans,n;
    cin>>t;
    while(t--){
        cin>>ans>>n;
        int* dp=new int[ans+1]{};
        int* array=new int[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        //dp processing!
        dp[0]=1;
        for(int i=0;i<n;i++){
           for(int j=ans;j>=0;j--){
                if(dp[j]==1&&(j+array[i])<=ans){
                    //cout<<ans<<" "<<array[i]<<endl;
                    dp[j+array[i]]=1;
                }
           }
        }
        if(dp[ans]==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


    return 0;
}
