#!/bin/bash

#preparing keys
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_rsa

#ask user if he ready for sending to git
echo "enter 0 if ready for push to Github/TitovskiySA/Eltex.git"
read $x
if [[ $x == 0 ]]; then
	echo "pushing to github"
	git push git@github.com:TitovskiySA/Eltex.git
	else:
	echo "cancelling sending"
fi
