#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[10];
		for (int i = 0; i < 10; i++) {
			cin >> a[i];
		}
		int team1 = 0;
		int team2 = 0;
		for (int i = 0; i < 10; i++) {
			if ((i + 1) % 2 == 1 && a[i] == 1) {
				// count the number of 1's in the odd position (1-based)
				team1++;
			} else if (a[i] == 1) {
				// count the number of 1's in the even position (1-based)
				team2++;
			}
		}
		if (team1 == team2) {
			cout << 0;
		} else if (team1 > team2) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
