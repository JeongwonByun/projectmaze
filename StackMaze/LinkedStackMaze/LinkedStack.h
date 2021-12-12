//c++ �������� LinkedStack class
#include "Node.h"
class LinkedStack 
{
	Node* top;
public:
	LinkedStack() { top = NULL; }
	~LinkedStack() { while (!isEmpty()) delete pop(); }
	bool isEmpty() { return top == NULL; }
	void push(Node* p)
	{
		if (isEmpty()) top = p; //���� �����Ͻ� p�� top
		else //���� ���°� �ƴ϶�� top�� p�� �����ϰ� ������ top�� p�������� ����
		{
			p->setLink(top);
			top = p;
		}
	}
	Node* pop()
	{
		if (isEmpty())return NULL; //���� �����Ͻ� NULL�� ��ȯ
		Node* p = top; //top�� p�� ����
		top = top->getLink(); //top�� ���� ���� �����Ŀ� p�� ��ȯ
		return p;
	}
	Node* peek() { return top; } //top�� ��ȯ
	void display()
	{
		printf("[LinkedStack]\n");
		for (Node* p = top; p != NULL; p = p->getLink())
			p->display();
		printf("\n");
	}

};
