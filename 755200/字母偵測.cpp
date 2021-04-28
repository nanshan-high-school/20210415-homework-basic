#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool booling (string m, int i);

int main() {
    string m;
    int plus = 0;
    while (getline(cin, m)) {
        plus = 0;
        for (int i = 0; i <= m.size(); i++) {
            if (booling(m, i) == false) {
                if (i != 0 && booling(m, i - 1)) {
                    plus++;
                }
            }
        }
        cout << plus << endl;
    }
}

bool booling (string m, int i) {
    if (('Z' >= m[i] && m[i] >= 'A') || ('z' >= m[i] && m[i] >= 'a')) {
        return true;
    }
    else {
        return false;
    }
}
