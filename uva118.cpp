#include<bits/stdc++.h>
using namespace std;
int main(){

    int X,Y,x1,y1,tempx,tempy;
    char position;
    string ins;int MAP[52][52]={};//N E S W
    cin>>X>>Y;
    while(cin>>x1>>y1>>position){
        cin>>ins;int flag=0;
        for(int i=0;i<ins.length();i++){
            tempx=x1;tempy=y1;

            if(ins[i]=='F'){

                if(position=='N')
                    y1+=1;
                if(position=='S'){
                    y1-=1;
                }

                if(position=='E')
                    x1+=1;
                if(position=='W')
                    x1-=1;
            }
            else if(ins[i]=='R'){

                if(position=='N')
                    position='E';
                else if(position=='E')
                    position='S';
                else if(position=='S')
                    position='W';
                else if(position=='W')
                    position='N';

            }
            else if(ins[i]=='L'){
                if(position=='N')
                    position='W';
                else if(position=='E')
                    position='N';
                else if(position=='S')
                    position='E';
                else if(position=='W')
                    position='S';
            }
            if(x1>X||y1>Y||x1<0||y1<0){
                if(MAP[tempx][tempy]==1){
                    x1=tempx;y1=tempy;
                }
                else{
                    MAP[tempx][tempy]=1;
                    flag=1;
                    break;
                }

            }
        }
        if(flag==0)
            cout<<x1<<" "<<y1<<" "<<position<<endl;
        else
            cout<<tempx<<" "<<tempy<<" "<<position<<" LOST\n";

    }








    return 0;
}
