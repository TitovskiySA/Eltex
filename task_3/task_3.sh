#!/bin/bash
#creating files/dirs
for (( i = 1; i <=20; i++ ))
	do
	if [[ -d $i ]];
		then
		echo "$i exists"
		else
		mkdir $i
		touch $i/$i.txt
	fi
	#delete old softlinks softlinks
	if [[ -f ~/symb_$i ]];
		then
		echo "deleting symb_$i softlink"
		rm ~/symb_$i
	fi
	#creating new softlinks
	ln -s $PWD/$i/$i.txt ~/symb_$i
	echo "creating symb_$i"
	#write something to files
	echo $i/$i >> $i/$i.txt
	done

#checking number 4 in files and delete without 4
for (( i = 1; i <=20; i++ ));
	do
	if [[ $(grep -l "4" $PWD/$i/$i.txt) ]];
		then
		echo "4 in file $i.txt"
		else
		rm $i/$i.txt
		echo "removing $i.txt with no letter 4"
	fi
	done

#write into 14/14.txt something else
echo "Something else" > 14/14.txt
echo "Rewriting file 14/14.txt with 'Something else'"
	 

