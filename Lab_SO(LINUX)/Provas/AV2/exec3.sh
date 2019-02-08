#!bin/bash

arq=$1

if [ -f $arq ]
then
	echo -e "Arquivo $arq existe"
	if [ -s $arq ]
	then
		echo -e "Arquivo $arq não pode ser excluido pois contem informacao"
		
	else
		echo -e "Arquivo $arq esta vazio e sera excluido"
		rm $arq
	fi
else

echo -e "Arquivo $arq Inexistente"
fi
