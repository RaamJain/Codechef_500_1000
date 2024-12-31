#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int power_per_year;
        int number_of_years;

        cin >> power_per_year;
        cin >> number_of_years;

        int total = power_per_year * number_of_years;

        int helium_generated;
        int power_generated_per_unit;

        cin >> helium_generated;
        cin >> power_generated_per_unit;

        int total_power_generated;
        total_power_generated = helium_generated * power_generated_per_unit;

        if (total_power_generated >= total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
