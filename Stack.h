#pragma once

#include "LinkedList.h"

template <class T>
struct Stack {
	LinkedList<T> _lista;
	int _counter;

	Stack() { this->_counter = 0; }

	void Push(T toPush);
	T Pop();
};

template <class T>
void Stack<T>::Push(T toPush) {
	this->_lista.addFirst(toPush);
	this->_counter++;
}

template <class T>
T Stack<T>::Pop() {
	if (this->_counter > 0) {
		return this->_lista.removeFirst();
	}
	return -1;
}


