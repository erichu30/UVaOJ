#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        if(a == 0 && b == 0 && c == 0){
            break;
        }

        if((c*c == (a*a + b*b))||(b*b == (a*a + c*c))||(a*a == (c*c + b*b)) ){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
    return 0;
}
