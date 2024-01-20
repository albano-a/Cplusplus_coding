#include <iostream>

class Bank{
    public:
        std::string name;
        std::string passwd;
        float saldo;

    void add(){
        float adic;
        std::cout << "Enter the value you want to deposit: ";
        std::cin >> adic;
        saldo = saldo + adic;
        std::cout << "Deposited R$" << adic << ", current balance is R$" << saldo << '\n';
    }

    void withdraw(){
        float sub;
        std::cout << "Enter the value you want to withdraw: ";
        std::cin >> sub;
        saldo = saldo - sub;
        std::cout << "Withdrew R$" << sub << ", current balance is R$" << saldo << '\n'; 
    }
    
    void showSaldo(){
        std::cout << "Your current balance is R$" << saldo << '\n';
    }
};

void depositMoney(Bank& bank);
void withdrawMoney(Bank& bank);
void showBalance(Bank& bank);

int main() {

    Bank bank1;

    bank1.name = "Arthur";
    bank1.passwd = "123";
    bank1.saldo = 0;

    std::cout << "User: " << bank1.name << '\n';
    std::cout << "Password: " << bank1.passwd << '\n';
    std::cout << "Saldo: " << bank1.saldo << '\n';

    std::string o;

    while (true)
    {
        std::cout << "*************************************\n";
        std::cout << "1 - Depositar dinheiro" << '\n';
        std::cout << "2 - Sacar dinheiro" << '\n';
        std::cout << "3 - Ver saldo\n"; 
        std::cout << "4 - Sair" << '\n';
        std::cout << "*************************************" << '\n';
        std::cout << "Qual a opcao? ";
        std::cin >> o;
        if (o == "1")
        {
            depositMoney(bank1);
        }
        else if (o == "2")
        {
            withdrawMoney(bank1);
        }
        else if (o == "3")
        {
            showBalance(bank1);
        }
        else if (o == "4")
        {
            break;
        }
        else
        {
            std::cout << "\nYou entered an invalid option! Try again.\n";
        }
    
    }
    return 0;
}

void depositMoney(Bank& bank){
    while (true)
    {
        std::string q1;
        std::cout << "Do you want to deposit money?(y/n): ";
        std::cin >> q1;
        if (q1 == "y")
        {
            bank.add();
        }
        else if (q1 == "n")
        {
            break;
        }
        else
        {
            std::cout << "\nYou entered a invalid option! Try again.\n";
        };
        
        
    };
    
}

void withdrawMoney(Bank& bank){
    while (true)
    {
        std::string q1;
        std::cout << "Do you want to withdraw money?(y/n): ";
        std::cin >> q1;
        if (q1 == "y")
        {
            bank.withdraw();
        }
        else if (q1 == "n")
        {
            break;
        }
        else
        {
            std::cout << "\nYou entered a invalid option! Try again.\n";
        };
        
        
    };
    
}

void showBalance(Bank& bank){
    bank.showSaldo();
    while (true)
    {
        std::string q1;
        std::cout << "Do you want to return?(y/n): ";
        std::cin >> q1;
        if (q1 == "n")
        {
            bank.showSaldo();
        }
        else if (q1 == "y")
        {
            break;
        }
        else
        {
            std::cout << "\nYou entered a invalid option! Try again.\n";
        };
        
        
    };
}