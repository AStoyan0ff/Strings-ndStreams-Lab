#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    
    string input, result;
    getline(cin, input);
              
    stringstream strs(input);
    string word;

    while (strs >> word) {
        int repeatCount = word.size();
        
        for (int i = 0; i < repeatCount; i++) {
            result += word;
        }
    }
        
    cout << result;

    return 0;
}
