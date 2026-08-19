#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string palavra;

    std::cout << "Digite a palavra a ser organizada: ";

    std::cin >> palavra;

    int n = palavra.length();

    for (int i = 0; i < n - 1; i++)
    {
        bool trocou = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (palavra[j] > palavra[j + 1])
            {
                char temp = palavra[j + 1];
                palavra[j + 1] = palavra[j];
                palavra[j] = temp;
                trocou = true;
            }
        }

        if (!trocou)
        {
            break;
        }
    }

    std::cout << "Resultado: ";

    std::cout << palavra;
}
