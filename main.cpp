#include <iostream>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        std::cout << n << "! = 1" << std::endl;
        return 1;
    }
    unsigned long long resultado = 1;
    std::cout << n << "! = ";
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
        if (i < n) {
            std::cout << i << " * ";
        } else {
            std::cout << i;
        }
    }
    std::cout << " = " << resultado << std::endl;
    return resultado;
}

// Função para calcular combinação C(n, k)
unsigned long long combinacao(int n, int k) {
    if (k > n) {
        return 0; // Se k for maior que n, não é possível calcular a combinação
    }
    std::cout << "Calculando C(" << n << ", " << k << "):" << std::endl;
    unsigned long long numerador = fatorial(n);
    unsigned long long denominador_k = fatorial(k);
    unsigned long long denominador_n_k = fatorial(n - k);

    std::cout << "C(" << n << ", " << k << ") = " << numerador << " / (" << denominador_k << " * " << denominador_n_k << ")" << std::endl;

    return numerador / (denominador_k * denominador_n_k);
}

int main() {
    int n, k;

    // Solicitar input do usuário para n e k
    std::cout << "Digite o valor de n: ";
    std::cin >> n;

    std::cout << "Digite o valor de k: ";
    std::cin >> k;

    // Calcular a combinação C(n, k)
    unsigned long long resultado = combinacao(n, k);

    // Exibir o resultado final
    std::cout << "C(" << n << ", " << k << ") = " << resultado << std::endl;

    return 0;
}
