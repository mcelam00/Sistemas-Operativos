#!/bin/bash
for i in $( ls .) #Resulta que en a primera iteracion va a listar en el directorio actual, i es cada uno de los archivos 
do
	echo He encontrado el fichero $i
done
