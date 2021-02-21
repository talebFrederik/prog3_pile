#ifndef NODE_H
#define NODE_H

class Node
{
private:
	int m_data; // �l�ment contenant les donn�es
	Node* m_next; // lien vers la prochaine donn�e de la s�rie
public:
	Node(int data);
	int getData();
	void setData(int data);
	Node* getNext();
	void setNext(Node* next);
};

#endif 