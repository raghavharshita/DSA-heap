// implementation of max heap
#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size++;
        arr[size]=val;
        int index=size;
        while(index>1){
            int parentidx=index/2;
            if(arr[parentidx]>arr[index]){
                return;
            }
            else{
                swap(arr[parentidx],arr[index]);
                index=parentidx;
            }
        }
    }
    
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    heap h;
    h.insert(50);
    h.insert(85);
    h.insert(96);
    h.insert(23);
    h.insert(14);
    h.insert(49);
    h.print();
}