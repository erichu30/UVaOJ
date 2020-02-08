#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long long int ans;
    int before[100001] = {0};
    while(cin >> n){

        if(n == 0){
            break;
        }
        ans = 0;
        int i;

        for(i = 0; i < n; ++i){
            cin >> before[i];
        }

        for(i = 0; i < n; ++i){
            ans += abs(before[i]);
            before[i+1] += before[i];
        }

        cout << ans << endl;
    }
    return 0;
}
