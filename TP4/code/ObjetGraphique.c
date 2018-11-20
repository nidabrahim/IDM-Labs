#include "ObjetGraphique.h"


int getX(PObjetGraphique othis){

	return othis->x;
}

void setX(int inX, PObjetGraphique othis){

	othis->x = inX;
}

int getY(PObjetGraphique othis){

	return othis->y;
}

void setY(int inY, PObjetGraphique othis){

	othis->y = inY;
}

int GetNbObjetGraphique(void){
	
	return NbObjetGraphique;
}

void ConstructeurObjetGraphique(PObjetGraphique othis){
	
	printf("ObjetGraphique::ConstructeurObjetGraphique\n");
	this->myClass = &LeMetaObjetGraphique;
	othis->x = 0;
	othis->y = 0;
}


int main(){
	
	ObjetGraphique objetGraphique = new ObjetGraphique();
}
