#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number_of_cases;

    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {

        int number_of_groups;
        int number_of_people;
        int final_cost;
        int subscription_cost;

        cin >> number_of_people;
        cin >> subscription_cost;

        if (number_of_people <= 6)
        {
            cout << subscription_cost << endl;
        }
        else
        {

            number_of_groups = ceil(float(number_of_people) / float(6));
            final_cost = subscription_cost * number_of_groups;
            cout << final_cost << endl;
        }
    }
}
