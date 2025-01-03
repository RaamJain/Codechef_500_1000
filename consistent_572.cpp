#include <iostream>
using namespace std;

int main()
{
    int number_of_cases;
    cin >> number_of_cases;

    for (int i = 0; i < number_of_cases; i++)
    {
        int teamA;
        int teamB;
        int teamA_future;
        int teamB_future;

        cin >> teamA;
        cin >> teamB;
        cin >> teamA_future;
        cin >> teamB_future;
        if ((teamA_future >= teamA) && (teamB_future >= teamB))
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}
