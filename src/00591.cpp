#include <iostream>

using namespace std;

int main()
{
    int n;
    int h[101] = {0};
    int cases = 0;
    while(cin >> n){
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; ++i){
            cin >> h[i];
        }

        int p = 0;
        for(int i = 0; i < n; ++i){
            p += h[i];
        }
        p /= n;

        int cnt = 0;
        for(int i = 0; i < n; ++i){
            while(h[i] < p){
                h[i]++;
                cnt++;
            }

            while(h[i] > p){
                h[i]--;
                cnt++;
            }

        }
        if(cnt > 0){
            cnt /= 2;
        }


        cases++;
        cout << "Set #" << cases << endl;
        cout << "The minimum number of moves is " << cnt << "." << endl;
        cout << endl;

    }

    return 0;
}
