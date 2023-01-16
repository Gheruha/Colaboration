#include <iostream>
using namespace std;
int main()
{

    int N;

    cout << "Introdu N : ";
    cin >> N;

    int num_of_5 = N / 5; // Calculez numarul de monede (5)
    int rest = N % 5;
    int num_of_3 = 0;

    if (rest != 0 && rest != 3) // Calculez numarul de monede (3)
    {
        num_of_5 -= 1;
        num_of_3 = (N - num_of_5 * 5) / 3;
    }
    else
    {
        num_of_3 = rest / 3;
    }
    if (rest == 3)
    {
        num_of_3 = 1;
    }
    if (rest == 0)
    {
        num_of_3 = 0;
    }

    cout << "Nr monede achitate de pisoi : " << num_of_5 << endl;
    cout << "Nr monede achitate de vulpe : " << num_of_3 << endl;

    return 0;

    // Bugs :
    // Daca pun 8 imi da rezultatul gresit , posibil si la alte numere - R
}