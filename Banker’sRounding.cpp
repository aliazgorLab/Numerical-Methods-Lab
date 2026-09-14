//Round off a number to n significant figures using Banker’s Rounding Rule.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int dot=s.find('.');
    if(n == 0){
        if(s[dot + 1] > '5')
        s[dot - 1]++;
        else if(s[dot + 1] == '5' &&
        (s[dot - 1] - '0') % 2 == 1)
        s[dot - 1]++;
        for(int i=0; i<dot; i++)
        cout<<s[i];
        cout<<endl;
        return 0;
    }
    int count=0;
    int pos=-1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.')
        continue;
        if(s[i]!='0' || count>0){
            count++;
            if(count==n){
                pos=i;
                break;
            }
        }
    }
    int next=pos+1;
    if(next<s.size() && s[next]=='.')
    next++;
    if(next < s.size()){
        if(s[next]>'5')
        s[pos]++;
        else if(s[next]=='5' && (s[pos]-'0')%2 == 1)  s[pos]++;
    }
    for(int i=0; i<=pos; i++)
    cout<<s[i];
    if(pos==s.size() - 1){
        for(int i=count; i<n; i++)
        cout<<'0';
    }
    cout<<endl;
    return 0;
}
