#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    int n; cin>>n;
    for(int i=0;i<n;++i){
       string in;cin>>in;
        s.insert(in);
    }
    set<string>::iterator i;
    for(i = s.begin();i != s.end();++i){
        cout << *i << endl;    
    }
    return 0;
}
