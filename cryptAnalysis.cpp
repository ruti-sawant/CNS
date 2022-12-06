#include <bits/stdc++.h>
using namespace std;

vector<string> data = {"time", "be", "good", "am", "to", "the", "person", "have", "new", "of", "and", "year", "do", "first", "in", "a", "way", "say", "last", "for", "that", "day", "get", "long", "on", "i", "thing", "make", "great", "with", "it", "man", "go", "little", "at", "not", "world", "know", "own", "by", "he", "life", "take", "other", "from", "as", "hand", "see", "old", "up", "you", "part", "come", "right", "about", "this", "child", "think", "big", "into", "but", "eye", "look", "high", "over", "his", "woman", "want", "different", "after", "they", "place", "give", "small", "her", "work", "use", "large", "she", "week", "find", "next", "or", "case", "tell", "early", "an", "point", "ask", "young", "will", "government", "work", "important", "my", "company", "seem", "few", "one", "number", "feel", "public", "all", "group", "try", "bad", "would", "problem", "leave", "same", "there", "fact", "call", "able", "their"};

set<string> dict(data.begin(), data.end());

bool validate(string &str) {
    stringstream ss(str);
    string word;
    int good = 0, count = 0;
    while (ss >> word) {
        count++;
        if (dict.find(word) != dict.end())
            good++;
    }
    return count == good;
}

string decrypt(string cipher, int k) {
    string plain = "";
    for (int i = 0; i < cipher.length(); i++) {
        if (cipher[i] == ' ')
            plain += ' ';
        else
            plain += (char)(((cipher[i] - 'a' - k + 26) % 26) + 'a');
    }
    return plain;
}

int main() {
    string cipher;
    cout << "Enter Encrypted text: ";
    getline(cin, cipher);

    for (int i = 0; i < 26; i++) {
        string plain = decrypt(cipher, i);
        cout << "Decrypted text for key " << i << " is: " << plain << "  ";
        if (validate(plain)) {
            cout << "<-Valid Plain text\tFor key " << i;
        }
        cout << endl;
    }
}