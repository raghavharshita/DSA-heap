#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int child1=2*i;
    int child2=2*i+1;
    int t=i;

    if(child1<=n && arr[t]<arr[child1]){
        t=child1;
    }
    if(child2<=n && arr[t]<arr[child2]){
        t=child2;
    }

    if(t!=i){
        swap(arr[i],arr[t]);
        heapify(arr,n,t);
    }
}

int main(){
    int arr[8]={-1,5,6,3,7,2,6,4};
    int n=7;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    int p=n;
    while(p>1){
        swap(arr[1],arr[p]);
        p--;
        heapify(arr,p,1);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}