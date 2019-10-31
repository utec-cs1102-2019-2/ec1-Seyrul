#include "Estado_animo.h"
#include "comida.h"

void Estado_animo::calcular(comida alimento) {
    puntaje+=(alimento.get_puntos());
}