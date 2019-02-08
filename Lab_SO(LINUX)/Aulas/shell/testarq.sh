#!/bin/bash
file=$1
if [ -f $file ]
then
 echo -e "the $file exist"
else

 touch $file	
 echo -e "Arquivo Criado"
fi
