#include "Cercle.h"


int getRayon(PCercle cthis){

	return cthis->rayon;
}

void setRayon(int inRayon, PCercle cthis){

	cthis->rayon = inRayon;
}

void ConstructeurCercle(PCercle cthis){
	
	printf("Cercle::ConstructeurCercle\n");
	cthis->myClass = &LeMetaCercle;
	
	cthis->myClass->superMetaClass->ConstructeurObjetGraphique(&this->superClass);
	cthis->rayon = 10;
}
