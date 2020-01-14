#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
        int i, high, low;
        int cnt = 1;
        for(i = 0; i < n; ++i){
            int number, a, b;
            high = low = 0;
            scanf("%d", &number);
            scanf("%d", &a);
            
            int j;
            for(j = 1; j < number; ++j){
                scanf("%d", &b);
                if(a < b){
                    ++high;
                }
                if(a > b){
                    ++low;
                }
                a = b;
            }


            printf("Case %d: %d %d\n", cnt, high, low);
            cnt++;
        }
    }
    return 0;
}
