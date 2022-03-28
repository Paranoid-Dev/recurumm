#!/bin/bash

while read -r line; do
  for ((i=0;i<${#line};i++)); do
    printf "%d " \'"${line:$i:1}"
  done
  if ((i==0)); then
    echo -n "10 "
  fi
done < $1
echo ""
