#include <iostream>


unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}


unsigned long long combinacao(int n, int k) {
    if (k > n) {
        return 0; 
    }
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    int n = 9;
    int k = 3;
    unsigned long long resultado = combinacao(n, k);

    std::cout << "C(" << n << ", " << k << ") = " << resultado << std::endl;

    return 0;
}
