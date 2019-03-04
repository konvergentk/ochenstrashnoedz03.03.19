#include <iostream>
#include <utility>
using namespace std;
class Array {
public:
	pair <int, int>* data;
	int I = 0;
	int arraySize;
	Array(int N) {
		arraySize = N;
		data = new pair <int, int>[N];
	}
	Array(Array& A) {
		arraySize = A.arraySize;
		data = A.data;
	}
	~Array() {
		delete[] data;
	}
	pair <int, int> &operator[](int i) {
		while (i >= arraySize) {
			i -= arraySize;
		}
		return data[i];
	}
	void input() {
		int j, a, b;
		for (int i = I; i < arraySize + I; i++) {
			j = i;
			while (j >= arraySize)
				j -= arraySize;
			cin >> a >> b;
			data[j] = make_pair(a, b);
		}
	}
	void output() {
		int j;
		for (int i = I; i < arraySize + I; i++) {
			j = i;
			while (j >= arraySize)
				j -= arraySize;
			cout << data[j].first << " " << data[j].second << "\n";
		}
	}
	void shift(int k) {
		I += k;
	}
};
int main() {
	int size, X;
	cin >> size;
	Array A(size);
	A.input();
	A.output();
	cin >> X;
	A.shift(X);
	A.output();
	return 0;
}
