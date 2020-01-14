#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    int N, K, P, A; 
    while(scanf("%d", &testCase)!=EOF){
        int i, count = 1;
        for(i = 0; i < testCase; ++i)
        {
            scanf("%d %d %d", &N, &K, &P);
            A = K+P;
            while(A > N){
                A = A - N;
            }
            printf("Case %d: %d\n", count, A);
            count++;
        }
    }

    return 0;
}
