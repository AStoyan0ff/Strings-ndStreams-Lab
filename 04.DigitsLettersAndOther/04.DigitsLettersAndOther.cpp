#include <iostream>
#include <string>
#include <cctype> // за std::isdigit и std::isalpha
using namespace std;

int main() {
    string input;
    getline(cin, input);

    string digits, letters, others;

    for (char ch : input) {
        if (isdigit(ch)) {
            digits += ch;
        }
        else if (isalpha(ch)) {
            letters += ch;
        }
        else {
            others += ch;
        }
    }

    cout << digits << endl;
    cout << letters << endl;
    cout << others << endl;

    return 0;
}
