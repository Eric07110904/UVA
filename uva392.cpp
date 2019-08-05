#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int number;
    int carry;
    Node():number(0),carry(0){};
    Node(int a,int b):number(a),carry(b){};

};
int main(){

    stringstream ss;stringstream ss2;
    string a,temp;int n=8;
    vector<Node>poly;int t;
    while(getline(cin,a)){
        ss<<a;int count=8;
        while(!ss.eof()){
            ss>>temp;
            if(temp!="0"){
                ss2<<temp;ss2>>t;
                Node tem(t,count);

                poly.push_back(tem);
                ss2.clear();
            }
            count--;

        }
        int NUM,CAR;
        if(poly.size()==0){
            cout<<"0"<<endl;
            continue;
        }

        for(int i=0;i<poly.size();i++){
            NUM=poly[i].number;CAR=poly[i].carry;
            if(i==0){
                if(NUM>1||NUM<-1)
                    cout<<NUM;
                else if(NUM==-1&&CAR!=0)
                    cout<<"-";
                else if(NUM==-1&&CAR==0)
                    cout<<"-1";
            }
            else{
                if(NUM<0){

                    cout<<" - ";
                    if(NUM!=-1)
                        cout<<NUM*-1;
                    else if(NUM==-1&&CAR==0)
                        cout<<"1";
                }
                else{
                    cout<<" + ";
                    if(NUM!=1)
                        cout<<NUM;
                    else if(NUM==1&&CAR==0)
                        cout<<"1";
                }
            }
            if(CAR==1)
                cout<<"x";
            else if(CAR>1)
                cout<<"x^"<<CAR;
        }
        cout<<endl;
        ss.clear();
        poly.clear();
    }







    return 0;
}
