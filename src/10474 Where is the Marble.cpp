#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, cases = 1;
    while(cin >> n >> q){
        if(n == 0 && q == 0){
            break;
        }
        int balls[10000] = {0};
        int x;
        for(int i = 0; i < n; ++i){
            cin >> balls[i];
        }

        sort(balls, balls+n);

        cout << "CASE# " << cases << ":" << endl;
        cases++;

        for(int i = 0; i < q; ++i){

            cin >> x;
            int place;
            place = lower_bound(balls, balls+n, x) - balls;
            // find the position where the first number >= x in array

            if(balls[place] == x){
                cout << x << " found at " << place+1 << endl;
            }else{
                cout << x << " not found" << endl;
            }

        }

    }
    return 0;
}
