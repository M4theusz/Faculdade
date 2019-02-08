#!/bin/bash
cont=0

for j in $(ls ~)

do

  echo "$j"

  let cont=$cont+1

done

 echo "Numero de arquivos e pastas é:" "$cont"

