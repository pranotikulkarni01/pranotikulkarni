#include <iostream>
#include <algorithm>
using namespace std;

double similarity(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    // Edge case: both empty
    if (len1 == 0 && len2 == 0)
        return 0.0;

    int maxLen = max(len1, len2);
    int match = 0;

    for (int i = 0; i < min(len1, len2); i++) {
        if (s1[i] == s2[i])
            match++;
    }

    return (double)match / maxLen;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    double result = similarity(s1, s2);
    cout << result;

    return 0;
}