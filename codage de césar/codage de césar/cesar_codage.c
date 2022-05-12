#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
	FILE *entree;
	FILE *sortie;
	char c;
	int e;
	int decal=atoi(argv[2]);
	entree=fopen(argv[1], "rb");
	sortie=fopen(argv[3],"wb");

	if(entree==NULL)
	{
 		fprintf(stderr," Erreur: fichier mon fichier.txt introuvable dans le repertoire courant 	 \n");
 //on quitte le programme 
 		return EXIT_FAILURE;
 	}
 	if(sortie==NULL)
	{
 		fprintf(stderr," Erreur: fichier mon sotrie.txt introuvable dans le repertoire courant 	 \n");
 //on quitte le programme 
 		return EXIT_FAILURE;
 	}
 
 
 	e=fscanf(entree, "%c" ,&c );
 // sinon on lit chaque caractere du fichier 
 	while(e !=EOF){
 		

 		if (c>='A' && c<='Z')
 		{
 			c=(c-'A'+decal+26)%26+'A';
 			
 		}
 		else if(c>='a' && c<='z'){
 			c=(c-'a'+decal+26)%26+'a';
 		}
 		fprintf(sortie,"%c",c);
 		e=fscanf(entree, "%c" ,&c );
 			}
 	
// printf("Option num %d : %s\n ", i , argv[i]);
 
 
 return EXIT_SUCCESS; 

}
