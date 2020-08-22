if test $# -eq 0
then
	dir=.
fi
if test $# -eq 1
then
	dir=$1 //la incializo sin el dolar pero luego cualquier cosa que quiera hacer seria con el dolar puesto delante
fi
if test $# -gt 1
	then
	echo "Numero incorrecto"
	exit(-1)
fi



-----------------------------------------------------------------------------------------------
cd $dir (Dónde he metido el directorio) > /dev/null (le estoy diciendo que me redireccione a un directorio que es nulo)
if test $? -ne 0
	then
	echo "No existe"
	exit(-1)
fi
-------------------------------------------------------------------------------------------------
SI QUIEROE QUE ME MUESTRE EL DIRECTORIO EN EL QUE ME ENCUENTRO
echo `pwd`
------------------------------------------------------------------------------------------------
opcion = 0
while true //es un bucle infinito que para obligarle a salir uso o un break o un exit0 para que se salga del programa si pico en la opcion de salir
do
	echo "1- lo que sea"
	.
	.
	.
	.
	.
	echo "10- la ultima"
	read opcion

	esac
	done
------------------------------------------------------------------------------------------------
case $opcion in
1) dUsed=`diskUsed` //LLamo a una funcion que yo llamaré diskrupt; abajo pongo lo que seria mi programa principal y por encima pondria las funciones
	echo $diskUsed;;
2)-----
3)----





//vamos a ponerlas pues
function diskUsed()
{
//muestra el espacio usado 
du -sh | cut -f1

}

function numDir()
{
//me devuelve el contenido del directorio
ls -l (me muestra todo el contenido)| grep ^d (para indicar que comienza por d, me busca los que son directorios)| wc -l

}

function numFiles()
{
ls -l | grep ^- | wc -l

}


function biggestFile()
{

ls -ls (o s sola dependiendola s es de sort) | grep ^- | head -1 (para que me devuelva la primera linea del ficheero) tambien es interesante el tail

}

function smallestFIle(){
}

function numWriter(){
ls -l | grep ^-.w (buscame los que comienzan por guión seguido de . es decir cualquier caracter y w despues que sera el permiso de escritura porque solo me interesan los tres primeros que serian los de user) | wc -l
}

function numReader(){
ls -l | grep ^-r | wc -l
}

funcion executionRights(){
ls -l | grep ^-..x | wc -l
}

funcion allUsersRights(){

ls -l | grep ^-..x..x..x | wc -l
}

function exitScript(){ 
exit(0)


}





