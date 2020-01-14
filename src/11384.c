#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(scanf("%d", &num)!=EOF){
        int cnt = 0;
        while(num > 0){

            num = num /2;
            cnt ++;
        }

        printf("%d\n", cnt);


    }
    return 0;
}
