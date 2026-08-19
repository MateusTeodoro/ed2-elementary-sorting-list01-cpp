#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tamanho;

    cin >> tamanho;

    vector<int> vetor(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    int n = vetor.size();

    for (int i = 0; i < n - 1; i++)
    {
        int maior = i;

        for (int j = i + 1; j < n; j++)
        {
            if (vetor[j] > vetor[maior])
            {
                maior = j;
            }
        }

        int aux = vetor[maior];
        vetor[maior] = vetor[i];
        vetor[i] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        cout << vetor[i];

        if(i < n - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";
}
