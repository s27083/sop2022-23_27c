#!/bin/bash




if [[ ${0: -3} == ".sh" ]]; then
	echo "plik .sh";
else 
	mv $0 ${0}.sh
fi
