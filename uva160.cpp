#include<bits/stdc++.h>
using namespace std;
int main(){
    int prime_table[110]={};prime_table[0]=1;prime_table[1]=1;
    vector<int>prime;
    for(int i=2;i<110;i++){
        if(prime_table[i]!=1)
            for(int j=2*i;j<110;j+=i){
                prime_table[j]=1;
            }
    }
    for(int i=0;i<110;i++)
        if(!prime_table[i])
            prime.push_back(i);

    int n;
    while(cin>>n&&n!=0){
        int tempn=n;
        vector<int>ans;
        for(int i=0;i<prime.size()&&prime[i]<=n;i++){
            int temp=prime[i];int sum=0;int temp1=prime[i];

            while(n/temp>0){
                sum+=n/temp;
                temp*=temp1;
            }
            ans.push_back(sum);
        }
        if(tempn!=1){
            cout<<setw(3)<<n<<"! =";
            for(int i=0;i<ans.size();i++){
                cout<<setw(3)<<ans[i];
                if(i%14==0&&i!=0){
                    cout<<"\n      ";
                }
            }
        }
        else
            cout<<"  1! =  1\n";

        cout<<endl;






    }

    return 0;
}
