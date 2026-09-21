# Laboratorio 02: Instalación y prueba de xv6

**Estudiante:** Wuill Grover Pillaca Mesares  
**Asignatura:** Sistemas Operativos (IS-380)  

## Parte A: Comandos ejecutados en xv6
![Comandos de xv6](imagenes/parteA_1.png)

## Parte C: Interfaz vs Implementación
![Resultados de grep](imagenes/parteC.png)

### Respuesta de reflexión:
La **interfaz** (definida en `kernel/syscall.h`) asigna un número de llamada al sistema (como `SYS_fork` o `SYS_read`), sirviendo como el contrato estándar para los programas de usuario.  
Por otro lado, la **implementación interna** (en `kernel/sysproc.c` o `kernel/sysfile.c`) contiene el código real que ejecuta la lógica en el núcleo (reservar memoria, duplicar páginas con `uvmcopy()`, etc.). Esto permite modificar el funcionamiento interno del sistema sin alterar la forma en que las aplicaciones invocan la función.
