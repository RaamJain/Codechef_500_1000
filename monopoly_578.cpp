#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int profits[4];

        cin >> profits[0];
        cin >> profits[1];
        cin >> profits[2];
        cin >> profits[3];

        sort(profits, profits + 4);

        int sum_of_profits;
        sum_of_profits = accumulate(profits, profits + 3, 0);

        if (sum_of_profits < profits[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
