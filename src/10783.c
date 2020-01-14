#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
        int i, cnt = 1;

        for(i = 0; i < n; ++i){
            int a, b;
            scanf("%d %d", &a, &b);
            int j;
            int total = 0;
            if(a % 2 == 0){
                a = a+1;
            }
            if(b % 2 == 0){
                b = b-1;
            }
            for(j = a; j <= b; j = j+2){
                total += j;
            }
            printf("Case %d: %d\n", cnt, total);
            cnt++;
        }

    }
    return 0;
}
