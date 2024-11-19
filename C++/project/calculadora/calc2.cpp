#include <iostream>
#include <string>

float som(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}

int main() {
    bool exec;
    float n1;
    float n2;
    float R;
    char opr;
    char cont;

    exec = true;

    while (exec) {
        std::cout << "Operação (Ex: +, -, *, /): ";
        std::cin >> opr;

        switch (opr)
        {
        case '+':
            std::cout << "Primeiro número: ";
            std::cin >> n1;
            std::cout << "Segundo número: ";
            std::cin >> n2;

            R = som(n1, n2);

            std::cout << "O resultado é: " << R << std::endl;

            std::cout << "Deseja continuar? (Y/N): ";
            std::cin >> cont;
            if (cont == 'y') {
                std::cout << "----------------------------------------" << std::endl;
            }  else {
                exec = false;
            }
            break;
        case '-':
            std::cout << "Primeiro número: ";
            std::cin >> n1;
            std::cout << "Segundo número: ";
            std::cin >> n2;

            R = sub(n1, n2);

            std::cout << "O resultado é: " << R << std::endl;

            std::cout << "Deseja continuar? (Y/N): ";
            std::cin >> cont;
            if (cont == 'y') {
                std::cout << "----------------------------------------" << std::endl;
            }  else {
                exec = false;
            }
            break;
        case '*':
            std::cout << "Primeiro número: ";
            std::cin >> n1;
            std::cout << "Segundo número: ";
            std::cin >> n2;

            R = mult(n1, n2);

            std::cout << "O resultado é: " << R << std::endl;

            std::cout << "Deseja continuar? (Y/N): ";
            std::cin >> cont;
            if (cont == 'y') {
                std::cout << "----------------------------------------" << std::endl;
            }  else {
                exec = false;
            }
            break;
        case '/':
            std::cout << "Primeiro número: ";
            std::cin >> n1;
            std::cout << "Segundo número: ";
            std::cin >> n2;

            R = div(n1, n2);

            std::cout << "O resultado é: " << R << std::endl;

            std::cout << "Deseja continuar? (Y/N): ";
            std::cin >> cont;
            if (cont == 'y') {
                std::cout << "----------------------------------------" << std::endl;
            }  else {
                exec = false;
            }
            break;
        
        default:
        std::cout << "Operação invalida!" << std::endl;
            break;
        }
    }

    return 0;
}
