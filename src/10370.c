#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt;
    while(scanf("%d", &cnt)!=EOF){
        int i, j, k, l;
        int n[1000];
        for(i = 0; i < cnt; ++i){
            scanf("%d", &k);
            int average = 0;
            int count = 0;

            for(j = 0; j < k; ++j){
                scanf("%d", &n[j]);
                average += n[j];
            }

            average = average / k;

            for(l = 0; l < k; ++l){
                if(n[l] > average){
                    count++;
                }
            }

            float judge;
            judge = (float)count / (float)k * 100;
            printf("%.3f", judge);
            puts("%");
        }
    }
    return 0;
}
