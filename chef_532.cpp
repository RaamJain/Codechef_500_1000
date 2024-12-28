#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int hrs_on_4;
        int hrs_on_fri;

        cin >> hrs_on_4;
        cin >> hrs_on_fri;

        int total;
        total = hrs_on_4 * 4 + hrs_on_fri;

        cout << total << endl;
    }
}
