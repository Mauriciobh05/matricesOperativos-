#####################################################################
# Makefile: automatización de compilación
# Nombre: Mauricio Beltrán Huertas
# Fecha: 12/08/2025
#####################################################################

GCC = gcc
CFLAGS = -Wall -O2
PROGRAMAS = generalMM

all: $(PROGRAMAS)

generalMM: generalMM.c
	$(GCC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGRAMAS) *.o
