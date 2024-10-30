#!/bin/bash
#script for activating ssh key for my github
eval $(ssh-agent -s)
ssh-add ~/.ssh/id_rsa
