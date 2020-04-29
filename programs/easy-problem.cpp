#include<bits/stdc++.h>

using namespace std;

int main(){

   int n, a, hard=0;
   scanf("%d",&n);

   for(int i=0;i<n;i++){
       scanf("%d", &a);
       if(a == 1)
        hard=1;
   }
   (hard)? printf("HARD") : printf("EASY");
}