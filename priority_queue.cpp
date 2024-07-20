#include<bits/stdc++.h>
using namespace std;
int main(){
    // max-heap
    priority_queue<int>pq;

    pq.push(4);
    pq.push(8);
    pq.push(5);
    pq.push(4);
    pq.push(9);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    cout<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"it is empty"<<endl;
    }
    else{
        cout<<"it is not empty"<<endl;
    }

    // min-heap
    priority_queue<int,vector<int>,greater<int>>qp;

    qp.push(2);
    qp.push(8);
    qp.push(5);
    qp.push(4);
    qp.push(9);

    cout<<qp.top()<<endl;
    qp.pop();
    cout<<qp.top()<<endl;

    cout<<qp.size()<<endl;
    if(qp.empty()){
        cout<<"it is empty"<<endl;
    }
    else{
        cout<<"it is not empty"<<endl;
    }
}