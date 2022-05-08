#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		
		/*
		even 0s:
		100010001 - initial string
		110010001 - A (1 dollar)
		110010011 - B (1 dollar)
		111010011 - A (1 dollar)
		111010111 - B (1 dollar)
		111110111 - A (1 dollar)
		111011111 - B (free)
		111111111 - A (1 dollar)
		
		result: bob wins
		
		odd 0s:
		100000001 - initial string
		100010001 - A (1 dollar)
		110010001 - B (1 dollar)
		110010011 - A (1 dollar)
		111010011 - B (1 dollar)
		111010111 - A (1 dollar)
		111110111 - B (1 dollar)
		111011111 - A (free)
		111111111 - B (1 dollar)
		
		result: alice wins
		
		edge-case: (only 1 zero)
		1110111 - initial string
		1111111 - A (1 dollar)
		
		result: bob wins	
		*/
		
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt += (s[i] == '0');
		}
		if (cnt == 1) {
			cout << "BOB" << '\n';
			continue;
		}
		if (cnt & 1) {
			cout << "ALICE" << '\n';
			continue;
		}
		cout << "BOB" << '\n';
	}
	return 0;
}
