#include <iostream>
#include <string>

float soma(float n1, float n2) {
    return n1 + n2;
}

float sub(float n1, float n2) {
    return n1 - n2;
}

float mult(float n1, float n2) {
    return n1 * n2;
}

float div(float n1, float n2) {
    return n1 / n2;
}

int main() {
    std::string operaçao;
    float n1;
    float n2;
    float R;

    std::cout << "Operação (Ex: +, -, *, /) : ";
    std::cin >> operaçao;

    std::cout << "Primeiro número: ";
    std::cin >> n1;
    std::cout << "Segundo número: ";
    std::cin >> n2;

    if (operaçao == "+") {
        R = soma(n1, n2);
        std::cout << "O resultado é: " << R << std::endl;
    } else if (operaçao == "-") {
        R = sub(n1, n2);
        std::cout << "O resultado é: " << R << std::endl;
    } else if (operaçao == "*") {
        R = mult(n1, n2);
        std::cout << "O resultado é: " << R << std::endl;
    } else if (operaçao == "/") {
        if (n2 == 0){
            std::cout << "Impossivel dividir por 0!" << std::endl;
        } else {
        R = div(n1, n2);
        std::cout << "O resultado é: " << R << std::endl;
        }
    }
    else {
        std::cout << "Operação invalida!" << std::endl;
    }
}
