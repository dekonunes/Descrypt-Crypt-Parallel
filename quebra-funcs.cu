#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>
//#include <crypt.h>
#include "cuPrintf.cu"

//__device__ char vetor[66] = "./1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; //64
//__device__ char palavraVetor1[64][2];
//__shared__ char *palavraVetor1 = malloc(sizeof(char)*64);
//__shared__ char palavraVetor2[128][3];

__global__ void func1() {
	cuPrintf("Ola mundo");
	/*int i = 0;
	
	for (i = 0; i < 64; ++i){
		palavraVetor1[i][0] = vetor[i];
		palavraVetor1[i][1] = '\0';
		cuPrintf("%s\n", palavraVetor1[i]);
	}*/
}

int main()
{
	printf("Hello, world from the host!\n");
	cudaPrintfInit();
	func1<<<10,64>>>();
	cudaPrintfDisplay(stdout, true);
	cudaPrintfEnd();
	/*
    float *ah;
    cudaMalloc((void **)&ah, sz);
    cudaMemcpyToSymbol("a", &ah, sizeof(float *), size_t(0),cudaMemcpyHostToDevice);
    
	char *result;
	int ok,i;
	char salt[15] = "Fk9Rzlrnj.fqg"; //q
	//char salt[15] = "Fk99B8qn1jmV2"; //qq
	//char salt[15] = "FksK2de5SVsUM"; //qqq
	//char salt[15] = "FkLwp/xodTQRE"; //qqqq
	//char salt[15] = "Fk/lj89JcV0Ic"; //qqqqq
	
	
	for ( i = 0; i < 64; ++i){
		result = crypt(palavraVetor1[i], "Fk");
		ok = strcmp (result, salt) == 0;
		if (ok) {
			printf("%s\n", palavraVetor1[i]);
			exit(0);
		}
	}*/

	
	return 0;
}