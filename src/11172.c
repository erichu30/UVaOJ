#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    while(scanf("%d",&t)!=EOF){
        int i;
        for(i = 0; i < t; ++i){
            long int a, b;
            scanf("%ld %ld", &a, &b);
            if(a < b){
                printf("<\n");
            }
            else if(a > b){
                printf(">\n");
            }
            else if(a == b){
                printf("=\n");
            }
        }
    }
    return 0;
}
