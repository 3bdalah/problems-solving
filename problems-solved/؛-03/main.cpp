#include <bits/std++.h>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];    
    }
    sort(arr,arr+n);
    deque<int> dq;
    for(int i=0;i<n;i++){
        if(arr[i] %2==0){
            dq.push_front(arr[i])
        }else{
            dq.push_back(arr[i]);
        }
    }
    for(int i=0;i<dq.size();++i){
        cout<<dq[i] << " ";    
    }
    return 0;
}