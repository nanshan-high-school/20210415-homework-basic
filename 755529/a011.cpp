#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    while(getline(cin, line)) {
        int j = 1;
        bool flag = false;
        int len = 0;
        for (auto i : line) {
            if (isalpha(i)) {
                flag = true;
            } else if (flag == true) {
                j += 1;
                flag = false;
            }
            len += 1;
        }
        if (!isalpha(line[len - 1])) {
            j -= 1;
        }
        cout << j << endl;
    }
}
