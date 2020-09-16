# Esto es un comentario
# @: target
# ^: todas las dependencias
# <: la primera dependencia

#target: dependencias sdf sdf sdf
#	instruccion para crear el target

all: fig.pdf

%.o: %.cpp
	g++ -std=c++17 $< -o $@

#datos.txt: legendre.o
#	./$< > $@

#datos.txt: random.o
#	./$< > $@

datos.txt: dist.o
	./$< > $@

fig.pdf: plot.py datos.txt
	python3 $<

