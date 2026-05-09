// Auto-generated: 2026-05-09 11:13:00
// Module: Matrix Math — 1778305380094_ljqs5w
#include <iostream>
#include <vector>
#include <iomanip>
#include <stdexcept>

using Matrix = std::vector<std::vector<double>>;

namespace matrix_17783053 {

    Matrix create(int rows, int cols, double fill = 0.0) {
        return Matrix(rows, std::vector<double>(cols, fill));
    }

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int m = A.size(), n = B[0].size(), k = B.size();
        if (A[0].size() != static_cast<size_t>(k))
            throw std::invalid_argument("Dimension mismatch");
        Matrix C = create(m, n);
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                for (int p = 0; p < k; ++p)
                    C[i][j] += A[i][p] * B[p][j];
        return C;
    }

    Matrix transpose(const Matrix& A) {
        int m = A.size(), n = A[0].size();
        Matrix T = create(n, m);
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                T[j][i] = A[i][j];
        return T;
    }

    void print(const Matrix& M) {
        for (auto& row : M) {
            for (double v : row) std::cout << std::setw(8) << std::fixed << std::setprecision(2) << v;
            std::cout << "\n";
        }
    }

} // namespace matrix_17783053

int main() {
    Matrix A = {{{1.0, 2.0, 3.0}}, {{4.0, 5.0, 6.0}}};
    Matrix B = matrix_17783053::transpose(A);
    std::cout << "A:\n"; matrix_17783053::print(A);
    std::cout << "A^T:\n"; matrix_17783053::print(B);
    Matrix C = matrix_17783053::multiply(A, B);
    std::cout << "A * A^T:\n"; matrix_17783053::print(C);
    return 0;
}
