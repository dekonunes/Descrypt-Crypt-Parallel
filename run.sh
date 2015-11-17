#!/bin/bash

mpicc -Wall quebra-MPI.c -o aplicacao -lcrypt

for node in `cat maquinas.txt`
do
	scp aplicacao $node:~/
done

mpirun -np 7 -machinefile maquinas.txt /home/udesc/aplicacao < chaves.txt
