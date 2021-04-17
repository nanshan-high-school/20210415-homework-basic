#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {

    struct for_user {
        string account;
        string password;
        string name;
    };

    for_user user[5] = {
        {"dongdaemun638575", "Oshio878", "小紅"},
        {"sindang_38451", "sweet969", "阿橙"},
        {"wang_4mu1", "You2Right", "俸黃"},
        {"hanyangdae123", "Guud13579", "綠師"},
        {"ttukseom35", "Aokawa51", "嘻藍"},
    };

    string messages[6] = {
        " 剛剛滑入了伺服器中。",
        " 你再度歸~來了 -w-",
        " 嘿! 安安阿~。",
        " 歡迎你回來。",
        " 從離線中出現了!!",
        " 你要進來了~ OAO"
    };

    struct inp {
        string account;
        string password;
    };

    inp now_input;
    now_input.account = "";
    now_input.password = "";
    bool is_correct = false;
    int i = 4;

    do {
        if (now_input.account != "") {
            cout << "\n帳號密碼錯誤，請重新輸入。\n";
        }
        cout << "帳號：";
        cin >> now_input.account;
        cout << "密碼：";
        cin >> now_input.password;
        for (i = 0; i < 5; i++) {
            if ((user[i].account == now_input.account)\
             && (user[i].password == now_input.password)) {
                is_correct = true;
                break;
            }
        }
    } while (is_correct == false);

    int num;
    srand(time(0));
    num = rand() % 6;

    cout << "\n" << user[i].name << messages[num];
}
