#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s,str;
    char a,b,c;
    int l,sum=0,in=1,k=0;
    vector<int>A;
    vector<char>B;
    
    getline(cin,s);
    l=s.length();
    str=s;
    cout<<"a?";
    cin>>a;
    cout<<"b?";
    cin>>b;
    cout<<"c?";
    cin>>c;
    for(int i=0;i<l;++i){
        if(str[i]=='a'){
            str[i]=a;
        }
        if(str[i]=='b'){
            str[i]=b;
        }
        if(str[i]=='c'){
            str[i]=c;
        }
    }
    
    for(int i=0;i<l;++i){
        if((str[i]>='0')&&(str[i]<='9')){
            while((str[i+in]>='0')&&(str[i+in]<='9')){
                ++in;
            }
            k=stoi(str.substr(i,i+in));
            if(str[i-1]=='-'){
                k*=-1;
            }
            A.push_back(k);
            if((str[i-1]=='*')||(str[i-2]=='*')){
                
                B.push_back('*');
            }
            else{
                B.push_back('+');
            }
            i+=(in-1);
            in=1;
        }
    }
    for(int i=0;i<A.size();++i){
        if(B[i]=='*'){
            A[i-1]=A[i-1]*A[i];
            A.erase(A.begin()+i);
            B.erase(B.begin()+i);
        }
    }
    for(int i=0;i<A.size();++i){
        sum+=A[i];
    }
    cout<<sum<<endl;
    return 0;
}
