#include <iostream>

using namespace std;

int main()
{
    int ch, cm, ah, am, time;
    while(cin >> ch >> cm >> ah >> am){

        if(ch==0 && cm==0 && ah==0 && am==0){
            break;
        }

        if(ah > ch){
            if(am >= cm){    //1 5 3 6
                time = (ah-ch)*60 + (am-cm);
            }else if(am < cm){  // 1 59 2 0
                time = (ah-ch-1)*60 + (60+am-cm);
            }
        }


        if(ah < ch){    //23 0 1 0
            if(am >= cm){    //23 0 1 6
                time = (ah+24-ch)*60 + (am-cm);
            }else if(am < cm){  // 23 59 1 0
                time = (ah+24-ch-1)*60 + (60+am-cm);
            }
        }


        if(ah == ch){
             if(am >= cm){    // 1 2 1 5
                time = am - cm;
            }else if(am < cm){  // 1 5 1 2
                time = am - cm + 1440;
            }
        }

        cout << time << endl;

    }
    return 0;
}
