#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s;
    int flag = 0;

    while(cin.get(s)){
        if(s == '"'){
            if(flag %2 == 0){
                cout << "``";
            }else{
                cout << "''";
            }
            flag++;
        }else{
            cout << s;
        }

    }
    return 0;
}

