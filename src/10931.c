#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int integer;
    while(scanf("%u",&integer)!=EOF){
        if(integer == 0){
            break;
        }
        int count = 0;
        int bin;
        int binArr[32] = {};
        int i = 0;

        printf("The parity of ");

        while(1){
            if(integer== 0){
                break;
            }
            if(integer == 1){
                binArr[i] =1;
                ++i;
                count++;
                break;
            }
            bin = integer % 2;
            if(bin == 1){
                count++;
            }

            binArr[i] = bin;
            i++;

            integer/=2;
        }
        int j;
        for(j = i-1; j >= 0; --j){
            printf("%d", binArr[j]);
        }
        printf(" is %d (mod 2).\n",count);

    }
    return 0;
}
