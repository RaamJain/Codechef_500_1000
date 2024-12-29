#include <iostream>

using namespace std;

int main()
{
    int number_of_tests;
    cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        int bottle1;
        int bottle2;
        int bottle3;

        cin >> bottle1;
        cin >> bottle2;
        cin >> bottle3;

        int total_water;
        total_water = bottle1 + bottle2 + bottle3;

        if (total_water <= 1)
        {
            cout << "Water Filling Time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
}
