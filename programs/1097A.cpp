//problem : https://codeforces.com/problemset/problem/1097/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    string t;
    cin>>t;
    string h[5];
    int f=0;
    for(int i=0;i<5;i++){
        cin>>h[i];
        if(h[i][0] == t[0] || h[i][1] == t[1])
            f=1;
    }
    (f)?printf("YES"):printf("NO");
}