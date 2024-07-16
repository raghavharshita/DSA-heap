#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int t=i;
    int child1=2*i;
    int child2=2*i+1;
    if(child1<=n && arr[i]<arr[child1]){
        t=child1;
    }
    if(child2<=n && arr[i]<arr[child2]){
        t=child2;
    }
    if(t!=i){
        swap(arr[t],arr[i]);
        heapify(arr,n,t);
    }
}
int main(){
    int arr[9]={-1,1,8,6,3,4,2,9,7};
    int n=8;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}