#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int cont = 0;

    cin >> n;

    vector<int> vetor(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 1; i < n; i++)
    {
        int aux = vetor[i];
        int j = i - 1;

        while(j >= 0 && vetor[j] > aux)
        {
            vetor[j + 1] = vetor[j];
            cont++;
            j--;
        }

        vetor[j + 1] = aux;
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
    cout << cont << "\n";
}
