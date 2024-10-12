#include <bits/stdc++.h>


using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<int> v(n);


    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;

        long long ans = 0;
        for (int j = 0; j < n; j++) {

            if (v[j] > q) {

                    int x = q;
                int y = n-j;
                ans+=x*y;
                break;

            }
        else {
                ans += v[j];
            }
        }
        cout << ans << endl;
    }

    return 0;
}

