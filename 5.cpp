/*Реализуйте класс int_linked_list - двусвязный список. Класс должен содержать конструктор, конструктор копий,  деструктор, оператор присвоения, оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.


*/
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next = NULL;
	Node* prev = NULL;
};
class int_linked_list {
	Node* head = NULL;
public:
	int_linked_list() {
		head = NULL;
	}
	void push(int x) {
		Node* temp = new Node;
		temp->data = x;
		if (head == NULL) {
			head = temp;
		}
		else {
			temp->next = head;
			head->prev = temp;
			head = temp;
		}
	}
	void show() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	int operator[](int j) {
		Node* temp = head;
		int i = 0;
		while (i != j) {
			temp = temp->next;
			i++;
		}
		return temp->data;
	}
	void operator=(int_linked_list ar) {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
		Node* temp = ar.head;
		while (temp != NULL) {
			this->push(temp->data);
			temp = temp->next;
		}
	}
	void push_index(int x, int j) {
		int i = 0;
		Node* temp = new Node;
		tmp->data = x;
		Node* temp = head;
		while (i != j) {
			temp = temp->next;
			i++;
		}
		tmp->next = temp->next;
		tmp->prev = temp;
		temp->next->prev = temp;
		temp->next = temp;
	}
	void del(int j) {
		int i = 0;
		Node* temp = head;
		while (i != j) {
			temp = temp->next;
			i++;
		}
		Node* temp = temp->next;
		temp->prev = temp;
		temp->next = temp->next->next;
		delete tmp;
	}
	~int_linked_list() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
