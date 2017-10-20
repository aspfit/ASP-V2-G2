#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	Stack<int> s;
	s.Push(5);
	s.Push(6);
	cout << s.Pop();

	getchar();
	return 0;
}
