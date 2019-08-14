#include<bits/stdc++.h>
using namespace std;
int POW(int a,int b){
    if(b==1)
        return a;
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum;
}
int main(){

    stringstream ss;
    string a;int temp;
    vector<int>array;
    map<int,int>ans;
    map<int,int>::reverse_iterator itr;
    while(getline(cin,a)&&a!="0"){
        ss<<a;
        while(!ss.eof()){
            ss>>temp;
            array.push_back(temp);
        }
        int sum=1;
        for(int i=0;i<array.size();){

            sum*=POW(array[i],array[i+1]);
            i+=2;
        }
        sum-=1;

        for(int i=2;sum!=1;){
            if(sum%i==0){
                ans[i]+=1;
                sum/=i;
            }
            else
                i++;
        }

        for(itr=ans.rbegin();itr!=ans.rend();itr++){
            cout<<itr->first<<" "<<itr->second<<" ";
        }
        cout<<endl;
        ans.clear();
        ss.clear();
        array.clear();
    }


    return 0;
}
