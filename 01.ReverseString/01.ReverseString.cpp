#include <iostream>
#include <sstream>
#include <ostream>
#include <string>
//#include <algorithm>
using namespace std;

// Variant 1

//int main() {
//   
//    string word;
//       
//    while (true) {
//        cin >> word;
//        
//        if (word == "end") {
//            break; 
//        }
//
//        string reversedWord = word; 
//        reverse(reversedWord.begin(), reversedWord.end()); 
//
//        cout << word << " = " << reversedWord << endl;
//    }
//
//    return 0;
//}

// Variant 2

static string reverseWord(string word) {
    ostringstream oss;

    int id = word.size() - 1;

    while (id >= 0) {
        oss << word[id--];
    }

    return oss.str();
}

int main() {

    string word;

    while (cin >> word) {
       
        if (word == "End") {
            break;
        }

        cout << word << " = " << reverseWord(word) << endl;
    }
    return 0;
}