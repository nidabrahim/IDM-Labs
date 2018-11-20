
typedef struct _objetGraphique{
	struct MetaObjetGraphique * myClass;
	int x;
	int y;
	
} ObjetGraphique;

typedef struct ObjetGraphique * PObjetGraphique;
PObjetGraphique othis;


typedef struct _metaObjetGraphique{
	
	void (*setX)(int, othis);
	void (*setY)(int, othis);
	int (*getX)(othis);
	int (*getY)(othis);
	
	int NbObjetGraphique;
	
	int (*GetNbObjetGraphique)(void);
	
	void (*ConstructeurObjetGraphique)(this);
	
} MetaObjetGraphique;
