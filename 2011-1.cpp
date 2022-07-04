#include <bits/stdc++.h>
using namespace std;

int reverse_num(int num);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if (n < 0)
    {
        cout << "-" << reverse_num(-n) << endl;
    }
    else if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << reverse_num(n) << endl;
    }
}

int reverse_num(int num)
{
    int source = num;
    int result = 0;

    while (source > 0)
    {
        result = result * pow(10, 1) + (source % 10);
        source = source / 10;
    }

    return result;
}