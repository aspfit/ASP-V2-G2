#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
	auto *s = new Stack<int>;
	s->Push(5);
	s->Push(6);
	cout << s->Pop();

	getchar();
	return 0;
}
