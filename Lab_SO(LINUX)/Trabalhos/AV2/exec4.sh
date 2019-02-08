#!/bin/bash
cont=0
contxt=0
contc=0
contpy=0

for arq in $(ls)
do
        cont=$(( $cont + 1 ))
        case $arq in
        *.txt)
                contxt=$(( $contxt + 1 ));;
        *c)
                contc=$(( $contc + 1 ));;
        *py)
                contpy=$(( $contpy + 1 ));;
        *) ;;
        esac
done
echo O total de arquivos lidos são $cont
echo O total de arquivos com a extensão .txt são $contxt
echo O total de arquivos com a extensão .c são $contc
echo O total de arquivos com a extensão .py são $contpy