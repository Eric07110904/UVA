#include<bits/stdc++.h>
using namespace std;
bool check(string num,int a){
    int temp=0;
    for(int i=0;i<num.length();i++){
        if(num[i]>='0'&&num[i]<='9'){
            temp=num[i]-'0';
        }
        else if(num[i]>='A'&&num[i]<='F'){
            temp=num[i]-'A'+10;
        }
        if(temp>=a){
            return false;
        }
    }

    return true;
}
string Ans(long long int dec,int a1){
    string ans="";
    if(dec==0)
        return "0";
    while(dec!=0){
        int temp=dec%a1;
        //cout<<temp<<endl;
        if(temp>=0&&temp<=9){
            ans=char(temp+'0')+ans;

        }
        else if(temp>=10&&temp<=15){

            ans=char(temp-10+'A')+ans;
        }
        dec/=a1;
    }

    return ans;
}
long long int decimal(string num,int n){
    int len=num.length()-1;
    long long int sum=0;long long int carry=1;
    for(int i=len;i>=0;i--){
        if(num[i]>='0'&&num[i]<='9'){
            sum+=(num[i]-'0')*carry;
        }
        else if(num[i]>='A'&&num[i]<='F'){
            sum+=(num[i]-'A'+10)*carry;
        }
        carry*=n;
    }
    return sum;

}
int main(){

    int a,a1;string num;int temp=0;
    long long int dec=0;string ans;
    while(cin>>a>>a1>>num){
        if(check(num,a)){
            dec=decimal(num,a);
            //cout<<dec<<endl;
            //dec to a1
            ans=Ans(dec,a1);
            cout<<num<<" base "<<a<<" = "<<ans<<" base "<<a1<<endl;
        }
        else{
            cout<<num<<" is an illegal base "<<a<<" number\n";
        }
    }













    return 0;
}
