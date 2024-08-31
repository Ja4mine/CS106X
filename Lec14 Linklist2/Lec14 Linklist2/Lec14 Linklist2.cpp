// Lec14 Linklist2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


// (1)[data:10, next: ] ---> (2)[data:20, next:nullptr] 


//a->next = p; means adjust (1) to point where p points
//p = a->next; means to make p point where a->next points,which is at (2)

struct Linklist {
	struct Node {
		int value;
		Node* next;

		Node(int value) {
			this->value = value;
			this->next = nullptr;
		}
	};

	Node* head;
	Node* tail;

	Linklist() {
		this->head = nullptr;
		this->tail = nullptr;
	}

	bool isEmpty() {
		return head == nullptr;
	}

	void insert(int value) {
		if (head == NULL) {
			head = new Node(value);
			tail = head;
		}
		else {
			
			tail->next = new Node(value);
			tail = tail->next;
		}
	}
	void  delet() {
		if (head == NULL) {
			cout << "Underflow!,empty Linklist!" << endl;
			return;
		}
		else if (head == tail) {
			delete(head);
			head = nullptr;
			tail = nullptr;
		}
		else {
			Node* cur = head;
			while (cur->next != tail)
				cur = cur->next;
			delete(tail);
			tail = cur;
			cur = nullptr;
			
		}
	}
	void display() {
		Node* cur = head;
		while (cur != nullptr) {

			cout << cur->value << endl;
			cur = cur->next;
		}
	}

	Node* Pure_reverse(Node* head) {//without using tail pointer
		if (head == nullptr || head->next == nullptr) return head;
		Node* cur = head->next;
		Node* temp = cur->next;
		cur->next = head;
		head->next = nullptr;
		temp->next = cur;
		return Pure_reverse(temp);
		
	}

};

int main() {
	Linklist* lst = new Linklist();
	lst->insert(5);
	lst->insert(3);
	lst->insert(7);
	lst->display();
	lst->delet();
	lst->display();
}