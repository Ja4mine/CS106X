#ifndef DOUBLELYLINKLIST
#define DOUBLELYLINKLIST

class DoublelyLinklist {
	class Node {
	public:
		Node(int value);
		int getValue();
		bool isEmpty();
		~Node();
	private:
		int value;
		int* next;
		int* previous;
	};
public: 
	DoublelyLinklist();


private:
	Node* head;
	Node* tail;

};
