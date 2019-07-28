#include<bits/stdc++.h>
#define N 102
using namespace std;

int row,col;
int MAP[N][N]={};
int DP_table[N][N]={};//從ij開始 的最長距離
int Move[4][2]={{0,-1},{0,1},{-1,0},{1,0}};//up down left right
int dp_function(int x,int y){//compute the length from (x,y)
    int ans=DP_table[x][y];
    if(ans!=-1)//has been recorded so return (save time!)
        return ans;
    int next_x,next_y;
    for(int i=0;i<4;i++){//choose the longest from (up down left right)
        next_x=x+Move[i][0];next_y=y+Move[i][1];
        if(next_x<0||next_x>=row||next_y<0||next_y>=col)
            continue;

        if(MAP[next_x][next_y]<MAP[x][y]){//less than origin one do dp
            ans=max(ans,1+dp_function(next_x,next_y));
        }
    }
    if(ans==-1)
        ans=1;
    DP_table[x][y]=ans;
    return ans;

}
int main(){


    int Case;string name;
    cin>>Case;
    while(Case--){
        cin>>name>>row>>col;
        //input data
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>MAP[i][j];
                DP_table[i][j]=-1;
            }
        }

        //dp processing
        int maxima=-1;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                maxima=max(maxima,dp_function(i,j));
            }
        }
        cout<<name<<": "<<maxima<<endl;
    }










}
