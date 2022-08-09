#!/bin/bash
sudo apt-get -y install libreadline7 libreadline7-dev
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simpleshell && ./simpleshell

TEmPo=$HOME/bin
if [ ! -d "$TEmPo" ]
then
	mkdir -p $TEmPo
fi    
	sudo cp simpleshell $TEmPo
	chmod +x $TEmPo/simpleshell

FILE=/usr/local/man/man99
if [ ! -d "$FILE" ]
then
	mkdir -p $FILE
fi
	sudo cp man_99_shell $FILE
	sudo gzip $FILE/man_99_shell