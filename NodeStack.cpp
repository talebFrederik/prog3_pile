#include "NodeStack.h"
#include "Node.h"
#include <iostream>

NodeStack::NodeStack() : m_size{ 0 }, m_top{ nullptr }{}

NodeStack::~NodeStack()
{
	Node* temp{ m_top };
	while (!(temp == nullptr))
	{
		m_top = m_top->getNext();
		temp->setNext(nullptr);
		delete temp;
		temp = m_top;
	}
}

int NodeStack::getSize()
{
	return m_size;
}

bool NodeStack::isEmpty()
{
	return m_top == nullptr;
}

void NodeStack::push(int data)
{
	Node* temp{ new Node{data} };
	temp->setNext(m_top);
	m_top = temp;

	m_size++;
}

void NodeStack::pop()
{
	if (isEmpty())
	{

		std::cout << "Pile vide\n";
		return;
	}

	Node* temp{ m_top };
	m_top = m_top->getNext();
	temp->setNext(nullptr);
	delete temp;
	
	m_size--;
}

int NodeStack::getTop()
{
	if (isEmpty())
	{
		std::cout << "Pile vide\n";
		return -1;
	}

	return m_top->getData();
}

void NodeStack::affichePile()
{
	if (isEmpty())
	{
		std::cout << "Pile vide\n";
		return;
	}

	Node* temp{ m_top };
	std::cout << "TOP -> ";
	while (!(temp == nullptr))
	{
		std::cout << temp->getData() << " ";
		temp = temp->getNext();
	}

	std::cout << "\n";
}