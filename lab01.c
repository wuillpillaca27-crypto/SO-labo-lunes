#include <stdio.h>

// Parte A: Definición de la estructura
struct Proceso {
    int pid;
    char nombre[20];
    int prioridad; // 1 (alta) a 5 (baja)
};

// Parte C: Implementación de la función de búsqueda mediante puntero
int buscarMayorPrioridad(struct Proceso *procesos, int n) {
    int indice_mayor = 0;
    for (int i = 1; i < n; i++) {
        // La prioridad más alta es el valor numérico más bajo
        if ((procesos + i)->prioridad < (procesos + indice_mayor)->prioridad) {
            indice_mayor = i;
        }
    }
    return indice_mayor;
}

int main() {
    int n = 5;
    struct Proceso procesos[5];

    // Parte B: Registro de procesos
    printf("--- Registro de %d procesos ---\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nProceso %d:\n", i + 1);
        printf("Ingrese PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Ingrese Nombre: ");
        scanf("%s", procesos[i].nombre);
        printf("Ingrese Prioridad (1 a 5): ");
        scanf("%d", &procesos[i].prioridad);
    }

    // Parte C: Llamada a la función
    int idx = buscarMayorPrioridad(procesos, n);

    // Parte D: Presentación de resultados
    printf("\nProceso de mayor prioridad:\n");
    printf("PID: %d\n", procesos[idx].pid);
    printf("Nombre: %s\n", procesos[idx].nombre);
    printf("Prioridad: %d\n", procesos[idx].prioridad);

    return 0;
}
