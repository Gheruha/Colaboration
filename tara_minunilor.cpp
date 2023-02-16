#include <iostream>

using namespace std;

int main()
{
    // Citim suma de Euro
    int N;
    cout << "Suma: ";
    cin >> N;

    // Determinam cu cate monede au contribuit Alice si Basilio
    int num_5 = 0, num_3 = 0, rest = N;
    while (num_5 == 0)
    {
        if (rest % 5 != 0)
        {
            rest -= 3;
            num_3++;
        }
        else
        {
            int rest1 = N - num_3 * 3;
            num_5 = rest1 / 5;
        }
    }
    // Afisam rezultatul
    cout << num_5 << " " << num_3 << endl;

    return 0;
}