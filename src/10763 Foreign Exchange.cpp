#include <iostream>
#include <algorithm>
#include <cstring>
#define max 500050

using namespace std;
int  a[max] = {0}, b[max] = {0};

int main()
{
    unsigned int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        unsigned int i, flag = 1;

        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));

        for(i = 0; i < n; ++i){
            cin >> a[i];
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n);

        for(i = 0; i < n; i++){
            if(a[i]!=b[i]){
                flag = 0;
            }

            if(flag == 0){
                break;
            }
        }

        if(flag == 0){
            cout << "NO" << endl;
        }else
            cout << "YES" << endl;
    }
    return 0;
}
