#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    struct joinin {
        string usersname;
        string account;
        string password;
    };
    int random;
    joinin a;
    //
    a.usersname = "叫我帥哥林小克";
    a.account = "goodjack";
    a.password = "handsome";
    //
    joinin b;
    //
    b.usersname = "Dio";
    b.account = "ko_no_dio_da";
    b.password = "Za_Warudo";
    //
    joinin c;
    //
    c.usersname = "ジョルノ・ジョバァーナ";
    c.account = "My_dream_is_being_a_gangsterstar";
    c.password = "Gold_Experience_Requiem";
    //
    srand(time(NULL));
    random = rand() % 5;
    string Input_1, Input_2, userswitch;
    for (int mention = 0; mention == 0; mention += 0){
        cout << "\n請輸入帳號和密碼\n" << "帳號：";
        cin >> Input_1;
        cout << "密碼：";
        cin >> Input_2;
        if (Input_1 == "goodjack") {
            (Input_2 == "handsome") ? mention = 1 : mention = 0;
            userswitch = a.usersname;
        }
        else if (Input_1 == "ko_no_dio_da") {
            (Input_2 == "Za_Warudo") ? mention = 1 : mention = 0;
            userswitch = b.usersname;
        }
        else if (Input_1 == "My_dream_is_being_a_gangsterstar") {
            (Input_2 == "Gold_Experience_Requiem") ? mention = 1 : mention = 0;
            userswitch = c.usersname;
        }
        while (mention != 1){
            cout << "帳號密碼錯誤，請重新輸入 : <";
            break;
        }
    }
    string welcomesentence[5][3] = {
        {"野生的", userswitch, "出現了"},
        {userswitch, "要進來了,", "小夫請做好準備"},
        {"WRY!!!!!", userswitch, "不當人類拉！"},
        {userswitch, "還有五秒到達戰場", ",全軍出擊!!!"},
        {userswitch, "以為他還能逃跑", ",但你已經被我一個人包圍拉!"},
    };
    cout << "\n" << welcomesentence[random % 5][0] << welcomesentence[random % 5][1] << welcomesentence[random % 5][2];    
}
