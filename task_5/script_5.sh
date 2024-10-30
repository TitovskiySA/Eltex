#!/bin/bash

#Ask for string
read -p "Enter some sting, which contain in process name...  " MyString
echo "You entered: $MyString"

#looking for processes with such string
ProcessList=$(pgrep $MyString)
echo "Found processes $ProcessList"

#killing these processes if answered yes
read -p "Do you want kill these processe& Confurm (y)..." Answer
if [[ $Answer == "y" ]];
	then
	echo "answered yes, let's kill them ha-ha..."
	#here killing them 
	for proc in $ProcessList
	do
	echo "killing $proc"
	sleep 5
	kill -9 $proc
	done
	else
	echo "answered NO, finishing script"
fi
