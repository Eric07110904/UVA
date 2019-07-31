#include<bits/stdc++.h>
using namespace std;
bool panlid(string n){
    int len=n.length();
    for(int i=0;i<len;i++,len--){
        if(n[i]!=n[len-1])
            return false;
    }
    return true;
}
int main(){
    string n;int len;
    string temp;
    unordered_map<string,int>table;
    unordered_map<string,int>::iterator itr;
    while(getline(cin,n)){

        for(int i=0;i<n.length();i++){
            int len=n.length();
            for(int k=len;k>0;k--){
                if(i<k){
                    temp="";
                    for(int j=i;j<k;j++){
                        temp+=n[j];
                    }
                    table[temp]++;
                }
            }

        }
        int count=0;
        for(itr=table.begin();itr!=table.end();itr++){
            if(panlid(itr->first)){
                count++;
            }
        }
        //The string 'boy' contains 3 palindromes.
        cout<<"The string '"<<n<<"' contains "<<count<<" palindromes.\n";
        table.clear();
    }








    return 0;
}
