#!/bin/bash
for nome in $(ls)
do
        if [ ! -s $nome ];then
                echo $nome é arquivo vazio.
        fi
done