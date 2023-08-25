#include <chrono>
#include <iomanip>
#include <iostream>

int const MAX = 10000;
double A[MAX][MAX], x[MAX], y[MAX];
int i, j;

int main() {
    for (i = 0; i < MAX; i++) {
        x[i] = 1;
        y[i] = 0;
        for (j = 0; j < MAX; j++) {
            A[i][j] = i + j * 344;
        }
    }


    auto start = std::chrono::high_resolution_clock::now();

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Primer loop demoro: " << duration1.count() << std::endl;

    start = std::chrono::high_resolution_clock::now();

    for (j = 0; j < MAX; j++) {
        for (i = 0; i < MAX; i++) {
            y[i] += A[i][j] * x[j];
        }
    }

    stop = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Segundo loop demoro: " << duration2.count();
}