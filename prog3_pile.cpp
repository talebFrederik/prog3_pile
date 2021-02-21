// programme pour tester l'implémentation de la pile
#include "NodeStack.h"
#include <iostream>

int main()
{
    NodeStack pile;
    std::cout << "\nEtat initial \n";
    pile.affichePile();

    std::cout << "\nAjouter des elements\n";
    pile.push(10);
    pile.push(4);
    pile.push(22);

    pile.affichePile();
    
    std::cout << "\nL'element du dessus de la pile : " << pile.getTop() << "\n";
    
    std::cout << "\nEnlever un element \n";
    pile.pop();
    pile.affichePile();

    std::cout << "\nVider la pile \n";
    while (!pile.isEmpty())
    {
        pile.pop();
    }

    pile.affichePile();

    std::cout << "\nEssayer d'enlever un élément de la pile vide";
    pile.pop();
}
