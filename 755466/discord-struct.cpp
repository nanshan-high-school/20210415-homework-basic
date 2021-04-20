#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(0));
    int n = rand() % 5; //隨機數

    struct userpassword{
        string acc, pass;
    };

    userpassword user[3] = { //帳號
        {"goodjack", "Not-Handsome"},
        {"badjack", "So-Bad"},
        {"godjack", "WTF"}
    };

    string name;
    userpassword inside;
    cout << "請輸入你的帳號與密碼及匿名名稱\n";
    cin >> inside.acc >> inside.pass >> name;


    string hello[5] = {
        {name + "剛剛滑入了伺服器中。"},
        {"大家一起歡迎"+ name + "!"},
        {name + "跳進了伺服器。"},
        {"很開心您來了，"+ name +"。"},
        {"耶，您成功了，"+ name +"！"},
    };
    
    for (int i = 0; i < 3; i++) {
        if((inside.acc == user[i].acc) && (inside.pass == user[i].pass)) {
            cout << hello[n];
            return 0;
        }
    }
    cout << "帳號或密碼有誤!";
}