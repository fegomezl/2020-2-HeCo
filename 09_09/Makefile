# Esto es un comentario
# @: target
# ^: todas las dependencias
# <: la primera dependencia

#target: dependencias sdf sdf sdf
#	instruccion para crear el target

all: fig.pdf

suma.out: suma.cpp
	g++ suma.cpp -o suma.out

datos.txt: suma.out
	./suma.out > datos.txt

fig.pdf: plot.py datos.txt
	python3 plot.py
