#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct user {
    string account;
    string password;
};

int main() {
    user user[10];;
    user[0].account = "wayne@gmail.com";
    user[0].password = "123456";
    user[1].account = "jack@gmail.com";
    user[1].password = "654321";
    user[2].account = "good@yahoo.com.tw";
    user[2].password = "987654";
    user[3].account = "happy@yahoo.com.tw";
    user[3].password = "456789";
    user[4].account = "sad@github.com";
    user[4].password = "123789";

    int num;
    bool status = false;
    string account;
    string password;
    string name;

    cout << "歡迎來到replit.com" << "\n";
    cout << "帳號: "; 
    cin >> account;
    for (int i = 0; i < 5; i++) {
        if (user[i].account == account) {
            status = true; 
        }
    }
    if (!status) {
        cout << "查無此人...\n\n";
        return main();
    }
    cout << "密碼: ";
    cin >> password;
    cout << "名子: ";
    cin >> name;

    srand(time(0));
    num = rand() % 10;
    string welcome[10] = {name +" 剛剛出現了！",
                          "歡迎，" + name + "。我們希望您帶個披薩來！",
                          name + " 剛剛滑入了伺服器中。",
                          "野生的 " + name + " 出現。",
                          name + " 跳進了伺服器。",
                          name + " 剛剛滑入了伺服器中。",
                          name + " 剛剛著陸。",
                          "歡迎 " + name + "。打聲招呼吧。",
                          "很高興見到" + name,
                          "耶，" + name + "。成功了!"};
                          
    for (int i = 0; i < 5; i++) {
        if (user[i].account == account) {
            if (user[i].password == password) {
                status = true;
            } else {
                status = false;
            }

        }
    }

    if (status == true) {
        cout << welcome[num];
    } else {
        cout << "你 是駭客嗎?(帳號或密碼錯誤!)" << "\n";
        return main();
    }
}

