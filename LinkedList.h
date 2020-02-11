#pragma once

template <class T>
class LinkedList
{
	struct Node
	{
		T data;
		Node* next;
		Node(const T element)
		{
			data = element;
			next = nullptr;
		}
		Node(const Node& copy)
		{
			this.data = copy.data;
			this.next = copy.next;
		}

		Node& operator=(const Node& other)
		{
			next = other.next;
			data = other.data;
		}

		~Node()
		{
			delete next;
			next = nullptr;
		}
	};

	Node* head;

public:

	LinkedList<T>()
	{
		head = nullptr;
	}

	void push(const T newElement)
	{
		Node* newNode = new Node(newElement);
		Node* temp = head;
		if (head == nullptr)
			head = newNode;
		else
		{
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}

	T pop()
	{
		T data;
		if (head->next == nullptr)
		{
			data = head->data;
			head = nullptr;
		}
		else
		{
			Node* prevNode = nullptr;
			Node* temp = head;
			while (temp->next != nullptr)
			{
				prevNode = temp;
				temp = temp->next;
			}
			data = temp->data;
			temp = prevNode;
			temp->next = nullptr;
		}
		return data;
	}

	void enque(T newElement)
	{
		Node* newNode = new Node(newElement);
		Node* temp = head;
		if (head == nullptr)
			head = newNode;
		else
		{
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}

	T deque()
	{
		Node* temp = head;
		head = head->next;
		T data = temp->data;
		return data;
	}

	int length()
	{
		if (head == nullptr)
			return 0;
		Node* temp = head;
		int count = 0;
		do
		{
			++count;
			temp = temp->next;
		} while (temp != nullptr);
		return  count;
	}

	bool contains()
	{
		if (head != nullptr)
			return true;
		return false;
	}

	bool is_empty()
	{
		return !contains();
	}
};