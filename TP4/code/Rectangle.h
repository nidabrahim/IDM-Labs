#include "ObjetGraphique.h"


typedef struct _rectangle{
	
	struct ObjetGraphique superClass;
	struct MetaRectangle * myClass;
	int largeur;
	int hauteur;
	
} Rectangle;

typedef struct Rectangle * PRectangle;
PRectangle rthis;

typedef struct _metaRectangle{
	
	struct MetaObjetGraphique * superMetaClass;
	
	void (*setLargeur)(int, rthis);
	void (*setHauteur)(int, rthis);
	int (*getLargeur)(rthis);
	int (*getHauteur)(rthis);
		
	void (*ConstructeurRectangle)(rthis);
	
} MetaRectangle;
