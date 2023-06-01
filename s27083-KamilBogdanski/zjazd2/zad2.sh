#!/bin/bash

X=tekst
echo $X
bash
echo $X

X="Tekst 1"
Y="teskt:$X"

echo "$Y"

Y='tekst:$X'

echo "$Y"

Y=tekst:$X

echo "$Y"
