#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int cnt;
    int count;
    while(scanf("%u", &cnt)!=EOF){
        int term1, term2, fin, attendance, a, b, c, total, average;
        unsigned int i;

        count = 1;

        for(i = 0; i < cnt; ++i){

            scanf("%d %d %d %d %d %d %d", &term1, &term2, &fin, &attendance, &a, &b, &c);

            if( b >= a && c >= a){
                average = (b + c)/2;
            }
            else if(a >= b && c >= b){
                average = (a + c)/2;
            }
            else if(a >= c && b >= c){
                 average = (a + b)/2;
            }

            total = term1 + term2 + fin + attendance + average;

            if(total >= 90){
                printf("Case %d: A\n", count);
            }
            else if(total >= 80 && total <90){
                printf("Case %d: B\n", count);
            }
            else if(total >= 70 && total <80){
                printf("Case %d: C\n", count);
            }
            else if(total >= 60 && total <70){
                printf("Case %d: D\n", count);
            }
            else if(total < 60){
                printf("Case %d: F\n", count);
            }

             count++;
        }
    }

    return 0;
}
