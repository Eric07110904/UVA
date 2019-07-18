#include<iostream>
#include<iomanip>
using namespace std;

int main(){//8~1800 1800 2200 2200 8
    double charge[5][3]={{0.1,0.06,0.02},{0.25,0.15,0.05},{0.53,0.33,0.13},{0.87,0.47,0.17},{1.44,0.80,0.30}};
    int time[5]={0,480,1080,1320,1440};
    int used[1440]={};
    int sum[5]={};
    char type;int h1,m1,h2,m2;string phone;
    while(cin>>type&&type!='#'){
        cin>>phone>>h1>>m1>>h2>>m2;
        for(int i=0;i<1440;i++)
            used[i]=0;
        for(int i=0;i<5;i++)
            sum[i]=0;
        if((h2*60+m2)<=(h1*60+m1)){
            for(int i=0;i<h2*60+m2;++i){
                used[i]=1;
            }

            for(int i=h1*60+m1;i<1440;++i){
                used[i]=1;
            }
        }
        else{
            for(int i=h1*60+m1;i<h2*60+m2;++i)
                used[i]=1;
        }
        for(int i=0;i<4;i++){

            for(int j=time[i];j<time[i+1];++j){
                sum[i]+=used[j];
            }
        }
        sum[3]+=sum[0];
        double ans=sum[1]*charge[type-'A'][0]+sum[2]*charge[type-'A'][1]+sum[3]*charge[type-'A'][2];
        cout<<setw(10)<<phone<<setw(6)<<sum[1]<<setw(6)<<sum[2]<<setw(6)<<sum[3]<<setw(3)<<type<<setw(8)<<fixed<<setprecision(2)<<ans<<endl;
    }






    return 0;
}
