#include <iostream>

using namespace std;

int GCD(int, int);

int main()
{
    int k;
    while(cin >> k){
        if(k == 0){
            break;
        }

        int g = 0;
        for(int i = 1; i < k; ++i){
            for(int j = i+1; j <= k; ++j){
                g += GCD(i, j);
            }
        }
        cout << g << endl;
    }
    return 0;
}


int GCD(int i, int j){
    int n;
    if(i > j){
        n = i;
        i = j;
        j = n;
    }
    while(j != 0){
        n = i % j;
        i = j;
        j = n;
    }
    return i;
}
