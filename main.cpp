#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	while (cin.good()) {
		getline(cin, s);
		cout << s << '\n';
	}

	return 0;
}