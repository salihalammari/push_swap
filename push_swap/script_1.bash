#! /usr/bin/env bash
RED="\e[31m";
GREEN="\e[32m";
ENDCOLOR="\e[0m";
KO="KO";

if [ -z $2 ]
then
	echo "NO MAX steps"
	exit
else
	max_steps=$2;
fi
make
while [ 1 ]
do 
	rand=`ruby -e "puts (-1000..10000).to_a.shuffle.sample($1).join(' ')"`;
	num=$(./push_swap $rand | grep -E "^(sa|pa|ra|sb|pb|rb|rra|rrb)" | wc -l);
	is_ok=$(./push_swap $rand | ./checker_OS $rand);
	if [[ $is_ok == *"KO"* ]]
	then
		echo "$(tput setaf 1)ERROR: The Numbers |$rand| are unstored $(tput sgr0)";
		exit;
	elif [[ $is_ok == *"Error"* ]]
	then
		echo "$(tput setaf 1)ERROR happend while storing following numbers |$rand| $(tput sgr0)";
		exit;
	fi
	if [ $num -ge $max_steps ]
	then
		echo "$(tput setaf 1)ERROR: |$rand| sorted in '$num' instead of '$max_steps' $(tput sgr0)";
		exit;
	fi
	echo -e "$(tput setaf 2)$1 numbers sorted in : $num \r\t\t\t\t $is_ok$(tput sgr0)";
done
