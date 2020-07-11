#ifdef list_h

#endif list_h // list_h

class list {
public:
	list() { head = new (node); head->next = NULL; }
	~list() { destroy(); delete head; }
	void push_back(int);
	void push_front(int);
	void pop_back();
	void pop_front();
	void print();
	void print_reverse();
	void destroy();
private:
	struct node {
		int data;
		node* next;
		node* prev;
	};
	node* head;
};
