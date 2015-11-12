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

void func3(char **chave, int qtdpalavras,int inicial, int final) {
	printf("func3: inicial %d final %d\n",inicial,final);

	char *result;
	int ok,i;
	char salt[2];
	
	int temp1,temp2,temp3;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					
			//268435456
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];
						palavra[2] = vetor[temp3];
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

	//TODO comunicar que terminou e pedir mais trabalho
}

void func4(char **chave, int qtdpalavras,int inicial, int final) {
	printf("func4: inicial %d final %d\n",inicial,final);

	char *result;
	int ok,i;
	char salt[2];
	
	int temp1,temp2,temp3,temp4;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";


		
	 for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					
			//268435456
					for (temp1 = inicial; temp1 < final; ++temp1){
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

void func5(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[2];
	
	int temp1,temp2,temp3,temp4,temp5;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp5 = 0; temp5 < 64; ++temp5){

		
	 for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					
			//268435456
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];
						palavra[2] = vetor[temp3];
						palavra[3] = vetor[temp4];
						palavra[4] = vetor[temp5];
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
	}

	//TODO comunicar que terminou e pedir mais trabalho
}

int main(int argc, char **argv)
{
	
	int i = 0,j;
	int rank, size;
	
	int qtdpalavras = 30;
	char **chaves =  malloc((sizeof(char*)*12)*qtdpalavras);
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





	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);


	if(rank == 0) {
		


		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);
		for(i = 0;i<qtdpalavras;i++)
			MPI_Bcast( chaves[i], (sizeof(char)*12), MPI_CHAR, 0, MPI_COMM_WORLD);


	} else {


		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);


		for(i = 0;i<qtdpalavras;i++){
			MPI_Bcast( chaves[i], (sizeof(char)*12), MPI_CHAR, 0, MPI_COMM_WORLD);
		}

		int escravos = size;
		int funcoes = 2;
		int escravos_por_funcao = escravos / funcoes;

		int qtd_combinacoes_por_func = 64 / escravos_por_funcao;

		int passos = 64/size;

		int escravo_inicial = 1;
		int escravo_final = escravos_por_funcao;

		if(rank >= 1 && rank <= 3){
			for(i=1;i<=3;i++){
				func3(chaves,qtdpalavras,(i-1)*passos,i*passos);
			}
		}
		
		//escravo_inicial = escravo_final + 1;
		//escravo_final = escravo_inicial + escravos_por_funcao;
		
		if(rank >= 4 && rank <= 6){
			for(i=1;i<=3;i++){
				func4(chaves,qtdpalavras,(i-1)*passos,i*passos);
			}
		}


		/*

				func4(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func5(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func6(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func7(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func8(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func9(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func10(chaves,qtdpalavras,(i-1)*passos,i*passos);
				*/
		
		//}
			
			
			/*if (rank == 1) {
				
				func5(chaves,qtdpalavras,0,16);
				
				printf("TERMINOU 1 \n");
			}
			
			if (rank == 2) {
				func5(chaves,qtdpalavras,16,32);
				printf("TERMINOU 2 \n");
			}
			
			if (rank == 3) {
				
				func5(chaves,qtdpalavras,32,48);
				
				printf("TERMINOU 1 \n");
			}
			
			if (rank == 4) {
				func5(chaves,qtdpalavras,48,64);
				printf("TERMINOU 2 \n");
			}*/
	}
	
	MPI_Finalize();
	return 0;
}
