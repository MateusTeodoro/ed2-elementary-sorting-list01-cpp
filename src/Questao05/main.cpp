#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> vetor(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    // Começa do penultimo elemento
    for (int i = n - 2; i >= 0; i--)
    {
        int aux = vetor[i];

        // Compara os valores a direita do i
        int j = i + 1;

        // Enquanto o valor a direita for maior, ate o fim do vetor
        while (j < n && vetor[j] > aux)
        {
            // Joga o valor maior para a esquerda
            vetor[j - 1] = vetor[j];
            j++;
        }

        vetor[j - 1] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        cout << vetor[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";
}
