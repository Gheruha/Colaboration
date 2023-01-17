#include <iostream>
using namespace std;

int main()
{
    string initial_location;
    int x;
    cin >> initial_location >> x;
    if (initial_location == "School")
    {
        if (x % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if (x % 2 == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
