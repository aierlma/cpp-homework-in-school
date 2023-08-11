#include <iostream>
#include <string>

void reverse(std::string& s, int start = 0, int end = -1) {
    if (end < 0) {
        end = s.size() - 1;
    }
    if (start >= end) {
        return;
    }

    std::swap(s[start], s[end]);
    reverse(s, start + 1, end - 1);
}

int main() {
    std::string s = "Hello, world!";
    reverse(s);
    std::cout << s << std::endl; //

    return 0;
}
