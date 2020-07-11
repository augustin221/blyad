#include <iostream>
#include "Header1.h"
#include <list>
using namespace std;

void list::push_back(int el) {
	node* p, *p1;
	p = head;
	while (p->next != NULL)
	{
		p = p->next;
	}

	p1 = new (node);
	p1->data = el;
	p1->next = NULL;

	p1->prev = p;
	p->next = p1;
};

void list::push_front(int el) {
	node* p;
	if (head->next == NULL) {
		p->next = head->next;
		p - prev = head;
	}
	else p->next = head->next;
	head->next->prev = p;
	head->next = p;
	p->prev = head;
}

void list::print_reverse() {
	node* p;
	p = head;
	while (p != head) {
		cout << (p->data) << "";
		p = p->prev;
	}
	void list::destroy() {
		node* p* p1;
		p = head;
		p1 = p->next;
		while (p1 != NULL)
		{
			p = p1;
			p1 = p1->next;
			delete p;
		}
	}
	void list::pop_back() {
		node* p* p1;
		p = head;
		p1 = p->next;
		while (p1->next != NULL)
		{
			p = p1;
			p1 = p1->next;
		}
		p->next = NULL;
		delete p1;
	}

	void list::pop_front()
	{
		node* p;
		p = head->next;
		head->next = p->next;
		p->next->prev = head;
		delete p;
	}
	}
}