#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a,b;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int c;
    cin>>c;
    vector<int>ans;
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    priority_queue<pair<int,pair<int,int>>>pq;
    for(int i=0;i<n;i++){
        pq.push({a[i]+b[0],{i,0}});
    }
    while(ans.size()<c){
        auto t=pq.top();
        ans.push_back(t.first);
        pq.pop();
        int i=t.second.first;
        int j=t.second.second;
        pq.push({a[i]+b[j+1],{i,j+1}});
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}