#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b>a){
        int temp=a;
        a=b;
        b=temp;
    }


    if(b==0)
        return a;

    return gcd(b,a%b);
}
int main(){

    int n;double res;
    while(cin>>n&&n!=0){
        int ans=0;
        int* array = new int [n];
        for(int i=0;i<n;i++)
            cin>>array[i];
        int total = n*(n-1)/2;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(array[i],array[j])==1)
                    ans++;
            }
        }
        if(ans!=0)
            res=double(sqrt((total*6)/ans));
        if(ans==0)
            cout<<"No estimate for this data set.\n";
        else
            cout<<fixed<<setprecision(6)<<res<<endl;
    }





    return 0;
}
