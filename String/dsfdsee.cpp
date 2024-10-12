#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;

int n, m;
int s[N];

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n);
  for (int i = 0; i < m; i++) {
    int q;
    cin >> q;
    int ans = 0;
    for (int j = n - 1; j >= 0; j--) {
      if (s[j] > q) ans += s[j];
      else break;
    }
    cout << ans << endl;
  }
  return 0;
}
