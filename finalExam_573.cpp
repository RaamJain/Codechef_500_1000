#include <iostream>
using namespace std;

int main()
{

    int topics1, topics2, topics3;
    int final_topic;

    cin >> topics1;
    cin >> topics2;
    cin >> topics3;
    cin >> final_topic;

    if ((final_topic == topics1) || (final_topic == topics2) || (final_topic == topics3))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
