#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;int c=1;
    while(cin>>n&&n!=0){
        cout<<"Game "<<c<<":\n";
        int *ans=new int[n];
        int *guess=new int [n];
        int *temp=new int [n];
        for(int i=0;i<n;i++){
            cin>>ans[i];
            temp[i]=ans[i];
        }

        while(1){
            int flag=0;int count_a=0,count_b=0;
            for(int i=0;i<n;i++){
                cin>>guess[i];
                if(guess[i]==0)
                    flag++;
            }
            if(flag==n)
                break;

            for(int i=0;i<n;i++){
                if(guess[i]==ans[i]){
                    guess[i]=0;ans[i]=0;count_a++;
                }
            }

            for(int i=0;i<n;i++){
                if(guess[i]==0)
                    continue;
                for(int j=0;j<n;j++){
                    if(guess[i]==ans[j]){
                        //cout<<"²q"<<i<<" "<<j<<endl;
                        count_b++;
                        ans[j]=0;
                        break;
                    }
                }
            }
            printf("    (%d,%d)\n",count_a,count_b);
            for(int i=0;i<n;i++)
                ans[i]=temp[i];

        }
        c++;
    }













    return 0;
}
