#include "stdio.h"
#include <stdlib.h>


struct Hero {

	char * heroName, * weaponName, * shieldName;
	long int * healthPoint;
	int * mana;
	float * heroAttack;
	short * shieldDefence;
	long * armorDefence;
	double * helmDefence;
	short int * bootDefence;
	short * gloveDefence, * armletDefence, * ringDefence, * necklaceDefence;

} Hero;


int main() {

	struct Hero * hero;
	/*Hero * hero = (Hero *)malloc(sizeof(Hero));*/

	if (!Hero) printf("not struct.\n") else printf("struct.\n");;


}
