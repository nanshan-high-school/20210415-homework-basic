#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int space = 0;
    getline(cin, sentence);
    for (int i = 0; i < sentence.length() - 1; i++) {
        if (isalpha(sentence[i]) != 0) {
            space++;
            if (isalpha(sentence[i +1]) != 0) {
                space--;
            }
        }
    }
    if (space == 0) {
        cout << 0;
    } else {
        cout << space + 1;
    }
}
