#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

char vetor[66] = "./1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"; //64
__shared__ char palavraVetor1[64][2];
__shared__ char palavraVetor2[128][3];

__global__ void func1() {
	int i;
	char palavra[3] = "\0\0";
	char *cp;

	//palavraVetor = (char*) malloc(sizeof(palavra)*64);
	for (i = 0; i < 64; ++i){
		palavra[0] = vetor[i];
		*cp = *palavraVetor1[i];
		while (*cp++ = *palavra++);
		//strcpy(palavraVetor1[i],palavra);
		//printf("%s\n", palavraVetor1[i]);
	}
}

int main(int argc, char const *argv[])
{
	
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
	}
/*
	for (temp1 = 0; temp1 < 63; ++temp1)	{
		palavra[19] = vetor[temp1];
		for (temp2 = 0; temp2 < 63; ++temp2){
			palavra[18] = vetor[temp2];
			for (temp3 = 0; temp3 < 63; ++temp3){
				palavra[17] = vetor[temp3];
				for (temp4 = 0; temp4 < 63; ++temp4){
					palavra[16] = vetor[temp4];
					for (temp5 = 0; temp5 < 63; ++temp5){
						palavra[15] = vetor[temp5];
						for (temp6 = 0; temp6 < 63; ++temp6){
							palavra[14] = vetor[temp6];
							for (temp7 = 0; temp7 < 63; ++temp7){
								palavra[13] = vetor[temp7];
								for (temp8 = 0; temp8 < 63; ++temp8){
									palavra[12] = vetor[temp8];
									for (temp9 = 0; temp9 < 63; ++temp9){
										palavra[11] = vetor[temp9];
										for (temp10 = 0; temp10 < 63; ++temp10){
											palavra[10] = vetor[temp10];
											for (temp11 = 0; temp11 < 63; ++temp11){
												palavra[9] = vetor[temp11];
												for (temp12 = 0; temp12 < 63; ++temp12){
													palavra[8] = vetor[temp12];
													for (temp13 = 0; temp13 < 63; ++temp13){
														palavra[7] = vetor[temp13];
														for (temp14 = 0; temp14 < 63; ++temp14){
															palavra[6] = vetor[temp14];
															for (temp15 = 0; temp15 < 63; ++temp15){
																palavra[5] = vetor[temp15];
																for (temp16 = 0; temp16 < 63; ++temp16){
																	palavra[4] = vetor[temp16];
																	for (temp17 = 0; temp17 < 63; ++temp17){
																		palavra[3] = vetor[temp17];
																		for (temp18 = 0; temp18 < 63; ++temp18){
																			palavra[2] = vetor[temp18];
																			for (temp19 = 0; temp19 < 63; ++temp19){
																				palavra[1] = vetor[temp19];
																				for (temp20 = 0; temp20 < 63; ++temp20){
																					palavra[0] = vetor[temp20];
																					printf("%s\n", palavra);
																					result = __host__ crypt(palavra, "Fk");
																					ok = strcmp (result, salt) == 0;
																					if (ok) {
																						printf("%s\n", palavra);
																						exit(1);
																					}
																					if (flag1 == 0) {
																						palavra[1] = '\0';
																						flag1 = 1;
																					}
																				}
																				if (flag2 == 0) {
																					palavra[2] = '\0';
																					flag2 = 1;
																				}								
																			}
																			if (flag3 == 0) {
																				palavra[3] = '\0';
																				flag3 = 1;
																			}
																		}
																		if (flag4 == 0) {
																			palavra[4] = '\0';
																			flag4 = 1;
																		}
																	}
																	if (flag5 == 0) {
																		palavra[5] = '\0';
																		flag5 = 1;
																	}
																}
																if (flag6 == 0) {
																	palavra[6] = '\0';
																	flag6 = 1;
																}
															}
															if (flag7 == 0) {
																palavra[7] = '\0';
																flag7 = 1;
															}
														}
														if (flag8 == 0) {
															palavra[8] = '\0';
															flag8 = 1;
														}
													}
													if (flag9 == 0) {
														palavra[9] = '\0';
														flag9 = 1;
													}
												}
												if (flag10 == 0) {
													palavra[10] = '\0';
													flag10 = 1;
												}
											}
											if (flag11 == 0) {
												palavra[11] = '\0';
												flag11 = 1;
											}
										}
										if (flag12 == 0) {
											palavra[12] = '\0';
											flag12 = 1;
										}
									}
									if (flag13 == 0) {
										palavra[13] = '\0';
										flag13 = 1;
									}
								}
								if (flag14 == 0) {
									palavra[14] = '\0';
									flag14 = 1;
								}
							}
							if (flag15 == 0) {
								palavra[15] = '\0';
								flag15 = 1;
							}
						}
						if (flag16 == 0) {
							palavra[16] = '\0';
							flag16 = 1;
						}
					}
					if (flag17 == 0) {
						palavra[17] = '\0';
						flag17 = 1;
					}
				}
				if (flag18 == 0) {
					palavra[18] = '\0';
					flag18 = 1;
				}
			}
			if (flag19 == 0) {
				palavra[19] = '\0';
				flag19 = 1;
			}
		}
		if (flag20 == 0) {
			palavra[20] = '\0';
			flag20 = 1;
		}
	}
	*/
	return 0;
}