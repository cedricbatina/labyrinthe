#include <fstream>
#include <iostream>
#include "GL/freeglut.h"
#include "./entete/Joueur.h"

using namespace std;

int NbColonnes, NbLignes; // taille du niveau
char **Matrice;           // Matrice contenant le niveau
// Matrice = NULL;

void LabyAffichage();
void LabyRedim(int x, int y);
void OuvrirNiveau(const char *nom_fichier);
void LibereMemoire();
void DessinerNiveau();
Joueur monJoueur; // declaration d'un  type joueur

int main(int argc, char const *argv[])
{
 glutInit(&argc, const_cast<char **>(argv));
 NbColonnes = NbLignes = 0; // initialise la taille
 glutInitWindowPosition(10, 10);
 glutInitWindowSize(500, 500);
 glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
 glutCreateWindow("Labyrinthe");
 glutDisplayFunc(LabyAffichage);
 glutReshapeFunc(LabyRedim);
 OuvrirNiveau("niveaux.txt");

 glutMainLoop();
 return 0;
}

void LabyAffichage()
{
 // definit le background color
 glClearColor(1.0, 1.0, 1.0, 1.0);
 glClear(GL_COLOR_BUFFER_BIT); // efface l'ecran
 glMatrixMode(GL_MODELVIEW);
 /*les instructions d'affichage ci-dessous*/
 DessinerNiveau(); //  affiche le niveau
 glFlush();        // acheve l'affichage
}
void LabyRedim(int x, int y)
{
 glViewport(0, 0, x, y);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0.0, (double)NbColonnes, (double)NbLignes, 0.0);
}
void OuvrirNiveau(const char *nom_fichier)
{
 /**/
 ifstream fichier;
 fichier.open("niveaux.txt");
 if (!fichier)
 {
  cout << "Erreur lors de l'ouverture du fichier !" << endl;
  system("pause");
  exit(1);
 }
 fichier >> NbColonnes;
 fichier >> NbLignes;

 Matrice = new char *[NbColonnes]; // allocation du tableau de niveaux
 for (int i = 0; i < NbColonnes; i++)
 {
  Matrice[i] = new char[NbLignes];
 }
 // initialisation des valeurs du tableau
 for (int i = 0; i < NbColonnes; i++)
 {
  for (int j = 0; j < NbLignes; j++)
  {
   Matrice[i][j] = '0';
  }
 }
 // lecture du tableau du niveau, caractère par caractère
 for (int j = 0; j < NbLignes; j++)
 {
  for (int i = 0; i < NbColonnes; i++)
  {
   fichier >> Matrice[i][j];
  }
 }
 fichier.close(); // fermeture du fichier
}
void LibereMemoire()
{
 /*verifie que la matrice a bien été allouée*/
 if (Matrice != NULL)
 {
  for (int i = 0; i < NbColonnes; i++)
   delete[] Matrice[i]; // libere la mémoire des colonnes
  delete[] Matrice;
 }
}
void DessinerNiveau()
{
 glColor3b(0.5, 0.5, 0.5); // couleur grise
 // commence l'affichage de quadrilatères
 glBegin(GL_QUADS);
 // parcourt toures les cellules de la matrice
 for (int i = 0; i < NbColonnes; i++)
  for (int j = 0; j < NbLignes; j++)
  {
   // si c'est un mur , on dessine un carré
   if (Matrice[i][j] == '0')
   {
    // place les points du carré
    glVertex2d(i, j);
    glVertex2d(i, j + 1);
    glVertex2d(i + 1, j + 1);
    glVertex2d(i + 1, j);
   }
  }
 glEnd();
}