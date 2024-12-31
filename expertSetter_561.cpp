#include <iostream>
using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int problems_submitted;
        int problems_approved;

        cin >> problems_submitted;
        cin >> problems_approved;

        float fifty_per;
        fifty_per = float(problems_submitted) / float(2);
        if (problems_approved >= fifty_per)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
