#include <iostream>
#include <cctype>

int countLetters(const std::string& sentence) {
    int count = 0;
    for (char c : sentence) {
        if (std::isalpha(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int count = countLetters(sentence);
    std::cout << "The sentence contains " << count << " letters.\n";

    return 0;
}
