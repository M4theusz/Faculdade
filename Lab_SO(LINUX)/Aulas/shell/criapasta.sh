#!/bin/bash

echo Qual o seu Nome?

read NOME

mkdir $NOME && cd $NOME && touch "$NOME"{1,2,3}.txt && cd ..  ls $NOME && echo PASTA CRIADA  com Sucesso  &&  cd $NOME  && echo Arquivos criados com sucesso
