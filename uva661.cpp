#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,c,inst,total,Max;int count=1;int flag;
    while(cin>>n>>m>>c){
        flag=0;
        if(n==0&&m==0&&c==0)
            break;
        if(count!=1)
            cout<<endl;
        cout<<"Sequence "<<count<<endl;
        total=0;Max=0;
        int* object=new int [n+1]{};
        int* open=new int [n+1]{};
        for(int i=0;i<n;i++){
            cin>>object[i+1];
        }

        for(int i=0;i<m;i++){
            cin>>inst;
            if(open[inst]==0){//if close open it
                open[inst]=1;
                total+=object[inst];

            }
            else{
                open[inst]=0;
                total-=object[inst];
            }
            if(total>Max)
                Max=total;
            if(total>c){
                flag=1;
            }
        }
        if(flag==0){
            cout<<"Fuse was not blown.\n";
            cout<<"Maximal power consumption was "<<Max<<" amperes.\n";
        }
        else{
            cout<<"Fuse was blown.\n";
        }
        count++;
    }












    return 0;
}
