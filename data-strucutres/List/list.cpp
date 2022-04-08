/*
*	Filename:		list.cpp
*	Author:			Siddharth Kapoor
*	Date:			6/13/19
*/

#include <iostream>
using namespace std;
template <typename Object>
class List {
	public:
		// constructors, copy-contructor and destructor
		List() {
			head = NULL;
			size = 0;
		}

		List(const List& another_list) {
			cout << "copy constructor construction in progress!" << endl;
			head = NULL;
			size = 0;
		}

		~List() {
			if (!is_empty())
				make_empty();
		}

		// standard accessor functions
		int get_size() {
			return size;
		}

		bool is_empty() {
			return (head == NULL);
		}

		void print() {
			if (is_empty())
				cout << "empty list" << endl;
			else {
				cout << "head->";
				Node *itr = head;
				while (itr != NULL) {
					cout << itr->value << "->";
					itr = itr->next;
				}
				cout << "NULL" << endl;
			}
		}

		Object front(){
			cout << "function front()" << endl;
			return Object();
		}

		Object back(){
			cout << "function back()" << endl;
			return Object();
		}

		Object at(int index) {
			cout << "function at()" << endl;
			return Object();
		}

		// standard modifier functions
		void push(Object new_value) {
			cout << "function push()" << endl;
			Node *tmp = new Node(new_value, head);
			head = tmp;
			size++;
		}

		Object pop() {
			cout << "function pop()" << endl;
			return Object();
		}

		void append(Object new_value) {
			cout << "function append()" << endl;
		}

		Object remove_front() {
			cout << "function remove_front()" << endl;
			return Object();
		}

		Object remove_back() {
			cout << "function remove_front()" << endl;
			return Object();
		}

		Object remove_at(int index) {
			cout << "function remove_front()" << endl;
			return Object();
		}

		void make_empty() {
			cout << "function make_empty()" << endl;
			if (!is_empty()) {
				Node *rest = head->next;
				while (rest != NULL) {
					delete head;
					head = rest;
					rest = head->next;
				}
				delete head;
				head = NULL;
				size = 0;
			}
		}

		// iterator functions

		// operator overloading
		List operator=(List another_list){
			cout << "used = on list" << endl;
			return another_list;
		}

		Object operator[](int index){
			cout << "used = on list" << endl;
			return Object();
		}

	private:
		struct Node {
			Object value;
			Node *next;

			Node(const Object &val = Object(), Node *nxt = NULL) 
				: value(val), next(nxt) {}

			Node(const Object &&val = Object(), Node *nxt = NULL) 
				: value(move(val)), next(nxt) {}			
		};
		Node *head;
		int size;
};


int main() {
	
	List<int> int_list;
	int_list.push(0);
	int_list.push(27);
	int_list.print();
	int_list.make_empty();
	int_list.print();

	List<string> string_list;
	string_list.push("alpha");
	string_list.push("gamma");
	string_list.print();
	string_list.make_empty();
	string_list.print();
	
	return 0;
}