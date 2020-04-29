#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a[4], i;
    for(i=0;i<4;i++){
        scanf("%lld", &a[i]);
    }
    sort(a, a+4);
    printf("%lld %lld %lld", a[3]-a[0], a[3]-a[1],a[3]- a[2]);
}