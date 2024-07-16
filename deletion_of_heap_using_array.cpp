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


    void del(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<size){
            int child1=2*index;
            int child2=2*index+1;
            if(child1<size && arr[index]<arr[child1] && arr[child1]>arr[child2]){
                swap(arr[index],arr[child1]);
                index=child1;
            }
            else if(child2<size && arr[index]<arr[child2] && arr[child2]>arr[child1]){
                swap(arr[index],arr[child2]);
                index=child2;
            }
            else{
                return;
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
    h.del();
    h.print();
}