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

void func4(char **chave, int qtdpalavras,int inicial, int final, int inicial2, int final2, int rank) {
	//printf("func4",rank, inicial,final, inicial2, final2);

	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4;
	char palavra[10] = "....\0\0\0\0\0\0";

	for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = inicial2; temp3 <= final2; ++temp3){
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
		//printf("func4 FIM em %d: inicial %d final %d inicial2 %d final2 %d\n",rank, inicial,final, inicial2, final2);
	//TODO comunicar que terminou e pedir mais trabalho
}

void func5(char **chave, int qtdpalavras,int inicial, int final, int inicial2, int final2, int rank) {
	//printf("Iniciou com 5\n");
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp5 = 0; temp5 < 64; ++temp5){
	 	for (temp4 = 0; temp4 < 64; ++temp4){
			for (temp3 = inicial2; temp3 < final2; ++temp3){
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
	//printf("fim de 5");
	//TODO comunicar que terminou e pedir mais trabalho
}

void func6(char **chave, int qtdpalavras,int inicial, int final, int inicial2, int final2, int rank) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp6 = 0; temp6 < 64; ++temp6){
		for (temp5 = 0; temp5 < 64; ++temp5){
		 	for (temp4 = 0; temp4 < 64; ++temp4){
				for (temp3 = inicial2; temp3 < final2; ++temp3){
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

void func7(char **chave, int qtdpalavras,int inicial, int final, int inicial2, int final2, int rank) {
	char *result;
	int ok,i;
	char salt[3] = "\0\0\0";
	
	int temp1,temp2,temp3,temp4,temp5,temp6,temp7;
	char palavra[10] = "\0\0\0\0\0\0\0\0\0\0";

	for (temp7 = 0; temp7 < 64; ++temp7){
		for (temp6 = 0; temp6 < 64; ++temp6){
			for (temp5 = 0; temp5 < 64; ++temp5){
			 	for (temp4 = 0; temp4 < 64; ++temp4){
					for (temp3 = inicial2; temp3 < final2; ++temp3){
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

void func8(char **chave, int qtdpalavras,int inicial, int final, int inicial2, int final2, int rank) {
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
						for (temp3 = inicial2; temp3 < final2; ++temp3){
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
	
	int i = 0;
	int rank, size;
	
	int qtdpalavras = 99999;
	char **chaves =  malloc((sizeof(char*)*13)*qtdpalavras);
	for(i = 0; i< qtdpalavras; i++)
		chaves[i] = malloc(sizeof(char) * 13);

	i = 0;
	char chaveAux[12];


	while (scanf("%s",chaveAux) == 1) {
		strcpy(chaves[i],chaveAux);
		i++;
	}
	qtdpalavras = i;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	if(rank == 0) {
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
		for(i = 1;i<=174;i++){

		if (rank == i && i <= 32) {
			func4(chaves,qtdpalavras,rank-1,rank,0,12,i);
			func4(chaves,qtdpalavras,rank-1+32,rank+32,0,12,i);

			
			
			

			/*if(rank == i && rank == 1){
				func4(chaves,qtdpalavras,24,25,52,63,i);
				func4(chaves,qtdpalavras,24+32,25+32,52,63,i);
			}
			if(rank == i && rank == 8){
				func4(chaves,qtdpalavras,25,26,52,63,i);
				func4(chaves,qtdpalavras,25+32,26+32,52,63,i);
			}
			if(rank == i && rank == 2){
				func4(chaves,qtdpalavras,26,27,52,63,i);
				func4(chaves,qtdpalavras,26+32,27+32,52,63,i);
			}
			if(rank == i && rank == 3){
				func4(chaves,qtdpalavras,27,28,52,63,i);
				func4(chaves,qtdpalavras,27+32,28+32,52,63,i);
			}
			if(rank == i && rank == 4){
				func4(chaves,qtdpalavras,28,29,52,63,i);
				func4(chaves,qtdpalavras,28+32,29+32,52,63,i);
			}
			if(rank == i && rank == 5){
				func4(chaves,qtdpalavras,29,30,52,63,i);
				func4(chaves,qtdpalavras,29+32,30+32,52,63,i);
			}
			if(rank == i && rank == 6){
				func4(chaves,qtdpalavras,30,31,52,63,i);
				func4(chaves,qtdpalavras,30+32,31+32,52,63,i);
			}
			if(rank == i && rank == 7){
				func4(chaves,qtdpalavras,31,32,52,63,i);
				func4(chaves,qtdpalavras,31+32,32+32,52,63,i);
			}
	*/
			func5(chaves,qtdpalavras,rank-1,rank,0,12,i);
			func5(chaves,qtdpalavras,rank-1+32,rank+32,0,12,i);
			/*
			if(rank == i && rank == 9){
				func5(chaves,qtdpalavras,24,25,52,63,i);
				func5(chaves,qtdpalavras,24+32,25+32,52,63,i);
			}
			if(rank == i && rank == 10){
				func5(chaves,qtdpalavras,25,26,52,63,i);
				func5(chaves,qtdpalavras,25+32,26+32,52,63,i);
			}
			if(rank == i && rank == 11){
				func5(chaves,qtdpalavras,26,27,52,63,i);
				func5(chaves,qtdpalavras,26+32,27+32,52,63,i);
			}
			if(rank == i && rank == 12){
				func5(chaves,qtdpalavras,27,28,52,63,i);
				func5(chaves,qtdpalavras,27+32,28+32,52,63,i);
			}
			if(rank == i && rank == 13){
				func5(chaves,qtdpalavras,28,29,52,63,i);
				func5(chaves,qtdpalavras,28+32,29+32,52,63,i);
			}
			if(rank == i && rank == 14){
				func5(chaves,qtdpalavras,29,30,52,63,i);
				func5(chaves,qtdpalavras,29+32,30+32,52,63,i);
			}
			if(rank == i && rank == 15){
				func5(chaves,qtdpalavras,30,31,52,63,i);
				func5(chaves,qtdpalavras,30+32,31+32,52,63,i);
			}
			if(rank == i && rank == 16){
				func5(chaves,qtdpalavras,31,32,52,63,i);
				func5(chaves,qtdpalavras,31+32,32+32,52,63,i);
			}
	*/
			func6(chaves,qtdpalavras,rank-1,rank,0,12,i);
			func6(chaves,qtdpalavras,rank-1+32,rank+32,0,12,i);
			
			func7(chaves,qtdpalavras,rank-1,rank,0,12,i);
			func7(chaves,qtdpalavras,rank-1+32,rank+32,0,12,i);
			
			func8(chaves,qtdpalavras,rank-1,rank,0,12,i);
			func8(chaves,qtdpalavras,rank-1+32,rank+32,0,12,i);
			

		}

		if (rank == i && (i > 32) && (i <= 64) ) {
			func4(chaves,qtdpalavras,(rank-33),(rank-32),13,25,i);
			func4(chaves,qtdpalavras,(rank-33)+32,(rank-32)+32,13,25,i);

			func5(chaves,qtdpalavras,(rank-33),(rank-32),13,25,i);
			func5(chaves,qtdpalavras,(rank-33)+32,(rank-32)+32,13,25,i);
			
			func6(chaves,qtdpalavras,(rank-33),(rank-32),13,25,i);
			func6(chaves,qtdpalavras,(rank-33)+32,(rank-32)+32,13,25,i);
			
			func7(chaves,qtdpalavras,(rank-33),(rank-32),13,25,i);
			func7(chaves,qtdpalavras,(rank-33)+32,(rank-32)+32,13,25,i);
		
			func8(chaves,qtdpalavras,(rank-33),(rank-32),13,25,i);
			func8(chaves,qtdpalavras,(rank-33)+32,(rank-32)+32,13,25,i);
	

		}
		
		if (rank == i && (i > 64) && (i <= 96) ) {
			func4(chaves,qtdpalavras,(rank-65),(rank-64),26,38,i);
			func4(chaves,qtdpalavras,(rank-65)+32,(rank-64)+32,26,38,i);

			func5(chaves,qtdpalavras,(rank-65),(rank-64),26,38,i);
			func5(chaves,qtdpalavras,(rank-65)+32,(rank-64)+32,26,38,i);
			
			func6(chaves,qtdpalavras,(rank-65),(rank-64),26,38,i);
			func6(chaves,qtdpalavras,(rank-65)+32,(rank-64)+32,26,38,i);
			
			func7(chaves,qtdpalavras,(rank-65),(rank-64),26,38,i);
			func7(chaves,qtdpalavras,(rank-65)+32,(rank-64)+32,26,38,i);
			
			func8(chaves,qtdpalavras,(rank-65),(rank-64),26,38,i);
			func8(chaves,qtdpalavras,(rank-65)+32,(rank-64)+32,26,38,i);


		}
		
		if (rank == i && (i > 96) && (i <= 128) ) {
			func4(chaves,qtdpalavras,(rank-97),(rank-96),39,51,i);
			func4(chaves,qtdpalavras,(rank-97)+32,(rank-96)+32,39,51,i);

			func5(chaves,qtdpalavras,(rank-97),(rank-96),39,51,i);
			func5(chaves,qtdpalavras,(rank-97)+32,(rank-96)+32,39,51,i);
			
			func6(chaves,qtdpalavras,(rank-97),(rank-96),39,51,i);
			func6(chaves,qtdpalavras,(rank-97)+32,(rank-96)+32,39,51,i);
			
			func7(chaves,qtdpalavras,(rank-97),(rank-96),39,51,i);
			func7(chaves,qtdpalavras,(rank-97)+32,(rank-96)+32,39,51,i);
			
			func8(chaves,qtdpalavras,(rank-97),(rank-96),39,51,i);
			func8(chaves,qtdpalavras,(rank-97)+32,(rank-96)+32,39,51,i);

		}
		
		if (rank == i && (i > 128) && (i <= 160) ) {
			func4(chaves,qtdpalavras,(rank-129),(rank-128),52,63,i);
			func4(chaves,qtdpalavras,(rank-129)+32,(rank-128)+32,52,63,i);


			func5(chaves,qtdpalavras,(rank-129),(rank-128),52,63,i);
			func5(chaves,qtdpalavras,(rank-129)+32,(rank-128)+32,52,63,i);
			
			func6(chaves,qtdpalavras,(rank-129),(rank-128),52,63,i);
			func6(chaves,qtdpalavras,(rank-129)+32,(rank-128)+32,52,63,i);
			
			func7(chaves,qtdpalavras,(rank-129),(rank-128),52,63,i);
			func7(chaves,qtdpalavras,(rank-129)+32,(rank-128)+32,52,63,i);
			
			func8(chaves,qtdpalavras,(rank-129),(rank-128),52,63,i);
			func8(chaves,qtdpalavras,(rank-129)+32,(rank-128)+32,52,63,i);
		}

	}


			
			
			
		
	}
	MPI_Finalize();
	return 0;
}
