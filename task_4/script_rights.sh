#!/bin/bash
#script changing rights (arg2) for some file (arg1)
echo 'executing chmod ' $2 ' for ' $1
echo $(chmod $2 $1)
