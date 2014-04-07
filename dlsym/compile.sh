#!/bin/sh
gcc -fPIC -shared -export-dynamic libsomelibrary.c -o libsomelibrary.so
gcc -fPIC -shared -export-dynamic libsomelibrary2.c -o libsomelibrary2.so
gcc -Wl,-rpath=. -ldl -g loading.c -o loading
gcc -Wl,-rpath=. -L. -lsomelibrary -g linking.c -o linking
