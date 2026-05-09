// Auto-generated: 2026-05-09 11:01:21
// Module: String Processor — 1778304681952_shfr7h
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

namespace str_17783046 {

    std::string to_upper(std::string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }

    std::string to_lower(std::string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }

    std::vector<std::string> split(const std::string& s, char delim) {
        std::vector<std::string> tokens;
        std::stringstream ss(s);
        std::string token;
        while (std::getline(ss, token, delim)) tokens.push_back(token);
        return tokens;
    }

    std::string trim(const std::string& s) {
        auto start = s.find_first_not_of(" \t\n\r");
        auto end   = s.find_last_not_of(" \t\n\r");
        return (start == std::string::npos) ? "" : s.substr(start, end - start + 1);
    }

    bool is_palindrome(const std::string& s) {
        std::string clean;
        for (char c : s) if (std::isalnum(c)) clean += std::tolower(c);
        return clean == std::string(clean.rbegin(), clean.rend());
    }

    int count_words(const std::string& s) {
        auto tokens = split(trim(s), ' ');
        return static_cast<int>(tokens.size());
    }

} // namespace str_17783046

int main() {
    std::string sample = "code generation complete";
    std::cout << "Original: " << sample << "\n";
    std::cout << "Upper:    " << str_17783046::to_upper(sample) << "\n";
    std::cout << "Words:    " << str_17783046::count_words(sample) << "\n";
    std::cout << "Palindrome check 'racecar': "
              << (str_17783046::is_palindrome("racecar") ? "yes" : "no") << "\n";
    return 0;
}
