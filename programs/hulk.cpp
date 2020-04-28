#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i%2==1)
            printf("I hate ");
        else
            printf("I love ");
        if(n>1 && i!=n)
            printf("that ");    
    }
    printf("it");
}
