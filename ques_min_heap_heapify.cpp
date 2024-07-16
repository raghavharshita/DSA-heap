// link-https://www.naukri.com/code360/problems/build-min-heap_1171167
#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&arr,int n,int i){
    int t=i;
    int child1=2*i+1;
    int child2=2*i+2;
    if(child1<n && arr[t]>arr[child1]){
        t=child1;
    }
    if(child2<n && arr[t]>arr[child2]){
        t=child2;
    }
    if(t!=i){
        swap(arr[t],arr[i]);
        heapify(arr,n,t);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    return arr;
}
int main(){
    vector<int>arr={9,6,4,5,2,3,8,7};
    vector<int>ans=buildMinHeap(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}