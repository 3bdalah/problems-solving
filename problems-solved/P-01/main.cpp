#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> open;
    bool fail= false;
    for(int i=0;i<s.size();++i){
        if(s[i] == '{'){
            open.push('{');    
        }else{
            if(open.size() > 0){
                  open.pop();
            }else{
                fail = true;
                break;
            }
        }
    }
    if(fail == true || open.size() >0){
        cout<<"no";
    }else{
        cout<<"yes";
    }
    return 0;
}
