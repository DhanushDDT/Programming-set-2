#include <iostream>
#include <string>
using namespace std;

int main()
{    //cout<<"hi";
    string s,str="-";
    int l,N=1,m=1;
    getline(cin,s);
    l=s.length();
    for(int i=0;i<l;++i){
        if(s[i]==' '){
            while(s[i+1]==' '){
                ++i;
                ++m;
            }
            str.push_back('.');
            if(m>1){
                str+=to_string(m);
                m=1;
            }
        }
        else{
            while(s[i+1]==s[i]){
                ++N;
                ++i;
            }
            if(N>1){
                str.push_back(s[i]);
                str+=to_string(N);
                N=1;
            }
            else{
                str.push_back(s[i]);
            }
        }
    }
    str.push_back('-');
    cout<<str;
    return 0;
}

