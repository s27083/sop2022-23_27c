FILE=config.cfg

if [[ -f $FILE ]];
then sh ./${FILE};
elif [[ -n $1 ]];
then sh ./${1};
else echo "blad nie znalzeiono albo podano pliku";

fi

