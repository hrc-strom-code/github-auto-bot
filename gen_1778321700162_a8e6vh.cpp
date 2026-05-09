// Auto-generated: 2026-05-09 15:45:00
// Module: Sorting Utility — 1778321700162_a8e6vh
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

namespace sort_util_17783217 {

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

} // namespace sort_util_17783217

int main() {
    std::vector<int> data = { 99, 96, 67, 92, 62, 33 };
    std::cout << "Before: ";
    sort_util_17783217::print_array(data);
    sort_util_17783217::bubble_sort(data);
    std::cout << "After:  ";
    sort_util_17783217::print_array(data);
    return 0;
}
