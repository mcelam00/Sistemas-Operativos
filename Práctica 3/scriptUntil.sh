#!/bin/bash
numFiles=`ls | wc -l`
count=0
#Count deberia haberlo inicializado a numFiles e ir hacia atras
while test $count -eq $numFiles
do
	count=`expr $count + 1`
	echo He encontrado $count fichero/s
done
