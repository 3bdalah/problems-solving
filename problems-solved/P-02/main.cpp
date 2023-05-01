#include <bits/stdc++.h>
using namespace std;


int main(){

    queue<string> q;
    int n;cin>>n;
    for(int i=0;i<n;++i){    
        string in;cin>>in;
        q.push(in);
        if(in == q.front() && q.size()>1){
            q.pop();    
        }
    }
    while(q.size() >0){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
