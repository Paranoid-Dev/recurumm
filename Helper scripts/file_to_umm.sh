#!/bin/bash

out=$(od -A n -v -t u1 $1)
out=${out//$'\n'/}

for f in $out; do
  echo -n "식" >> $2
  for ((i=f;i>0;i--)); do
    echo -n "." >> $2
  done
  if ((f==0)); then
    echo -n ".," >> $2
  fi
  echo "ㅋ" >> $2
done
