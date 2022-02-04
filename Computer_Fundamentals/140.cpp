// ConsoleApplication35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int w, s, c, k;
	cin >> w >> s >> c >> k;
	if (k == 0) {
		cout << "NO";
		return 0;
	}
	if (s == 0) {
		cout << "YES";
		return 0;
	}
	if (w == 0) {
		if (s <= k) {
			if (c <= k) {
				cout << "YES";
				return 0;
			}
			if (c > k) {
				if (c - k <= k) {
					cout << "YES";
					return 0;
				}
				else {
					cout << "NO";
					return 0;
				}
			}
		}
		if (s > k) {
			if (c > k) {
				cout << "NO";
			}
			if (c <= k) {
				if (s - k <= k) {
					cout << "YES";
					return 0;
				}
				else {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	if (c == 0) {
		if (s <= k) {
			if (w <= k) {
				cout << "YES";
				return 0;
			}
			if (w > k) {
				if (w - k <= k) {
					cout << "YES";
					return 0;
				}
				else {
					cout << "NO";
					return 0;
				}
			}
		}
		if (s > k) {
			if (w > k) {
				cout << "NO";
			}
			if (w <= k) {
				if (s - k <= k) {
					cout << "YES";
					return 0;
				}
				else {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	if (k < s) {
		if (k <= w) {
			cout << "NO";
			return 0;
		}
		if (k > w) {
			if (k <= c) {
				cout << "NO";
				return 0;
			}
			if (k > c) {
				if ((w + c <= k) && (s - k <= k)) {
					cout << "YES";
					return 0;
				}
				if (w + c < k) {
					cout << "YES";
					return 0;
				}
				else {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	if (k > s) {
		cout << "YES";
		return 0;
	}
	if (k == w) {
		if ((k == c) || (k > c)) {
			cout << "YES";
			return 0;
		}
		if (k < c) {
			cout << "NO";
			return 0;
		}
	}
	if (k > w) {
		if ((k == c) || (k > c)) {
			cout << "YES";
			return 0;
		}
		if (k < c) {
			if ((c + w - k) <= k) {
				cout << "YES";
				return 0;
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}
	if (k < w) {
		if ((k == c) || (k < c)) {
			cout << "NO";
			return 0;
		}
		if (k > c) {
			if (c + w - k <= k) {
				cout << "YES";
				return 0;
			}
			else {
				cout << "NO";
				return 0;
			}

		}
	}
}
