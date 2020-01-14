#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nums[1001];
    while(1){

        scanf("%s", &nums);
        if(strlen(nums) == 1 && nums[0] == '0'){
            break;
        }

        unsigned int odd = 0, even = 0, gap;
        int i;
        for(i = 0; i < strlen(nums); i++){
            if(i%2 == 0){
                odd = odd + (nums[i]- '0');
            }else{
                even = even + (nums[i]- '0');
            }

        }

        gap = abs(even - odd);
        if(gap%11 == 0){
            printf("%s is a multiple of 11.\n", nums);
        }
        else
            printf("%s is not a multiple of 11.\n", nums);
    }

    return 0;
}
