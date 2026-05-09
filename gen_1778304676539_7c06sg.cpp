// Auto-generated: 2026-05-09 11:01:16
// Module: Math Utils — 1778304676539_7c06sg
#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>

namespace math_17783046 {

    double factorial(int n) {
        if (n <= 1) return 1.0;
        return n * factorial(n - 1);
    }

    bool is_prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= static_cast<int>(std::sqrt(n)); ++i)
            if (n % i == 0) return false;
        return true;
    }

    std::vector<int> sieve(int limit) {
        std::vector<bool> is_p(limit + 1, true);
        std::vector<int> primes;
        is_p[0] = is_p[1] = false;
        for (int i = 2; i <= limit; ++i) {
            if (is_p[i]) {
                primes.push_back(i);
                for (int j = 2 * i; j <= limit; j += i)
                    is_p[j] = false;
            }
        }
        return primes;
    }

    double mean(const std::vector<double>& v) {
        return std::accumulate(v.begin(), v.end(), 0.0) / v.size();
    }

} // namespace math_17783046

int main() {
    std::cout << "Factorial(8) = " << math_17783046::factorial(8) << "\n";
    auto primes = math_17783046::sieve(55);
    std::cout << "Primes up to 55: ";
    for (int p : primes) std::cout << p << " ";
    std::cout << "\n";
    return 0;
}
