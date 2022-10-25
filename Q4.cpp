#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p=1,v=INT_MIN;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    for(int i=0;i<n;++i){
        p=1;
        for(int j=i;j<n;++j){
            if(A[j]==0){
                break;
            }
            else{
                p*=A[j];
            }
            v=max(v,p);
        }
    }
    cout<<v;
    return 0;
}
