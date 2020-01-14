#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF){
        if(n == 0){
            break;
        }
        int pages = (n+3)/4;
        printf("Printing order for %d pages:\n", n);
        int book[30][4] = {0};

        int cnt = 1;
        int i, j, k;
		for (i = 1 ; i <= pages ; ++ i) {
			book[i][1] = cnt ++;
			if (cnt > n){
                break;
			}
			book[i][2] = cnt ++;
			if (cnt > n){
                break;
			}
		}

		if (cnt <= n){
            for (j = pages ; j >= 1 ; -- j) {
                book[j][3] = cnt ++;
                if (cnt > n){
                    break;
                }
                book[j][0] = cnt ++;
                if (cnt > n){
                    break;
                }
            }
		}


        for (k = 1 ; k <= pages ; ++ k) {
			if (book[k][0] || book[k][1]) {
				printf("Sheet %d, front: ",k);
				if (book[k][0]){
                    printf("%d, ",book[k][0]);
				}
				else
                    printf("Blank, ");
				if (book[k][1]){
                    printf("%d\n",book[k][1]);
				}
				else
                    printf("Blank\n");
			}
			if (book[k][2] || book[k][3]) {
				printf("Sheet %d, back : ",k);
				if (book[k][2]){
                    printf("%d, ",book[k][2]);
				}
				else
                    printf("Blank, ");
				if (book[k][3]){
                    printf("%d\n",book[k][3]);
				}
				else
                    printf("Blank\n");
			}
		}

    }
    return 0;
}
