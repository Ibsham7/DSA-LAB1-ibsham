#include <iostream>
using namespace std;

int findpattern(string text, string pattern) {
    // naive pattern searching algorithm
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    string text[] = {"ababcabcabababd" , "hello world" , "darkness"};
    string pattern[] = {"ababc" , "world" , "light" , " "};
    for (int i = 0; i < 3; i++) {
        cout << "Text: " << text[i] << ", Pattern: " << pattern[i] << endl;
        int result = findpattern(text[i], pattern[i]);
        if (result != -1) {
            cout << "Pattern found at index: " << result << endl;
        } else {
            cout << "Pattern not found" << endl;
        }
    }
    return 0;
}
    