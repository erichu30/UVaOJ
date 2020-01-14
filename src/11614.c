#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long int casenum;
    while(scanf("%lld", &casenum)!=EOF){
        long long int i;
        for(i = 0; i < casenum; ++i){
            long long int warriors;
            long long int row ;
            scanf("%lld", &warriors);

            row = ((-1)+sqrt(1+8*warriors))/2;
            printf("%lld\n", row);
        }
    }
    return 0;
}
