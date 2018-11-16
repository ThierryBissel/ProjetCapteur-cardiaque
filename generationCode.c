#include  "generationCode.h"

void write(int choix) {
	FILE* fichier = NULL;
	fichier = fopen("param.h","w+");

	if (fichier != NULL) {

		fprintf(fichier, "#ifndef PARAM_H\n#define PARAM_H\nint choix = %d;\n#endif ", choix);
		
		fclose(fichier);
	}
	else {
		printf("Probleme de génération du fichier param.h ");
	}
	
}