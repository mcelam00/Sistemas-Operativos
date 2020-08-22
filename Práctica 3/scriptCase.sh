#!/bin/bash
echo Por favor, introduce un número entre el 1 y el 3
read input
case $input in
1) echo Has introducido el número $input;;
2) echo Has introducido el número $input;;
3) echo Has introducido el número $input;;
*) echo "¡Dije un número entre el 1 y el tres!";;
esac

