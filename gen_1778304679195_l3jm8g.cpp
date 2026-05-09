// Auto-generated: 2026-05-09 11:01:19
// Module: Sorting Utility — 1778304679195_l3jm8g
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

namespace sort_util_17783046 {

    void bubble_sort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i)
            for (int j = 0; j < n - i - 1; ++j)
                if (arr[j] > arr[j + 1])
                    std::swap(arr[j], arr[j + 1]);
    }

    void selection_sort(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            int min_idx = i;
            for (int j = i + 1; j < n; ++j)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            std::swap(arr[i], arr[min_idx]);
        }
    }

    void print_array(const std::vector<int>& arr) {
        for (int x : arr) std::cout << x << " ";
        std::cout << "\n";
    }

} // namespace sort_util_17783046

int main() {
    std::vector<int> data = { 73, 29, 96, 85, 40, 73, 68, 89 };
    std::cout << "Before: ";
    sort_util_17783046::print_array(data);
    sort_util_17783046::bubble_sort(data);
    std::cout << "After:  ";
    sort_util_17783046::print_array(data);
    return 0;
}
