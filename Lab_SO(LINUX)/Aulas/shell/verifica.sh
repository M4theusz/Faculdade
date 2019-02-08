#!/bin/bash
arq=$1

if [ -f $arq ]
then

	if [ -s $arq ]
	then 

		echo -e "O arquivo nao pode ser excluido pois contem informarção"
	else
		rm $arq
		echo -e "Arquivo EXcluido"
	fi
else
	echo -e "Arquivo Inexistente"

fi
