#include<iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
int sum;
string Stack[52][52]={};
bool match(string a,string b){
    return (a[0]==b[0]||a[1]==b[1]);
}
int deal(int now,int step,int* top){

    int c=0;int temp=now;
    while(c<step&&temp>=0){
        if(temp-1>=0){
            if(top[--temp]>=0)
            c+=1;
        }
        else{
            c+=1;
            temp-=1;
        }



    }
    //temp因為--temp 已經找到 第左邊第step個了
    if(temp>=0&&match(Stack[now][top[now]],Stack[temp][top[temp]])){
        top[temp]++;
        Stack[temp][top[temp]]=Stack[now][top[now]];
        top[now]--;
        return temp;
    }
    else
        return -1;


}
int main(){

    string card;

    int top[52];
        while(cin>>card&&card!="#"){
        sum=0;
        for(int i=0;i<52;i++)
            top[i]=0;
        Stack[0][0]=card;



        for(int i=1;i<52;i++){
            cin>>Stack[i][0];
        }

        for(int i=1;i<52;){
            while(top[i]<0)
                i+=1;
            if(i==52)
                break;
            int save=deal(i,3,top);
            if(save>=0){
                i=save;//從被跌上去的那個在開始判斷一次

            }
            else{
                save=deal(i,1,top);
                if(save>=0){
                    i=save;
                }
                else{
                    i++;
                }
            }


        }
        for(int i=0;i<52;i++){
            if(top[i]>=0)
                sum+=1;
        }
        cout<<sum;
        if(sum==1)
            cout<<" pile remaining:";
        else
            cout<<" piles remaining:";
        for(int i=0;i<52;i++){
            if(top[i]>=0)
            cout<<" "<<top[i]+1;
        }
        cout<<endl;





        }





    return 0;
}
