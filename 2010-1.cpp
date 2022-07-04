#include <bits/stdc++.h>
using namespace std;

int L, R;
int count_number_in_number(int source, int target);

int main()
{
    int cnt_all = 0;
    cin >> L >> R;
    for (int i = L; i <= R; i++)
    {
        cnt_all += count_number_in_number(i, 2);
    }
    cout << cnt_all << endl;
}

int count_number_in_number(int source, int target)
{
    int cnt = 0;
    int temp = source;
    while (temp > 0)
    {
        if (temp % 10 == target)
        {
            cnt++;
        }
        temp = temp / 10;
    }

    return cnt;
}