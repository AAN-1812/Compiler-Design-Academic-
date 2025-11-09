#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;


bool isValidIdentifier(string s) {
    if (s.empty())
        return false;

    if (isdigit(s[0]))
        return false;

    for (int i = 0; i < s.length(); i++) {
        if (!isalnum(s[i]) && s[i] != '_')
            return false;
    }

    return true;
}


bool isKeyword(string word) {
    string keywords[] = {
        "int", "char", "float", "double", "return", "if", "else", "for", "while",
        "void", "break", "continue", "switch", "case", "main", "class", "public",
        "private", "protected", "static", "new", "delete", "this", "true", "false"
    };
    int totalKeywords = 25;

    for (int i = 0; i < totalKeywords; i++) {
        if (word == keywords[i])
            return true;
    }
    return false;
}

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "Error: Could not open sample.txt" << endl;
        return 1;
    }

    string word;
    cout << "Identifier Validation Results:\n\n";

    while (file >> word) {
        if (isKeyword(word))
            cout << word << " -> Keyword (Not a Valid Identifier)" << endl;
        else if (isValidIdentifier(word))
            cout << word << " -> Valid Identifier" << endl;
        else
            cout << word << " -> Invalid Identifier" << endl;
    }

    file.close();
    return 0;
}
