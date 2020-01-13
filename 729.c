#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define swap(a, b, t) \
	do {\
		(t) = (a);\
		(a) = (b);\
		(b) = (t);\
	} while (0)

void permutate(int str[], int m, int n)
{
	int i;
	int temp;
	int check[2] = {0};

	if (m == n) {
		for (i = 0; i < n; ++i){
            printf("%d", str[i]);
		}
		printf("\n");
		return;
	}

	for (i = m; i < n; ++i) {
		if (check[str[i]] == 1){
            continue;
		}else
            swap(str[i], str[m], temp);
            permutate(str, m + 1, n);
            swap(str[i], str[m], temp);
            check[str[i]] = 1;
	}
}

int main()
{
	int cases, n, h;

	int str[16] = {0};

	scanf("%d", &cases);
	while (cases-- > 0) {
		scanf("%d %d", &n, &h);
		int i;
		for (i = n-1; i > n-h-1; --i){
            str[i] = 1;
		}

		for (; i >= 0; --i){
            str[i] = 0;
		}

		permutate(str, 0, n);
		if (cases){
            printf("\n");
		}
	}
	return 0;
}
