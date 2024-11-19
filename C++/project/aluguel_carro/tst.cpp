#include <iostream>
#include <string>

void menu() {
    std::cout << "______________________________" << std::endl;
    std::cout << "\n 1. criar objeto.\n 2. exibir objeto.\n 3. Exit." << std::endl;
    std::cout << "______________________________" << std::endl;
}

class pessoa{
    private:
    std::string n;
    int i;
    
    public:
    void setdados() {
       std::cout << "Defina um nome:";
       std::cin >> n;
        std::cout << "Defina uma idade:";
        std::cin >> i;
    }

    void exibirdados() {
        std::cout << "nome:" << n << std::endl;
        std::cout << "idade:" << i << std::endl;
    }
};

int main(){
    bool rodando = true;
    int escolha;
    pessoa p1;

    do
    {
        menu();
        std::cout << "escolha:";
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
        p1.setdados();
            break;
        case 2:
        p1.exibirdados();
            break;

        case 3:
        std::cout << "fechando programa" << std::endl;
        rodando = false;
        break;

        default:
        std::cout << "Opção invalida!, Tente novamente." << std::endl;
            break;
        }
    } while (rodando);
    
    return 0;
}
