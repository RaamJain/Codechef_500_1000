#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int first_offer;
        int second_offer;

        cin >> first_offer;
        cin >> second_offer;

        int first_valuation;
        int second_valuation;

        first_valuation = (float(first_offer) / 0.1) * 10;
        second_valuation = (float(second_offer) / 0.2) * 10;

        if (first_valuation > second_valuation)
        {
            cout << "FIRST" << endl;
        }
        else if (first_valuation < second_valuation)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
}
