#include <iostream>

using namespace std;

int look(int i,int m,int n,int l,string& s,string& s1,string& s2){
    for(int j=i;j<l;++j){
        if((s1[m]==s[j])&&(s2[n]==s[j])){
            return look(i+1,m+1,n+1,l,s,s1,s2);
        }
        else if(s1[m]==s[j]){
            return 1;
        }
        else if(s2[n]==s[j]){
            return 2;
        }
    }
    return 0;
}

int main()
{
    string s1,s2,s;
    int l1,l2,l,m=0,n=0;
    
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s);
    l1=s1.length();
    l2=s2.length();
    l=s.length();
    if(l1+l2!=l){
        cout<<0;
    }
    else{
        for(int i=0;i<l;++i){
            if((s1[m]==s[i])&&(s2[n]==s[i])){
                int k=look(i+1,m+1,n+1,l,s,s1,s2);
                if(k==1){
                    ++m;
                }
                else{
                    ++n;
                }
            }
            else if(s1[m]==s[i]){
                ++m;
            }
            else if(s2[n]==s[i]){
                ++n;
            }
        }
        if(m==l1&&n==l2){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}
