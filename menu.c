#include "menu.h"


void choix_coeur(int choix) {
	printf("0 Le coeur va clignoter\n");
	printf("1 Le coeur va cheniller\n");
	printf("2 Le coeur va clignoter en 1-2\n");
	printf("3 Le coeur va clignoter d'un coté a l'autre\n");
	scanf("%p", &choix);
	
	if(choix==0){
		write(0);
	}
	else if (choix == 1) {
		write(1);
	}
	else if (choix == 2) {
		write(2);
	}
	else if (choix == 3) {
		write(3);
	}
	else {
		printf("caca");
	}
}