#include<bits/stdc++.h>
using namespace std;
char cube1[6]={};
char cube2[6]={};
//先列出 1~6分別為原點的所有情況
//之後每個轉4次
int d[6][6]={{1,2,3,4,5,6},{2,6,3,4,1,5},{3,2,6,1,5,4},{4,2,1,6,5,3},{5,1,3,4,6,2},{6,5,3,4,2,1}};
bool fun(){
        for(int i=0;i<6;i++){
            char now[6]={};
            for(int j=0;j<6;j++){
                now[j]=cube1[d[i][j]-1];
            }
            //now 轉四次
            for(int j=0;j<4;j++){
               char temp[6]={};
               temp[0]=now[0];
               temp[1]=now[2];
               temp[2]=now[4];
               temp[3]=now[1];
               temp[4]=now[3];
               temp[5]=now[5];
               for(int k=0;k<6;k++)
                   now[k]=temp[k];
               int flag=0;
               for(int k=0;k<6;k++){
                    if(now[k]==cube2[k])
                        flag++;
               }
               if(flag==6)
                return true;
            }
        }
        return false;
}
int main(){
    //123456 135246 154326 142536
    //第2=前個3 第3=錢個5 第4=前2 地5=前4

    string a;
    while(getline(cin,a)){

        for(int i=0;i<a.length();i++){
            if(i<=5){
                cube1[i]=a[i];
            }
            else{
                cube2[i-6]=a[i];
            }
        }
        if(fun())
            cout<<"TRUE";
        else
            cout<<"FALSE";
        cout<<endl;

    }
















    return 0;
}
