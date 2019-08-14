#include<bits/stdc++.h>
using namespace std;
class Str{
public:
    string str;
    int order;
    int index;
    Str():str(""),order(0){};

};
bool cmp(Str a,Str b){
    if(a.order==b.order)
        return a.index<b.index;
    return a.order<b.order;
}
int main(){

    int t,row,col;string str;
    cin>>t;
    while(t--){
        cin>>col>>row;
        Str* num=new Str[row];
        for(int i=0;i<row;i++){
            cin>>str;//CCCGGGGGGA
            num[i].str=str;int count=0;
            num[i].index=i;
            for(int i=0;i<str.length();i++){
                for(int j=i+1;j<str.length();j++){
                    if(str[j]<str[i]){
                        count++;
                    }
                }
            }
            num[i].order=count;
        }
        sort(num,num+row,cmp);
        for(int i=0;i<row;i++){
            cout<<num[i].str<<endl;
        }
        if(t)
        cout<<endl;
    }











    return 0;
}
