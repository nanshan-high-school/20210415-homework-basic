#include <iostream>
using namespace std;
struct user_data {
    string email;
    string password;
    string name;
};
struct welcome_template {
    string part_1;
    string part_2;
    string part_3;
};
void welcome(string name) {
    welcome_template messages[] = {
        "Good morning, ", name, ", have you eaten breakfast yet?\n",
        "Good afternoon, ", name, ", have you eaten lunch yet?\n",
        "Good evening, ", name, ", have you eaten dinner yet?\n",
        "Good night, ", name, ", have you fallen asleep yet?\n",
        "You are already dead, ", name, ".\n",
        name, " is still here, ", "just to suffer.\n"
    };  
    int index = rand() % 6;
    cout << messages[index].part_1 << messages[index].part_2 << messages[index].part_3; 
}
int main() {
    srand(time(0));
    user_data valid_accounts[] = {
        "Jonathan@gmail.com", "Joestar", "SpeedWagon",
        "Joseph@gmail.com", "Joestar", "HermitPurple",
        "Jotaro@gmail.com", "Kujo", "StarPlatinum",
        "Josuke@gmail.com", "Higashikata", "CrazyDiamond",
        "Giorno@gmail.com", "Giovanna", "GoldenExperience"
    };
    user_data input;
    while (cin >> input.email >> input.password) {
        short status = 0;
        for (int i = 0; i < 5; i++) {
            switch ((input.email == valid_accounts[i].email) * 2 + (input.password == valid_accounts[i].password)) {
                case 3:
                    welcome(valid_accounts[i].name);
                    return 0;
                case 2:
                    status = 2;
                    break;
                default:
                    status = (status == 0) ? 1 : status;
                    break;
            }
        }
        switch (status) {
            case 2:
                cout << "Wrong password, please reenter.\n";
                break;
            case 1:
                cout << "Account doesn't exist, please reenter.\n";
                break;
        }
    }
}
