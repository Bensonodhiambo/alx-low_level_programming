#!/bin/bash
gcc -c *.c -fpic && gcv *o -shared -o liball.so
