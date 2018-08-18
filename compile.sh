#!/bin/bash

for i in *.c
do
	file=$(echo $i | awk -F. '{print $1}')
	gcc -Wall $i -o $file
done
