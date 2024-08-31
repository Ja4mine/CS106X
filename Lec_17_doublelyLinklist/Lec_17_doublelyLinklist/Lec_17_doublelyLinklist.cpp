// Lec_17_doublelyLinklist.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "doublelyLinklist.h"
#include <iostream>

int main()
{
    
}

Node::Node(int i) {
    this->value = i;
    this->next = nullptr;
}
int Node::getValue() const {
    return this->value;
}

Doublelylinklist::Doublelylinklist() {
    this->head = this->tail = nullptr;
}
void Doublelylinklist::insertFront(int i) {
    Node a(i);
    if (head == nullptr && tail == nullptr) {
        head = tail = &a;
    }
    else {
        head->previous = &a;
        head = &a;

    }
}




Doublelylinklist::deleteFirst() {
    if (head == nullptr && tail == nullptr) {
        std::cout << "underflow" << std::endl;
    }
    else {
        if head
    }

}