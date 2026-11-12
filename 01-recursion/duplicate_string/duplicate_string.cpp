#include <iostream>
#include <string>

bool isDuplicate(const std::string& s) {
    if (s.empty()) {
        return true;
    }
    if (s.length() % 2 != 0) {
        return false;
    }

    size_t half = s.length() / 2;
    std::string s1 = s.substr(0, half);
    std::string s2 = s.substr(half);

    if (s1 != s2) {
        return false;
    }

    return isDuplicate(s1.substr(1));
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    if (std::cin >> s) {
        if (isDuplicate(s)) {
            std::cout << "Duplicate\n";
        } else {
            std::cout << "Not Duplicate\n";
        }
    }
    return 0;
}
