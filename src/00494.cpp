#include <iostream>

using namespace std;

int main()
{
    char s;
    int i, flag;

    i = 0;
    flag = 0;

    while(cin.get(s)){
        if(flag == 0){
            if((s <= 90&&s >= 65)||(s >= 97 && s <= 122)){
                flag = 1;
                i++;
            }
        }else{
            if(!((s <= 90&&s >= 65)||(s >= 97 && s <= 122))){
                flag = 0;
            }
        }

        if(s == '\n'){
            cout << i << endl;
            i = 0;
        }
    }

    return 0;
}
