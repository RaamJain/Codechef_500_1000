#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {

        int number_of_problems;
        cin >> number_of_problems;

        int problems_ratings[number_of_problems];
        int problems_1000_plus = 0;
        for (int j = 0; j < number_of_problems; j++)
        {
            cin >> problems_ratings[j];
            if (problems_ratings[j] >= 1000)
            {
                problems_1000_plus++;
            }
        }
        cout << problems_1000_plus << endl;
    }
}
