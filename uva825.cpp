#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;stringstream ss;
    cin>>t;
    while(t--){
        long long int row,col;
        cin>>row>>col;
        long long int**dp=new long long int*[row+1];
        for(int i=0;i<row+1;i++)
            dp[i]=new long long int[col+1]{};
        string a;vector<long long int>array;long long int temp;long long int r=row;
        cin.ignore();
        while(r--){
            getline(cin,a);
            ss<<a;
            while(!ss.eof()){
                ss>>temp;
                array.push_back(temp);
            }
           if(array.size()>1)
           for(int i=1;i<array.size();i++){
                //cout<<"insert "<<array[0]<<" "<<array[i]<<endl;
                dp[array[0]][array[i]]=-1;
           }

           ss.clear();array.clear();
        }
        dp[1][1]=1;
        for(int i=1;i<row+1;i++){
            for(int j=1;j<col+1;j++){
                if(i==1&&j==1)
                    continue;
                if(dp[i][j]!=-1)
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else
                    dp[i][j]=0;
            }
        }
        cout<<dp[row][col]<<endl;
    }













    return 0;
}
