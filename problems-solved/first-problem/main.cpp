#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v;
   int n;
    for(int i=0;i<n;++i){
        int in; cin>>in;
        v.push_back(in);    
    }
    while(v[0] == v.back()&& v.size() >1){
        v.pop_back();
    }
    cout<<v.size()<<endl;
   return 0;
}
