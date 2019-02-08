#!/bin/bash

arq=$1

num=$( cat "$arq" | wc -l )

echo -e "$num \n \n \n"
if [[ $num -lt 100 ]]
then
	mv $arq ./pastaPequena
elif [[ $num -gt 100 ]] && [[ $num -lt 500 ]]
	then
	mv $arq ./pastaMedia
	else
	mv $arq ./pastaGrande 
fi
