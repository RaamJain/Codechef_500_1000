#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number_of_inputs;
    cin >> number_of_inputs;

    for (int i = 0; i < number_of_inputs; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            int num;
            cin >> num;
            if (j < 2)
            {
                sum += num;
            }
            else
            {
                float average = float(sum) / float(2);
                if (average <= num)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
}