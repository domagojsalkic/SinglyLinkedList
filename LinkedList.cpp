#include  <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList<int> linked_list;

	linked_list.push(1);
	linked_list.push(2);
	linked_list.push(3);
	linked_list.push(4);
	linked_list.push(5);
	linked_list.push(6);

	for (int i = 0; i < 3; ++i)
	{
		std::cout << linked_list.pop() << std::endl;
	}

	std::cout << "Does list contain some data? --->\t" << (linked_list.contains() ? "Yes\n" : "No\n");


	linked_list.enque((7));
	linked_list.enque((8));
	linked_list.enque((9));

	for (int i = 0; i < 3; ++i)
	{
		std::cout << linked_list.deque() << std::endl;
	}

	std::cout << "Is the list empty? --->\t" << (linked_list.is_empty() ? "Yes\n" : "No\n");
	std::cout << "How much elements are in list? --->\t" << linked_list.length() << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		std::cout << linked_list.deque() << std::endl;
	}

	std::cout << "Is the list empty? --->\t" << (linked_list.is_empty() ? "Yes\n" : "No\n");
	std::cout << "How much elements are in list? --->\t" << linked_list.length() << std::endl;


	return 0;
}