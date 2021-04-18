#include <iostream>
int main() {
    std::string line;
    while (getline(std::cin, line)) {
    int count = 0;
    if (isalpha(line[0])) count++;
    for (int i = 1; i < line.size(); i++) count += (isalpha(line[i]) && !isalpha(line[i - 1]));
    std::cout << count;
    }
}
