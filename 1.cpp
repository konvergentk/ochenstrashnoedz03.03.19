/*Реализуйте класс double_stack -  стек вещественных чисел переменного размера. Класс должен содержать конструктор, деструктор, методы push,pop*/

#include <iostream>
using namespace std;
struct Node {
	double data;
	Node* next = NULL;
	Node* prev = NULL;
};
class double_stack {
	Node* head;
public:
	double_stack() :head(NULL) {}
	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	double pop() {
		if (head == NULL) {
			cout << "Stack is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	}
	~double_stack() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};
int main() {
	double_stack A;
	A.push(8.234);
	A.push(6.535);
	A.push(0.64);
	A.push(0.19);
	A.push(79.3);
	A.push(87.5);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	A.push(3.14);
	A.push(2.718182);
	A.push(2.67);
	A.push(9.11);
	cout << A.pop() << "\n";
	cout << A.pop() << "\n";
	return 0;
}
