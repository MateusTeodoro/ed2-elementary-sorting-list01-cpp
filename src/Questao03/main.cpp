#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> vetor(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    for(int i = 0; i < k; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }

        int aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
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
