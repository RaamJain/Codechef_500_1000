#include <iostream>

using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int time;
        cin >> time;
        int completion_time;
        completion_time = time + 3;
        if (completion_time > 10)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}