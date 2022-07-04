// Unknown 90

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    int w[10010];
    int long_tou[110];
    int top = 0, result = 0;
    bool flag = false;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < m; i++)
    {
        long_tou[i] = w[i];
    }
    top = m;

    for (int sec = 1; true; sec++)
    {
        for (int i = 0; i < m; i++)
        {
            // printf("sec: %d; i: %d; lt[i]: %d; top: %d; \n", sec, i, long_tou[i], top);
            // 遍历所有水龙头
            if (long_tou[i] <= 0)
            {
                // 加完了
                if (top <= n)
                {
                    // 换下一个人
                    long_tou[i] = w[top];
                    top++;
                }
                else
                {
                    // 得出结果
                    result = sec;
                    flag = true;
                }
            }
            long_tou[i]--;
        }
        if (flag)
            goto middle;
    }

middle:
    int maxx = 0;

    for (int i = 0; i < m; i++)
    {
        maxx = max(maxx, long_tou[i]);
    }
end:
    cout << maxx + result << endl;
    return 0;
}