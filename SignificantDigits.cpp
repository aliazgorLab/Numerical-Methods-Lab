//Write a program to count number of significant digits in a given number.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    bool decimal=false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            decimal = true;
        }
        else if(s[i] != '0'){
            count++;
        }
        else if(count>0 && decimal){
            count++;
        }
    }
    if(!decimal){
        while(s.back()=='0'){
            count--;
            s.pop_back();
        }
    }
    cout<<count<<endl;
    return 0;
}
