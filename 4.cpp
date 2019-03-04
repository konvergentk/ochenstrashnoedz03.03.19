/*Реализуйте класс int_list - односвязный список.  Класс должен содержать конструктор, конструктор копий,  деструктор, оператор присвоения, оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.*/
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next = NULL;
};
class int_list {
	Node* head;
public:
	int_list() {
		this->head = NULL;
	}
	void push(int x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	void showhead() {
		cout << head->data;
	}
	void show_index(int j) {
		Node* temp = head;
		int i = 0;
		while (i != j) {
			temp = temp->next;
			i++;
		}
		cout << temp->data << " ";
	}
	void show() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
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
		temp->next = temp->next;
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
		temp->next = temp->next->next;
		delete tmp;
	}
	int operator[](int j) {
		int i = 0;
		Node* temp = head;
		while (i != j) {
			temp = temp->next;
			i++;
		}
		return temp->data;
	}
	void operator=(int_list ar) {
		Node* temp = ar.head;

	}
	~int_list() {
		while (head != NULL) {
			Node* temp = head->next;
			delete head;
			head = temp;
		}
	}
};
int main() {
	return 0;
}
