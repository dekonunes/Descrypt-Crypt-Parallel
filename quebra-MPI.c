#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>
#include <mpi.h>

char vetor[66] = "./1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; //64

void func1(char salt[]) {
	char *result;
	int ok;
	//char salt[15] = "Fk9Rzlrnj.fqg";
	int temp1 = 0;
	char palavra[2] = "\0\0";

	for (temp1 = 0; temp1 < 64; ++temp1){
		palavra[0] = vetor[temp1];
		//printf("%s\n", palavra);
		result = crypt(palavra, "Fk");
		ok = strcmp (result, salt) == 0;
		if (ok) {
			printf("%s\n", palavra);
			exit(0);
		}
	}
}

void func2(char **chave, int qtdpalavras) {
	char *result;
	int ok,i;
	char salt[2];
	
	int temp1,temp2;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";
 
	for (temp2 = 0; temp2 < 64; ++temp2){
		for (temp1 = 0; temp1 < 64; ++temp1){
			palavra[0] = vetor[temp1];
			palavra[1] = vetor[temp2];
			//printf("%s\n", palavra);

			for(i=0;i<qtdpalavras;i++){
				
				salt[0] = chave[i][0];
				salt[1] = chave[i][1];// "Fk99B8qn1jmV2";
				
				result = crypt(palavra, salt);
				ok = strcmp (result, chave[i]) == 0;
				if (ok) {
					printf("%s\n", palavra);//QUEBROU							
				}
			}
		}
	}

}

void func4(char **chave, int qtdpalavras) {
	char *result;
	int ok,i;
	char salt[2];
	
	int temp1,temp2,temp3,temp4;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

 for (temp4 = 0; temp4 < 64; ++temp4){
		for (temp3 = 0; temp3 < 64; ++temp3){
			for (temp2 = 0; temp2 < 64; ++temp2){
				for (temp1 = 0; temp1 < 64; ++temp1){
					palavra[0] = vetor[temp1];
					palavra[1] = vetor[temp2];
					palavra[2] = vetor[temp3];
					palavra[3] = vetor[temp4];
					//printf("%s\n", palavra);

					for(i=0;i<qtdpalavras;i++){
						
						salt[0] = chave[i][0];
						salt[1] = chave[i][1];// "Fk99B8qn1jmV2";
						
						result = crypt(palavra, salt);
						ok = strcmp (result, chave[i]) == 0;
						if (ok) {
							printf("%s\n", palavra);//QUEBROU							
						}
					}
				}
			}
		}
	}

	//TODO comunicar que terminou e pedir mais trabalho
}

int main(int argc, char **argv)
{
	int i = 0;
	//MPI_Status status;
	int rank, size;
	//char msg[20];
	
	int qtdpalavras = 30;
	int qtdpalavrasRcv;
	char **chaves =  malloc((sizeof(char*)*12)*qtdpalavras);
	char **chavesRcv =  malloc((sizeof(char*)*12)*qtdpalavras);
	for(i = 0; i< qtdpalavras; i++)
		chaves[i] = malloc(sizeof(char) * 12);

	i = 0;
	char chaveAux[12];

	while (scanf("%s",chaveAux) == 1) {
		strcpy(chaves[i],chaveAux);
		printf("%s\n", chaves[i]);
		i++;
	}
	qtdpalavras = i;
    qtdpalavrasRcv = qtdpalavras;

	//char palavra[15] = "Fk9Rzlrnj.fqg";
	//char salt[15] = "Fk9Rzlrnj.fqg"; //q
	//char salt[15] = "Fk99B8qn1jmV2"; //qq
	//char salt2[15] = "FkCiSusvoHLpY"; //ww
	//char salt[15] = "FksK2de5SVsUM"; //qqq
	//char salt[15] = "FkLwp/xodTQRE"; //qqqq
	//char salt[15] = "Fk/lj89JcV0Ic"; //qqqqq

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	if(rank == 0) {
		//MPI_Scatter(chaves, (sizeof(char*)*12)*qtdpalavras, MPI_CHAR, &chavesRcv, 1, MPI_INT, 0, MPI_COMM_WORLD);
		//MPI_Scatter(&qtdpalavras, 1, MPI_INT, &qtdpalavrasRcv, 1, MPI_INT, 0, MPI_COMM_WORLD);
		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);
		for(i = 0;i<qtdpalavras;i++)
			MPI_Bcast( chaves[i], (sizeof(char)*12), MPI_CHAR, 0, MPI_COMM_WORLD);

	} else {
		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);
		for(i = 0;i<qtdpalavras;i++)
			MPI_Bcast( chaves[i], (sizeof(char)*12), MPI_CHAR, 0, MPI_COMM_WORLD);

			if (rank == 1) {
				
				/*chaves[0] = "Gicm.7i.35nCk";
				chaves[1] = "FkVYCfCnUm74s";
				chaves[2] = "HabKgXh.uhFgc";
				qtdpalavras =3;*/
				printf("qtdpalavras eh %d\n ",qtdpalavras);
				for(i = 0;i<qtdpalavras;i++)	
					printf(" pal %s \n",chaves[i]);
				//func2(chavesRcv,qtdpalavrasRcv);
				printf("TERMINOU\n");
			}
	}
	
	MPI_Finalize();
	return 0;
}