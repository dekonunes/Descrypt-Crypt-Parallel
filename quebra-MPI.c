#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>
#include <mpi.h>

char vetor[66] = "./1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; //64

void func1(char salt[]) {
	char *result;
	int ok,i;
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

void func2(char salt[]) {
	char *result;
	int ok,i;
	//char salt[15] = "Fk99B8qn1jmV2";
	int temp1,temp2;
	char palavra[3] = "\0\0\0";

	for (temp2 = 0; temp2 < 64; ++temp2)
		{
		for (temp1 = 0; temp1 < 64; ++temp1){
			palavra[0] = vetor[temp1];
			palavra[1] = vetor[temp2];
			//printf("%s\n", palavra);
			result = crypt(palavra, "Fk");
			ok = strcmp (result, salt) == 0;
			if (ok) {
				printf("%s\n", palavra);
				exit(0);
			}
		}
	}
}

void func3() {
	/*int temp1,temp2,temp3,q = 0;
	for (temp3 = 0; temp3 < 64; ++temp3)
	{
		for (temp2 = 0; temp2 < 64; ++temp2)
		{
			for (temp1 = 0; temp1 < 64; ++temp1){
				palavraVetor3[q][0] = vetor[temp3];
				palavraVetor3[q][1] = vetor[temp2];
				palavraVetor3[q][2] = vetor[temp1];
				palavraVetor3[q][3] = '\0';
				printf("%s\n", palavraVetor3[q]);
				q++;
			}
			q++;
		}
		q++;
	}*/
}

int main(int argc, char **argv)
{
	int rank,size,i;
	int tag=0;
	MPI_Status status;
	char msg[20];
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);
	
	
	char salt[15] = "Fk9Rzlrnj.fqg"; //q
	//char salt[15] = "Fk99B8qn1jmV2"; //qq
	char salt2[15] = "FkCiSusvoHLpY"; //ww
	//char salt[15] = "FksK2de5SVsUM"; //qqq
	//char salt[15] = "FkLwp/xodTQRE"; //qqqq
	//char salt[15] = "Fk/lj89JcV0Ic"; //qqqqq
	if(rank == 0) {
		
	} else {
		if (rank == 1) {
			func1(salt);
			func2(salt);
		}
		if (rank == 2) {
			func1(salt2);
			func2(salt2);
		}
		
	}
	
	MPI_Finalize();
	return 0;
}