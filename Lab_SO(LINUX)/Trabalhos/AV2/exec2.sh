#!/bin/bash
cont=$1
fat=1
for (( i=1; i<=$cont; i++ ))
do
        fat=$(( $fat * $i ))
done
echo "O fatorial é :  $fat"