#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string text = "circumstances apple colonel bread itinerary lemon";
    regex pattern(R"(\b\w{5}\b)");

    sregex_iterator currentMatch(text.begin(), text.end(), pattern);
    sregex_iterator lastMatch;

    cout << "Words with 5 characters:\n";
    while (currentMatch != lastMatch) {
        smatch match = *currentMatch;
        cout << match.str() << '\n';
        ++currentMatch;
    }

}
