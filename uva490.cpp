#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string>table;
    string a;int max_len=0;
   vector<int>length;
    while(getline(cin,a)){
        table.push_back(a);
        length.push_back(a.length());
        if(a.length()>max_len)
            max_len=a.length();
    }

    /* test data
    Rene Decartes once said,
    "I think, therefore I am."
    123
    */
    int pre_len=0;
    for(int i=0;i<max_len;i++){
        for(int j=table.size()-1;j>=0;j--){
                if(i<length[j])//important
                    cout<<table[j][i];
                else
                    cout<<" ";

        }
        cout<<endl;
    }








    return 0;
}
