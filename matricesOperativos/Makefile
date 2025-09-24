#####################################################################
# Makefile: automatización de compilación
# Nombre: Mauricio Beltrán Huertas
# Fecha: 12/08/2025
#####################################################################

GCC = gcc #  se define cual compilador se va a usar 
CFLAGS = -Wall -O2 #se activan todas las advertencias 
PROGRAMAS = mod_BeltranM1 # se define el nombre del ejecutable final 

all: $(PROGRAMAS) # regla fundamental y es que con el make compila el programa 

mod_BeltranM1: mod_BeltranM1.c modulo.c 
        $(GCC) $(CFLAGS) mod_BeltranM1.c modulo.c -o $@ #se compilan los .c y genera el ejecutable 

clean:
        rm -f $(PROGRAMAS) *.o # se eliminan los ejecutables y los archivos generados 
