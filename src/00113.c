#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n;
    double p;
    while(scanf("%lf %lf", &n, &p)!=EOF){
        double k;
        k = pow(p, 1/n);
        printf("%.lf\n", k);
    }
    return 0;
}
