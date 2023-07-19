#include <iostream>
using namespace std;
template <class T>

class StackNode {
public:
	T data;
	StackNode<T>* next;
	
};
template <class T>
class Stack {
private:
	StackNode<T>* head;
public:
	Stack() {
		head = nullptr;

	}
	void push(T data) {
		if (head == nullptr) {
			head = new StackNode(data);
		}
		StackNode* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = new StackNode(data);
	}

	void pop() {

		StackNode* temp = head;
		while (temp != NULL)
		{
			temp = temp->next;
		}

	}

	void print() {
		StackNode<T>* temp = head;
		while (temp != nullptr) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};



int main()
{
	Stack<int> num;
	num.push(1);
	num.push(2);
	num.push(3);
	num.print();

}

