
#include <iostream>
#include "datastructures.h"

StackList::StackList() {
	this->elements = new int[capacity]();
	this->capacity = 100;
	this->size = 0;
}
bool StackList::isEmpty() const {
	return this->size == 0;
}
bool StackList::isFull() const{
	return (this->size == this->capacity);
}
int StackList::pop() {
	if (isEmpty()) {
		std::cout << "Stack underflow!" << std::endl;
//	
	}
	else {
		return this->elements[size--];
	}
}
void StackList::push(int ele) {
	if (isFull()) {
		std::cout << "Stack overflow! creating a new one!" << std::endl;
		int* temp = new int[2 * capacity];
		for (int i = 0; i < this->capacity; i++) {
			temp[i] = this->elements[i];
		}
		this->capacity = 2 * capacity;
		delete this->elements;
		this->elements = temp;
	}
	else {
		elements[++size] = ele;
	}
}

int StackList::peek() const {
	return this->elements[size];
}

Node::Node(int value) {
	this->value = value;
	this->next = nullptr;
}

Singlelinklist::Singlelinklist() {
	head = nullptr;
}
Singlelinklist::~Singlelinklist() {
	Node* temp;
	while (head != nullptr) {
		temp = head->next;
		delete head;
		head = temp;
	}
}
void Singlelinklist::insert(int ele) {
	Node* newnode = new Node(ele);
	if (head == nullptr) {
		head = newnode;
	}
	else {
		Node* cur = head;
		while (cur->next != nullptr) {
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
void Singlelinklist::insertFront(int value) {
	if (head == nullptr) {
		insert(value);
	}
	else {
		Node* temp = new Node(value);
		temp->next = head;
		head = temp;
	}
}
void Singlelinklist::Delete(int value) {
	if (isEmpty() == true) {
		std::cout << "Linklist is empty!" << std::endl;
	}
	else {
		Node* temp = head;
		while (temp->next != nullptr && (temp->next)->value != value) {
			temp = temp->next;
		}
		if (temp->next == nullptr) {
			std::cout << "no such node that value is:" << value << std::endl;
		}
		else {
			  
		}
		
	}
}


int main()
{
 
}
