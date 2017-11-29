#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alumnos.h"

int main(int argc, const char * argv[]) {
    int opcion=0;  // opcion del menu seleccionada
    int cantidad=0; // para usar en el case 1, cantidad de alumnos a crear
    int j=0; // uso general de los for
    int alumnoEliminar=0;
    int autoguardado=0;
    
    system("color F0");
    printf("Programa de alumnos!\n");
    do {
        opcion=menu();
        //system("clear"); // clear en *NIX clr en windows
        //Aqui va la logica principal
        switch (opcion) {
            case 1:
                 printf("Crear una nueva lista de alumnos\n");
                 printf("øCuantos alumnos quieres crear?:");
                 scanf("%d",&cantidad);
                 for(j=0;j<cantidad;j++){
                   printf("Capturando datos del alumno %d\n",j+1);
                   nuevoAlumno();
                 }
                break;
            case 2:
                printf("Guardar lista al archivo\n");
                grabarRegistros(listaAlumnos,indiceAlArreglo);
                break;
            case 3:
                printf("Leer la lista desde el archivo\n");
                indiceAlArreglo=registrosEnArchivo();
                leerRegistros(indiceAlArreglo);
                break;
            case 4:
                printf("Mostrar todos los datos de la lista\n");
                imprimirLista();
                break;
            case 5:
            	 printf("Agregar alumno\n");
            	 agregar();
				 grabarRegistros(listaAlumnos,indiceAlArreglo);
				 printf("Alumno guardado exitosamente!");
                break;
            case 6:
                printf("Calcular promedio\n");
                promedio();
                break;
            case 7:
                printf("Buscar alumno por nombre\n");
                buscarnom();
                break;
            case 8:
                printf("Buscar alumno por edad\n");
                buscared();
                break;
            case 9:
                printf("Ingrese el numero de lista del alumno a eliminar: "); 
				scanf("%d", &alumnoEliminar);
                eliminar(listaAlumnos, &indiceAlArreglo, alumnoEliminar);
                grabarRegistros(listaAlumnos,indiceAlArreglo);
				printf("Usted acaba de eliminar un alumno.\n");
                break;      
            case 10:
            modificar();
            break;   
            case 11:
                printf("Alumnos con promedios aprobatorios\n");
                aprobados();
            break;
            case 12:
                printf("Alumnos con promedios reprobatorios\n");
				reprobados();
            break;
            default:
                printf("Opcion no valida\n");
                break;
        }

    } while (opcion != 0);
    return 0;
}
