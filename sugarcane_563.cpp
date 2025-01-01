#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int number_of_glasses;
        cin >> number_of_glasses;

        int profit;
        int income;

        income = number_of_glasses * 50;

        profit = income - (0.7 * income);
        cout << profit << endl;
    }
}
