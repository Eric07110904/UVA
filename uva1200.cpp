#include<bits/stdc++.h>
using namespace std;
int main(){

    string a;
    getline(cin,a);
    cout<<"poly:\n"<<a<<endl;
    cout<<"decomposed:\n";
    string ans="";
    for(int i=0;i<a.length();i++){

        if(a[i]=='-'||a[i]=='+'){
            ans+=" ";
            ans+=a[i];
        }
        else{
            ans+=a[i];
        }
    }

    cout<<ans;
    //cout<<"asd";
    return 0;
}
