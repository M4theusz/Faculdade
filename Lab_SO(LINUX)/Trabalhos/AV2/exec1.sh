#!/bin/bash
arq=$1
if [ -f $arq ]
then
        echo Arquivo existe.
else
        echo Arquivo não existe.
fi