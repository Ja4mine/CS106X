#ifndef _doublelylinklist_h
#define _doublelylinklist_h

class Node {
public: 
	Node(int i);
	int getValue() const;
	int value;
	Node* next;
	Node* previous;

};

class Doublelylinklist {
public: 
	Doublelylinklist();
	void insertFront();
	void insertTail();
	void deleteFirst();
	void deleteTail();

private:
	Node* head;
	Node* tail;
};


#endif