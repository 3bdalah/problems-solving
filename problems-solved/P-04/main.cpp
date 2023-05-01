#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> grades;
    int n;cin>>n;
    for(int i=0;i<n;i++){
       int q; cin>>q;
       string s; cin>>s;
       if(q==1){
           int y;cin>>y;
           grades[s] +=y;
        }else if(q == 2){
          grades[s] ==0;
        }else{
            cout<<"Grades of"<< s<< " = "<< grades[s] << endl;
        }
    }
    return 0;
}
