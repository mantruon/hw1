/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include "iostream"
using namespace std;

int main(int argc, char* argv[])
{
	Node* splitThis = nullptr;
	// Node* splitNext = new Node(0, nullptr);
	// Node* nextNext = new Node(1, nullptr);
	// Node* nextNextNext = new Node(2, nullptr);
	// splitNext->next = nextNext;
	// splitNext->next->next = nextNextNext;
	// splitThis = splitNext;

	// want to create a list from 0-10
	// for (int i=0; i < 10; i++) {
	// 	Node* nextItem = new Node(i, nullptr);
	// 	splitNext->next = nextItem;
	// 	splitNext = nextItem;
	// 	cout << "splitThis value: " << splitThis->value << " at index " << i << "." << endl;
	// 	cout << "splitThis current address: " << (void*)splitThis << endl;
	// 	cout << "splitThis next address: " << (void*)splitThis->next << endl;

	// }

	Node* intoOdds = nullptr;
	Node* intoEvens = nullptr;
	// cout << "Address for first " << (void*)splitThis << endl;
	// cout << "Value for first " << splitThis->value << endl;
	// cout << "Address for next " << (void*)splitThis->next << endl; 
	// cout << "Value for next " << splitThis->next->value << endl;
	split(splitThis, intoOdds, intoEvens);

	//deallocate memory
	while (splitThis != nullptr) {
		cout << "This is empty list: " << splitThis->value << endl;
		Node* deleteNext = splitThis->next;
		delete splitThis;
		splitThis = deleteNext;
	}
	while (intoOdds != nullptr) {
		cout << "This is odd: " << intoOdds->value << endl;
		Node* deleteOdds = intoOdds->next;
		delete intoOdds;
		intoOdds = deleteOdds;
	}
	while (intoEvens != nullptr) {
		cout << "This is even: " << intoEvens->value << endl;
		Node* deleteEvens = intoEvens->next;
		delete intoEvens;
		intoEvens = deleteEvens;
	}

}
