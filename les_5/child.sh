#!/bin/bash

#
child=$!
echo $child
exit 0
echo "parent alive"
sleep 20
echo "parent dead"

ps -eF | grep -v grep | grep -i z | grep $child

#echo "Started"
#sleep 10
#./chil.sh &
#echo "Finisheed"
#exit 0
