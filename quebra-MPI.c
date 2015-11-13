#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>
#include <mpi.h>

char vetor[66] = "./1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; //64

void func1(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp1 = inicial; temp1 < final; ++temp1){
		palavra[0] = vetor[temp1];

		for(i=0;i<qtdpalavras;i++){
			
			salt[0] = chave[i][0];
			salt[1] = chave[i][1];
			result = crypt(palavra, salt);
			ok = strcmp (result, chave[i]) == 0;
			if (ok) {
				printf("%s\n", palavra);//QUEBROU							
			}
		}
	}

}

void func2(char **chave, int qtdpalavras,int inicial, int final) {
	//printf("func3: inicial %d final %d\n",inicial,final);
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

				for (temp2 = 0; temp2 < 64; ++temp2){
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];

						for(i=0;i<qtdpalavras;i++){
							
							salt[0] = chave[i][0];
							salt[1] = chave[i][1];
							result = crypt(palavra, salt);
							ok = strcmp (result, chave[i]) == 0;
							if (ok) {
								printf("%s\n", palavra);//QUEBROU							
							}
						}
					}
				}
	//TODO comunicar que terminou e pedir mais trabalho
}

void func3(char **chave, int qtdpalavras,int inicial, int final) {
	//printf("func3: inicial %d final %d\n",inicial,final);
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];
						palavra[2] = vetor[temp3];

						for(i=0;i<qtdpalavras;i++){
							
							salt[0] = chave[i][0];
							salt[1] = chave[i][1];
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
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];
						palavra[2] = vetor[temp3];
						palavra[3] = vetor[temp4];

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
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp5 = 0; temp5 < 64; ++temp5){
	 	for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = 0; temp3 < 64; ++temp3){
				for (temp2 = 0; temp2 < 64; ++temp2){
					for (temp1 = inicial; temp1 < final; ++temp1){
						palavra[0] = vetor[temp1];
						palavra[1] = vetor[temp2];
						palavra[2] = vetor[temp3];
						palavra[3] = vetor[temp4];
						palavra[4] = vetor[temp5];

						for(i=0;i<qtdpalavras;i++){
							
							salt[0] = chave[i][0];
							salt[1] = chave[i][1];
							
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

void func6(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp6 = 0; temp6 < 64; ++temp6){
		for (temp5 = 0; temp5 < 64; ++temp5){
		 	for (temp4 = 0; temp4 < 64; ++temp4){
				for (temp3 = 0; temp3 < 64; ++temp3){
					for (temp2 = 0; temp2 < 64; ++temp2){
						for (temp1 = inicial; temp1 < final; ++temp1){
							palavra[0] = vetor[temp1];
							palavra[1] = vetor[temp2];
							palavra[2] = vetor[temp3];
							palavra[3] = vetor[temp4];
							palavra[4] = vetor[temp5];
							palavra[5] = vetor[temp6];

							for(i=0;i<qtdpalavras;i++){
								
								salt[0] = chave[i][0];
								salt[1] = chave[i][1];
								
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
	}
	//TODO comunicar que terminou e pedir mais trabalho
}

void func7(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6,temp7;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp7 = 0; temp7 < 64; ++temp7){
		for (temp6 = 0; temp6 < 64; ++temp6){
			for (temp5 = 0; temp5 < 64; ++temp5){
			 	for (temp4 = 0; temp4 < 64; ++temp4){
					for (temp3 = 0; temp3 < 64; ++temp3){
						for (temp2 = 0; temp2 < 64; ++temp2){
							for (temp1 = inicial; temp1 < final; ++temp1){
								palavra[0] = vetor[temp1];
								palavra[1] = vetor[temp2];
								palavra[2] = vetor[temp3];
								palavra[3] = vetor[temp4];
								palavra[4] = vetor[temp5];
								palavra[5] = vetor[temp6];
								palavra[6] = vetor[temp7];

								for(i=0;i<qtdpalavras;i++){
									
									salt[0] = chave[i][0];
									salt[1] = chave[i][1];
									
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
		}
	}
	//TODO comunicar que terminou e pedir mais trabalho
}

void func8(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp8 = 0; temp8 < 64; ++temp8){
		for (temp7 = 0; temp7 < 64; ++temp7){
			for (temp6 = 0; temp6 < 64; ++temp6){
				for (temp5 = 0; temp5 < 64; ++temp5){
				 	for (temp4 = 0; temp4 < 64; ++temp4){
						for (temp3 = 0; temp3 < 64; ++temp3){
							for (temp2 = 0; temp2 < 64; ++temp2){
								for (temp1 = inicial; temp1 < final; ++temp1){
									palavra[0] = vetor[temp1];
									palavra[1] = vetor[temp2];
									palavra[2] = vetor[temp3];
									palavra[3] = vetor[temp4];
									palavra[4] = vetor[temp5];
									palavra[5] = vetor[temp6];
									palavra[6] = vetor[temp7];
									palavra[7] = vetor[temp8];

									for(i=0;i<qtdpalavras;i++){
										
										salt[0] = chave[i][0];
										salt[1] = chave[i][1];
										
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
			}
		}
	}
	//TODO comunicar que terminou e pedir mais trabalho
}

void func9(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp9 = 0; temp9 < 64; ++temp9){
		for (temp8 = 0; temp8 < 64; ++temp8){
			for (temp7 = 0; temp7 < 64; ++temp7){
				for (temp6 = 0; temp6 < 64; ++temp6){
					for (temp5 = 0; temp5 < 64; ++temp5){
					 	for (temp4 = 0; temp4 < 64; ++temp4){
							for (temp3 = 0; temp3 < 64; ++temp3){
								for (temp2 = 0; temp2 < 64; ++temp2){
									for (temp1 = inicial; temp1 < final; ++temp1){
										palavra[0] = vetor[temp1];
										palavra[1] = vetor[temp2];
										palavra[2] = vetor[temp3];
										palavra[3] = vetor[temp4];
										palavra[4] = vetor[temp5];
										palavra[5] = vetor[temp6];
										palavra[6] = vetor[temp7];
										palavra[7] = vetor[temp8];
										palavra[8] = vetor[temp9];

										for(i=0;i<qtdpalavras;i++){
											
											salt[0] = chave[i][0];
											salt[1] = chave[i][1];
											
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
				}
			}
		}
	}
	//TODO comunicar que terminou e pedir mais trabalho
}

void func10(char **chave, int qtdpalavras,int inicial, int final) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp10 = 0; temp10 < 64; ++temp10){
		for (temp9 = 0; temp9 < 64; ++temp9){
			for (temp8 = 0; temp8 < 64; ++temp8){
				for (temp7 = 0; temp7 < 64; ++temp7){
					for (temp6 = 0; temp6 < 64; ++temp6){
						for (temp5 = 0; temp5 < 64; ++temp5){
						 	for (temp4 = 0; temp4 < 64; ++temp4){
								for (temp3 = 0; temp3 < 64; ++temp3){
									for (temp2 = 0; temp2 < 64; ++temp2){
										for (temp1 = inicial; temp1 < final; ++temp1){
											palavra[0] = vetor[temp1];
											palavra[1] = vetor[temp2];
											palavra[2] = vetor[temp3];
											palavra[3] = vetor[temp4];
											palavra[4] = vetor[temp5];
											palavra[5] = vetor[temp6];
											palavra[6] = vetor[temp7];
											palavra[7] = vetor[temp8];
											palavra[8] = vetor[temp9];
											palavra[9] = vetor[temp10];

											for(i=0;i<qtdpalavras;i++){
												
												salt[0] = chave[i][0];
												salt[1] = chave[i][1];
												
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
	
	int qtdpalavras = 31;
	char **chaves =  malloc((sizeof(char*)*13)*qtdpalavras);
	for(i = 0; i< qtdpalavras; i++)
		chaves[i] = malloc(sizeof(char) * 13);

	i = 0;
	char chaveAux[12];


	while (scanf("%s",chaveAux) == 1) {
		strcpy(chaves[i],chaveAux);
		//printf("%s\n", chaves[i]);
		i++;
	}
	qtdpalavras = i;





	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);


	if(rank == 0) {
		printf("Iniciou\n");


		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);
		for(i = 0;i<qtdpalavras;i++)
			MPI_Bcast( chaves[i], (sizeof(char)*13), MPI_CHAR, 0, MPI_COMM_WORLD);
		func1(chaves,qtdpalavras,0,64);
		func2(chaves,qtdpalavras,0,64);
		func3(chaves,qtdpalavras,0,64);

	} else {


		MPI_Bcast( &qtdpalavras, 1, MPI_INT, 0, MPI_COMM_WORLD);


		for(i = 0;i<qtdpalavras;i++){
			MPI_Bcast( chaves[i], (sizeof(char)*13), MPI_CHAR, 0, MPI_COMM_WORLD);
		}

		int escravos = size; //170
		int funcoes = 2; //6
		int escravos_por_funcao = escravos / funcoes; // 170/8 = 21.25 -> 22

		int qtd_combinacoes_por_func = 64 / escravos_por_funcao; // 64/22 = 2.9 -> 3

		int passos = 64/size;

		int escravo_inicial = 1;
		int escravo_final = escravos_por_funcao;

		if (rank == 1) {

			func4(chaves,qtdpalavras,0,32);
		}

		if (rank == 2) {
			func4(chaves,qtdpalavras,32,64);
		}

		/*if(rank >= 1 && rank <= 3){
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
		}*/


		/*

				func4(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func5(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func6(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func7(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func8(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func9(chaves,qtdpalavras,(i-1)*passos,i*passos);
				func10(chaves,qtdpalavras,(i-1)*passos,i*passos);
				*/
		
	
			
			
			/*if (rank == 1) {
				
				func5(chaves,qtdpalavras,0,16);
				
				printf("TERMINOU 1 \n");
			}*/
	}
	
	MPI_Finalize();
	return 0;
}
