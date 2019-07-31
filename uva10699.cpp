#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int,int>table;
    unordered_map<int,int>::iterator itr;
    int n;int factor;int temp;
    while(cin>>n&&n!=0){
        temp=n;
        factor=2;
        while(n!=1){
            if(n%factor==0){
                n/=factor;
                table[factor]++;
            }
            else
                factor+=1;
        }


        cout<<temp<<" : "<<table.size()<<endl;
        table.clear();
    }

















    return 0;
}
