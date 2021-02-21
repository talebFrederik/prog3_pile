#ifndef NODESTACK_H
#define NODESTACK_H

#include "Node.h"

class NodeStack
{
private:
	int m_size; // compteur pour le nombre d'�l�ments de la pile
	Node* m_top; // pointeur vers l'�l�ment du dessus de la pile
public:
	NodeStack();
	~NodeStack();
	int getSize(); // retroune le nombre d'�l�ments dans la pile
	bool isEmpty(); // vrai si la pile est vide
	void push(int data); // ajoute une donn�e � la pile
	void pop(); // enl�ve le premier �l�ment sur le dessus de la pile
	int getTop(); // retourne la donn�e sur le dessus de la pile, sans modifier la pile
	void affichePile(); // fonction utilitaire pour afficher l'�tat de la pile
};

#endif