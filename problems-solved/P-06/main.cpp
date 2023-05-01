#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
    #endif
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;++i){
      cin>>v[i]; 
    }
    sort(v.begin(),v.end());
    bool  ok = true;
    for(int i=0;i<n;++i){
        if(v[i+1] - v[i]>1){
             ok =false;
        }    
    }
    if(ok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
