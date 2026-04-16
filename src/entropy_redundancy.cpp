#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }

    // Bước 1: Tính Entropy thực tế của chuỗi (Actual Entropy)
    double h_x = calculate_entropy(text);

    // Bước 2: Tính Entropy cực đại (Max Entropy) 
    // Với ASCII, N = 256 nên log2(256) = 8
    double max_entropy = log2(alphabet_size);

    // Bước 3: Redundancy = Max Entropy - Actual Entropy
    return max_entropy - h_x;
}

int main() {
    string input;
    cout << "Enter a string of characters: ";
    getline(cin, input);

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << "Entropy: " << entropy << '\n';
    cout << "Redundancy: " << redundancy << '\n';
    return 0;
}
