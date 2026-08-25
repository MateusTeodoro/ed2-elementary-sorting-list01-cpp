#include <iostream>
#include <string>
#include <vector>
#include <cmath>

//#include <bits/stdc++.h>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0);
#define ulli unsigned long long int
#define uli unsigned long int
#define lli long long int

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector< ii > vii;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s)) //LASTBIT
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second
#define PI 2*acos(0)

// 1. PURE LOGIC
string bubbleSortString(string palavra)
{
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

    return palavra;
}

// 2. ONLINE JUDGE ADAPTER
void onlineJudge()
{
    string palavra;

    cin >> palavra;

    string trocada = bubbleSortString(palavra);

    cout << trocada << "\n";
}

// 3. LOCAL TESTS
void runLocalTests()
{
    cout << "=== Test Q1 (Character Sorting with Bubble Sort) ===\n\n";

    // --- Case 1 ---
    string test1 = "estrutura";
    string expected1 = "aerrsttuu";
    string obtained1 = bubbleSortString(test1);

    cout << "Input:           " << test1 << "\n";
    cout << "Expected Output: " << expected1 << "\n";
    cout << "Actual Output:   " << obtained1 << "\n";
    cout << (obtained1 == expected1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    string test2 = "patrocinio";
    string expected2 = "aciinooprt";
    string obtained2 = bubbleSortString(test2);

    cout << "Input:           " << test2 << "\n";
    cout << "Expected Output: " << expected2 << "\n";
    cout << "Actual Output:   " << obtained2 << "\n";
    cout << (obtained2 == expected2 ? "[PASSED]" : "[FAILED]") << "\n";
}

int main()
{
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}