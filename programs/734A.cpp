// problem : https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    char c;
    int n, a=0, d=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        cin>>c;
        (c == 'A')? a++ : d++;
        
    }
    if(a == d) printf("Friendship");
    else if(a>d) printf("Anton");
    else printf("Danik");
}