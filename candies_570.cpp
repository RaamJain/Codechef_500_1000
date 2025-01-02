#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {

        int number_of_children;
        int number_of_candies;

        cin >> number_of_children;
        cin >> number_of_candies;

        int candies_required;
        candies_required = number_of_children - number_of_candies;

        int packets_needed;
        if (candies_required <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            packets_needed = ceil(float(candies_required) / float(4));
            cout << packets_needed << endl;
        }
    }
}
