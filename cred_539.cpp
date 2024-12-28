#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int cred_coins_per_bill;
        int bills_paid;

        cin >> cred_coins_per_bill;
        cin >> bills_paid;

        int total_coins;
        int bags;

        total_coins = cred_coins_per_bill * bills_paid;
        bags = total_coins / 100;
        cout << bags << endl;
    }
}
