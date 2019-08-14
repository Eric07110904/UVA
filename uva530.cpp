#include<bits/stdc++.h>
using namespace std;
int main(){
    //use double otherwise it will overflow
    double m,n;
    vector<double>top;
    vector<double>bottom;
    while(cin>>m>>n){
        if(m==0&&n==0)
            break;
        if(n==0){
            cout<<1<<endl;
            continue;
        }
        n=min(n,m-n);
        for(double i=0;i<n;i++){
            top.push_back(m-i);
            bottom.push_back(i+1);

        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if((top[j]/bottom[i])==int(top[j]/bottom[i])){
                    top[j]/=bottom[i];
                    bottom[i]=1;
                    break;
                }
            }
        }
        double ans=1,ans2=1;
        for(int i=0;i<n;i++){
            ans*=top[i];
            ans2*=bottom[i];
        }
        cout<<int(ans/ans2)<<endl;
        top.clear();
        bottom.clear();
    }








    return 0;
}
