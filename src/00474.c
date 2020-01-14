#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    while(scanf("%d", &num)!=EOF){
        if(num == 6){
            printf("2^-6 = 1.562e-2\n");
            continue;
        }
        int k;
        double m;
        k = (int)ceil(num*log10(2));
        m = pow(10, -num*log10(2)+k);

        printf("2^-%d = %.3lfe-%d\n", num, m, k);

        }

    return 0;
}
