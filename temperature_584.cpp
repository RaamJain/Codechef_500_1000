#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {

        int temperature_Alice;
        int temperature_Bob;
        int temperature_Charlie;

        cin >> temperature_Alice;
        cin >> temperature_Bob;
        cin >> temperature_Charlie;

        if ((temperature_Bob >= temperature_Alice) && (temperature_Bob >= temperature_Charlie))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
