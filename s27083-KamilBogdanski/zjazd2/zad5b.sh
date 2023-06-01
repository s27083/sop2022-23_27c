#!/bin/bash

text=$1

# Pierwszy znak z argumentu
first_char=${text:0:1}
echo "Pierwszy znak: $first_char"

# Ostatni znak z argumentu
last_char=${text: -1}
echo "Ostatni znak: $last_char"

# Zamiana tekstu SOP na formatowany tekst


echo  -e "${text//SOP/\\e[32mSOP\\e[0m}"

