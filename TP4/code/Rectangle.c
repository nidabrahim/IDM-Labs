#include "Rectangle.h"


int getLargeur(PRectangle rthis){

	return rthis->largeur;
}

int getHauteur(PRectangle rthis){

	return rthis->hauteur;
}

void setLargeur(int inLargeur, PRectangle rthis){

	rthis->largeur = inLargeur;
}

void setHauteur(int inHauteur, PRectangle rthis){

	rthis->hauteur = inHauteur;
}

void ConstructeurRectangle(PRectangle rthis){
	
	printf("Rectangle::ConstructeurRectangle\n");
	rthis->myClass = &LeMetaRectangle;
	
	rthis->myClass->superMetaClass->ConstructeurObjetGraphique(&this->superClass);
	rthis->largeur = 10;
	rthis->hauteur = 10;
}
