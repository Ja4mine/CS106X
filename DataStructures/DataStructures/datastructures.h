#ifndef _datastructure_h
#define _datastructure_h
class StackList {
public:
	StackList();
	bool isEmpty() const;
	bool isFull() const;
	int pop();
	void push(int i);
	int peek() const;

private: 
	
	int capacity;
	int* elements;
	int size ;

};

class Node {
public:
	int value;
	Node* next;
	Node(int i);
};

class Singlelinklist {
public: 
	Node* head;
	
	Singlelinklist();
	~Singlelinklist();
	void insert(int value);
	void insertFront(int value);
	void Delete(int ele);
	void traversal() const;
	bool isEmpty() const;
};

class DNode {
public:
	int value;
	int* next;
	int* previous;
	DNode(int value);
};

class Dlist {
public:
	DNode* head;
	DNode* tail;

	Dlist();
	void insertFront(int i);
	void insertTail(int i);
	void insertBefore(int i);
	void insertAfter(int i);
	void deleteTail();
	void deleteFront();
	void deleteNode(int value);
	void traversal();
	bool isEmpty();
};

#endif
