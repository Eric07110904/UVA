#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,ans,temp;
    while(cin>>n){
        int ans=1;
        for(int i=n;i>=2;i--){
            ans*=i;
            while(ans%10==0)
                ans/=10;
            ans%=10000;
        }
        printf("%5d -> %d\n",n,ans%10);
    }





    return 0;
}
