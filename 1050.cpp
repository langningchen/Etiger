#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, h[N], d[N];
int main()
{
    freopen("towerdefense.in", "r", stdin);
    freopen("towerdefense.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    int cnt = 0;
    for (int i = 0, j; i < n; i++)
    {
        for (j = 0; j < cnt; j++)
            if (d[j] > h[i])
                break;
        d[j] = h[i];
        if (j == cnt)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
