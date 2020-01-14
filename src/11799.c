#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casenum, cnt = 1;
    while(scanf("%d", &casenum)!=EOF){
        int i;

        for(i = 0; i < casenum; ++i){
            int j;
            int testcase;
            unsigned int max = 0;
            scanf("%d", &testcase);
            for(j = 0; j < testcase; ++j){
                unsigned int speed;

                scanf("%u", &speed);
                if(speed>max){
                    max = speed;
                }
            }

            printf("Case %d: %d\n", cnt, max);
            cnt++;
        }


    }
    return 0;
}
