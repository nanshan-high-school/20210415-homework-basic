#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    while(getline(cin, str)) {
        int total = 0;
        if(isalpha(str[str.size() - 1])){
            total += 1; //最後面沒有標點符號
        }
        for (int i = 0; i < str.size(); i++) {
            if(!isalpha(str[i])) {
                str[i] = ' ';  //不是字母變空格
            }
        }

        for (int i = 0; i < str.size(); i++){
            if(str[i] == ' ' && str[i + 1] != ' '){
                total += 1;
            }
            
        }
        cout << total << endl;
    }
}

