
#include <stdio.h>

#define TAILLE_MAX 5
typedef enum{FAUX=0, VRAI=1} bool;

#define DECLARER_PILE(TYPE) 								\
typedef struct Pile##TYPE 									\
{															\
	TYPE  pile[TAILLE_MAX];									\
	TYPE* top;												\
	int itop; 												\
}Pile##TYPE##_t; 											\
															\
/* empile la valeur */										\
void empiler##TYPE(TYPE valeur, struct Pile##TYPE* this);	\
															\
/* dépile en retournant le sommet */						\
TYPE depiler##TYPE(struct Pile##TYPE* this); 				\
															\
/* Prédicat: la pile est-elle vide? */						\
bool estVide##TYPE(struct Pile##TYPE* this); 				\
															\
/* renvoie le sommet de pile */								\
TYPE sommet##TYPE(struct Pile##TYPE* this);					\
															\
#define IMPLEMENTER_PILE(TYPE) 								\
void empiler##TYPE(TYPE valeur, struct Pile##TYPE* this){  	\
	if(this->itop < TAILLE_MAX-1){							\
		this->top = &valeur;								\
		this->pile[++this->itop] = valeur;					\
	}														\
}															\
TYPE depiler##TYPE(struct Pile##TYPE* this){ 				\
	if(estVide##TYPE(this)) return NULL;					\
	TYPE* element = this->top;								\
	if(this->itop == 0) this->top = NULL;					\
	else this->top = this->pile[--this->itop];				\
	return element;											\
} 															\
bool estVide##TYPE(struct Pile##TYPE* this){ 				\
	return this->top == NULL; 								\
} 															\
TYPE sommet##TYPE(struct Pile##TYPE* this){ 				\
	return this->top; 										\
}				


DECLARER_PILE(int)
DECLARER_PILE(float)
IMPLEMENTER_PILE(int)
IMPLEMENTER_PILE(float)



int main(int argc, char* argv[])
{
	Pileint_t pi;
	Pilefloat_t pf;
	pi.top = NULL;
	empilerint(5, &pi);
	depilerint(&pi);
	pf.top = NULL;
	empilerfloat(5, &pf);
	depilerfloat(&pf);
	
	return 0;
}
