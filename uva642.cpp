#include<bits/stdc++.h>
using namespace std;
bool check(string temp,string dict){
    if(temp.length()!=dict.length())
        return false;
    int flag=0;
    for(int i=0;i<temp.size();i++){
        flag=0;
        for(int j=0;j<dict.size();j++){
            if(temp[i]==dict[j]){
                dict[j]='0';
                flag=1;
                break;
            }
        }
        if(flag==0)
            return false;
    }
    return true;
}
int main(){

    string a;int flag=0;
    vector<string>dict;
    vector<string>unscram;
    while(getline(cin,a)){
        if(a=="XXXXXX"){
            if(flag==1)
                break;
            flag++;
            continue;
        }
        if(flag==0){
            dict.push_back(a);
        }
        else if(flag==1){
            unscram.push_back(a);
        }


    }
    sort(dict.begin(),dict.end());int flag1=0;
    for(int i=0;i<unscram.size();i++){
        flag1=0;
        for(int j=0;j<dict.size();j++){
            if(check(unscram[i],dict[j])){
                cout<<dict[j]<<endl;
                flag1=1;
            }
        }
        if(flag1==0)
            cout<<"NOT A VALID WORD\n";

        cout<<"******\n";
    }




    return 0;
}
