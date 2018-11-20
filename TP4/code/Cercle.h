#include "ObjetGraphique.h"


typedef struct _cercle{
	
	struct ObjetGraphique superClass;
	struct MetaCercle * myClass;
	int rayon;
	
} Cercle;

typedef struct Cercle * PCercle;
PCercle cthis;

typedef struct _metaCercle{
	
	struct MetaObjetGraphique * superMetaClass;
	
	void (*setRayon)(int, cthis);
	int (*getRayon)(cthis);
	
	void (*ConstructeurCercle)(cthis);
	
} MetaCercle;
