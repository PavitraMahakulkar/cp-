#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<92) s1[i]+=32;
        if(s2[i]<92) s2[i]+=32;
    }
    if(s1>s2) cout<<1;
    else if(s1<s2) cout<<-1;
    else cout<<0;
}