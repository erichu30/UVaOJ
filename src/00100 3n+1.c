#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int a, b, c, cmp, cnt, i, n;

    while(scanf("%ld %ld", &a, &b)!=EOF){
        cmp = 0;

        printf("%ld %ld ", a, b);
        if (a > b)
        {
            c = a;
            a = b;
            b = c;
        }

        for(i = a; i <= b; ++i){
            cnt = 1;
            n = i;
            while(n!=1){

                
                if(n % 2 != 0){
                    n = n*3+1;
                }
                else if(n % 2 == 0){
                    n = n/2;
                }
                cnt++;
            }

            if(cnt > cmp){
                cmp = cnt;
            }
        }
        printf("%ld\n", cmp);

    }
    return 0;
}
