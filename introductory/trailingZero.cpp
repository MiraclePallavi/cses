#include <iostream>
using namespace std;

int findZeros(int num)
{
    if (num < 0)
        return -1;

    int zeroCount = 0;

    for (int i = 5; num / i >= 1; i *= 5)
        zeroCount += num / i;

    return zeroCount;
}

int main()
{
    int num;
    cin >> num;

    int result = findZeros(num);
    if (result == -1)
        cout << -1 << endl;
    else
        cout <<result << endl;

    return 0;
}