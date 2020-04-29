// problem : https://codeforces.com/problemset/problem/581/A

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[2];
    scanf("%d%d", &a[0], &a[1]);
    sort(a, a+2);
    // different pairs = the smallest no
    // same pair = smaller/2
    printf("%d %d", a[0], (a[1]-a[0])/2);
}