#include <iostream>

using namespace std;

int main()
{
    int number_of_soldiers;
    cin >> number_of_soldiers;

    int ready_soldiers = 0;

    for (int i = 0; i < number_of_soldiers; i++)
    {
        int weapons;
        cin >> weapons;

        if (weapons % 2 == 0)
        {
            ready_soldiers++;
        }
    }
    string status;
    status = ready_soldiers > (number_of_soldiers / 2) ? "READY FOR BATTLE" : "NOT READY";
    cout << status << endl;
}
