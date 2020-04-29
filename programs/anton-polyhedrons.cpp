#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, c=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char s[25];
        cin>>s;
        if(s[0] == 'T')
            c+=4;
        if(s[0] == 'C')
            c+=6;
        if(s[0] == 'O')
            c+=8;
        if(s[0] == 'D')
            c+=12;
        if(s[0] == 'I')
            c+=20;
    }
    printf("%d", c);
}