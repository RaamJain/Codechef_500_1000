#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int time_with_bike;
        int time_with_car;

        cin >> time_with_bike;
        cin >> time_with_car;

        if (time_with_car < time_with_bike)
        {
            cout << "CAR" << endl;
        }
        else if (time_with_car > time_with_bike)
        {
            cout << "BIKE" << endl;
        }
        else
        {
            cout << "SAME" << endl;
        }
    }
}
