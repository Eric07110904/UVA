#include<bits/stdc++.h>
using namespace std;
int m;
bool cmp(int a,int b){
    if(a%m==b%m){
        if(abs(a%2)==1&&abs(b%2)==0){
            return abs(a%2)>abs(b%2);
        }
        if(abs(a%2)==1&&abs(b%2)==1){
            return a>b;
        }
        if(abs(a%2)==0&&abs(b%2)==0){
            return a<b;
        }
    }


    return a%m<b%m;
}
int main(){



    int n;
    while(cin>>n>>m){
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0)
            break;
        int* array=new int[n];
        for(int i=0;i<n;i++)
            cin>>array[i];
        sort(array,array+n,cmp);

        for(int i=0;i<n;i++)
            cout<<array[i]<<endl;

    }












    return 0;
}
