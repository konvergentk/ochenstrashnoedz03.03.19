/*Реализуйте класс int_stack_with_max - стек умеющий за O(1) выдавать максимальный хранимый элемент.
*/

#include <iostream>
#include<stack>
using namespace std;
class stack_with_max {
	stack <int> s;
	int MAX;
public:
	void getMAX()
	{
		if (s.empty())
			cout << "Stack is empty\n";
		else
			cout << "Maximum Element in the stack is: " << MAX << "\n";
	}
	void pop()	{
		if (s.empty()) {
			cout << "Stack is empty\n";
			return;
		}
		cout << "Top Most Element Removed: ";
		int t = s.top();
		s.pop();
		if (t > MAX) {
			cout << MAX << "\n";
			MAX = 2 * MAX - t;
		}

		else
			cout << t << "\n";
	}
	void push(int x)	{
		if (s.empty()) {
			MAX = x;
			s.push(x);
			cout << "Number Inserted: " << x << "\n";
			return;
		}
		if (x > MAX) {
			s.push(2 * x - MAX);
			MAX = x;
		}
		else
		s.push(x);
		cout << "Number Inserted: " << x << "\n";
	}
};
int main() {
	stack_with_max A;
	A.push(7);
	A.push(9);
	A.getMAX();
	A.push(13);
	A.push(41);
	A.getMAX();
	A.pop();
	A.getMAX();
	return 0;
}
