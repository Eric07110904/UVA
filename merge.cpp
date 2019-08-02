#include<bits/stdc++.h>
using namespace std;
void merge_sort(vector<int>&array,int front,int end){
    int mid=(front+end)/2;
    vector<int>left(array.begin()+front,array.begin()+mid+1);
    vector<int>right(array.begin()+mid+1,array.begin()+end+1);
    int left_index=0,right_index=0;
    left.insert(left.end(),INT_MAX);
    right.insert(right.end(),INT_MAX);
    for(int i=front;i<=end;i++){
        if(left[left_index]<=right[right_index]){
            array[i]=left[left_index];
            left_index++;
        }
        else{
            array[i]=right[right_index];
            right_index++;
        }
    }

}
void merge(vector<int>&array,int front,int end){
    int mid=(front+end)/2;
    if(front<end){
        merge(array,front,mid);
        merge(array,mid+1,end);
        merge_sort(array,front,end);
    }

}
int main(){

    int n,temp;
    cin>>n;
    vector<int>array;
    for(int i=0;i<n;i++){
        cin>>temp;
        array.push_back(temp);
    }

    merge(array,0,array.size()-1);


    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }







    return 0;
}
