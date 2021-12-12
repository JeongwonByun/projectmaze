
#include "Node.h"
class LinkedQueue {
	Node* front;
	Node* rear;
public:
	LinkedQueue() : front(NULL), rear(NULL) {}
	~LinkedQueue() { while (!isEmpty()) delete dequeue(); }
	bool isEmpty() { return front == NULL; } // front�� NULL���̸� ť�� ��������̴�

	void enqueue(Node* p) {
		if (isEmpty()) front = rear = p; //���� �����Ͻ� front�� rear�� ���� p
		else {
			rear->setLink(p); //rear�� p�� ����Ű���� ��
			rear = p;
		}
	}
	Node* dequeue() {
		if (isEmpty()) return NULL;
		Node* p = front;
		front = front->getLink();
		if (front == NULL) rear = NULL; //front�� NULL���̸� rear�� NULL������ ������־����
		return p;
	}
	Node* peek() { return front; }

};