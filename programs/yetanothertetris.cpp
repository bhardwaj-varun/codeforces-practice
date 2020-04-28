#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);

        int i, a, sum = 0;

        for (i = 0; i < n; ++i){
            scanf("%d", &a);
            sum = sum + (a % 2);
        }
        (sum == 0 || sum == n) ? printf("YES\n") : printf("NO\n");
    }
}