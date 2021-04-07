#!/bin/bash
# GNU bash Script
n=12321
rev=$(echo $n | rev)
if [ $n -eq $rev ]; then
   echo "Number is a palindrome"
else
   echo " this Number is not palindrome"
fi
