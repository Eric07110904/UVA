#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int number(int *array,int count){
    int sum=0;int n=1;
    for(int i=count;i>=0;i--){
        sum+=array[i]*n;
        n*=10;
    }
    return sum;
}
int cmp(int a,int b){return a<b;}
int cmp1(int a,int b){return a>b;}
int main(){

    unordered_map<int,int>table;
    int n,n1,n2;int c=0;
    while(cin>>n&&n!=0){
        c=0;

        cout<<"Original number was "<<n<<endl;
        do{
        if(c!=0){
            table[n]++;

        }

        int array[10]={};
        int count=0;
        n1=n;
        while(n!=0){
            array[count]=n%10;
            n/=10;
            count++;
        }
        sort(array,array+count,cmp1);
        n2=number(array,count-1);
        sort(array,array+count,cmp);
        n1=number(array,count-1);
        cout<<n2<<" - "<<n1<<" = "<<n2-n1<<endl;c++;

        n=n2-n1;
        }while((table.find(n)==table.end()));
        cout<<"Chain length "<<c<<endl<<endl;
        table.clear();

    }















    return 0;
}
