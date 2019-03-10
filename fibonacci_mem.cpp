#include "pch.h"
#include <iostream>

using namespace std;

class Fibonacci {
public:
	int memoList[31];
	Fibonacci() {
		for (int i = 0; i < 31; i++)
		{
			memoList[i] = -1;
		}
	}

	int fib(int N) {
		if (N == 0)
			return 0;
		else if (N == 1)
			return 1;
		if (memoList[N] == -1)
		{
			memoList[N] = fib(N - 1) + fib(N - 2);
			return memoList[N];
		}
		else {
			return memoList[N];
		}

	}
};

int main(int argc, char* argv)
{
	Fibonacci problem1;
	int number;
	cout << "Enter a value from 1 ~ 30 to get a fibonacci number: ";
	do {
		cin >> number;
		if (!(number > 0 && number < 31))
			cout << "Your input is out of range." << endl << "Enter a value from 1 ~ 30 to get a fibonacci number: ";
		else
			break;
	} while (1);

	cout << problem1.fib(number) << endl;

	return 0;
}
