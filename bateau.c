#include "bateau.h"

Bateau creerBateau(Position p, char sens, int l)
{
    /*Creer un bateau de position de tete p, avec les nouvelles position qui suivent le sens de s.*/
    Bateau *Bat=malloc(sizeof(int)+ sizeof(Position)+2*sizeof(*TListe)); //Car la liste contiendra des positions et elle est constitu�e de 2 pointeurs suivant et pr�c�dent du type liste doublement chain�e
    Bat->longueur=l;
    Position *p1=creerPosition(getXPos(p),getYPos(p));
    AjoutDebut(Bat->positions, p1);
    int i;
    for (i=1;i<l;i++){
        if (sens=='v'){
            setYPos(p1,getYPos(p1)+1);
        }
        else if (sens=='h'){
            setXPos(p1,getXPos(p1)+1);
        }
        AjoutDebut (Bat->positions, p1);
    }
    return Bat;
}
Bateau supprPosition(Bateau b, Position p)
{
    /*bool flag = False;
    /* Supprime la position p du bateau quand on sait qu'elle est la et diminue ainsi la longueur du bateau*/
    k = b->positions;

    while (k != p && k->suivant != NULL)
    {
        k=k->suivant;
    }//On se trouve sur la liste � supprimer

    if (comparerPosition(k,p))//On supprime les positions
    {
        k->suivant->precedent = k->precedent;
        k->precedent->suivant = k->suivant;
        k->suivant = NULL;
        k->precedent = NULL;
        b->longueur = b->longueur-1;
    }
    return b;
}
bool positionPresente(Bateau b, Position p)
{
    /* Retourne True si cette position appartient au bateau. */
    bool present = False;
    while (b->positions != p && b->positions != NULL){
        b->positions->suivant;
    }
    return comparerPosition(b->positions, p);
}
bool bateauEnVue(Bateau b, Position p)
{
    /* retourne True si le bateau est en vue de la position p.*/
    return b->positions->x == p->x || b->positions->y != p->y; 
}
bool EstCoule(Bateau b)
{
    /*  Retourne True si le bateau n'a plus de position 'en vie'.*/
    /*  On enleve les positions et on d�cremente la longueur => Si longueur
        nulle => bateau coule
    */
    return b->longueur == 0;
}
int getTaille(Bateau b)
{
    /*On r�cup�re la taille du bateau*/
    return b->longueur;
}