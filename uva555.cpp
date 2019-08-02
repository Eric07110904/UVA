#include<bits/stdc++.h>
using namespace std;
class Card{

public:
    char color;
    char point;
    int val;
};
char COLOR[4]={'S','W','N','E'};

bool cmp(Card a,Card b){
    if(a.color=='C'){
        a.color=0;
    }
    else if(a.color=='D'){
        a.color=1;
    }
    else if(a.color=='S'){
        a.color=2;
    }
    else if(a.color=='H'){
       a.color=3;
    }

    if(b.color=='C'){
        b.color=0;
    }
    else if(b.color=='D'){
        b.color=1;
    }
    else if(b.color=='S'){
        b.color=2;
    }
    else if(b.color=='H'){
       b.color=3;
    }
    if(b.point>='0'&&b.point<='9'){
        b.point-='0';
    }
    else{
        if(b.point=='T')
        b.point=10;
        else if(b.point=='J')
        b.point=11;
        else if(b.point=='Q')
        b.point=12;
        else if(b.point=='K')
        b.point=13;
        else if(b.point=='A')
        b.point=14;
    }
    if(a.point>='0'&&a.point<='9'){
        a.point-='0';
    }
    else{
        if(a.point=='T')
        a.point=10;
        else if(a.point=='J')
        a.point=11;
        else if(a.point=='Q')
        a.point=12;
        else if(a.point=='K')
        a.point=13;
        else if(a.point=='A')
        a.point=14;
    }
    if(a.color!=b.color)
    return a.color<b.color;
    //一定同色
    if(a.point!=b.point)
        return a.point<b.point;


}
int main(){


    char position;
    char color,point;
    while(cin>>position&&position!='#'){
        vector<Card>user[4];int count=0;
        string a,b;
        cin>>a>>b;
        a=a+b;
        if(position=='N')
            position='E';
        else if(position=='S')
            position='W';
        else if(position=='E')
            position='S';
        else if(position=='W')
            position='N';

        for(int i=0;i<a.length();i+=2){
            Card temp;temp.color=a[i];temp.point=a[i+1];
            if(position=='N'){
                user[2].push_back(temp);
                position='E';
            }
            else if(position=='S'){
                user[0].push_back(temp);
                position='W';
            }
            else if(position=='E'){
                user[3].push_back(temp);
                position='S';
            }
            else if(position=='W'){
                user[1].push_back(temp);
                position='N';
            }

        }

        for(int i=0;i<4;i++){
            sort(user[i].begin(),user[i].end(),cmp);
            cout<<COLOR[i]<<": ";
            for(int j=0;j<user[i].size();j++){
                cout<<user[i][j].color<<user[i][j].point<<" ";
            }
            cout<<endl;
        }


    }










    return 0;
}
