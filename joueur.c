Joueur creerJoueur(int id); /*Creé un joueur avec id pour l'identifier.*/
int idJoueur(Joueur j); /*Renvoie le nom du joueur pour qu'il se reconnaisse*/
bool bateauxNonCoulee(Joueur j); /*Renvoie True s'il reste des bateaux en jeu au joueur.*/
Joueur placementBateaux(Joueur j); /* Fait placer au joueur j ses bateaux de taille fixée.*/
Bateaux bateauxJoueur(Joueur j);/*Recupère la collection de bateaux de joueurs.*/