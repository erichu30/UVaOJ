#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(scanf("%d", &num)!=EOF){
        int i;

        for(i = 0; i < num; ++i){
            int peg;

            scanf("%d", &peg);

            int ball[51];
            ball[0] = 1;
            ball[1] = 1;
            ball[2] = 3;
            int j;
            for(j = 3; j < 51; ++j){
                ball[j] = ball[j-2] + j*2;
            }

            printf("%d\n", ball[peg]);
        }
    }
    return 0;
}
