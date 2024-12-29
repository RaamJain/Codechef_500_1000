#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int amount;
        cin >> amount;

        int final_amount;

        if (amount <= 100)
        {
            final_amount = amount;
        }
        else if ((amount > 100) && (amount <= 1000))
        {
            final_amount = amount - 25;
        }
        else if ((amount > 1000) && (amount <= 5000))
        {
            final_amount = amount - 100;
        }
        else
        {
            final_amount = amount - 500;
        }

        cout << final_amount << endl;
    }
}
