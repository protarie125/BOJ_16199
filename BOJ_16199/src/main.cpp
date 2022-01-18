#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int y1, m1, d1;
	cin >> y1 >> m1 >> d1;

	int y2, m2, d2;
	cin >> y2 >> m2 >> d2;

	// 만 나이
	auto man = y2 - y1;
	if (m2 < m1 ||
		(m2 == m1 && d2 < d1)) {
		man -= 1;
	}
	cout << man << '\n';

	// 세는 나이
	cout << y2 - y1 + 1 << '\n';

	// 연 나이
	cout << y2 - y1;

	return 0;
}