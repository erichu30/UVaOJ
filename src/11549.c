#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n = 0, ans, i;
    scanf("%d", &num);
    for(i = 0; i < num; ++i){
        scanf("%d", &n);
        n = ((n * 567 / 9 + 7492)*235)/47-498;
        ans = n/10%10;
        if(ans < 0)
            ans *= -1;
        printf("%d\n", ans);
    }
    return 0;
}
