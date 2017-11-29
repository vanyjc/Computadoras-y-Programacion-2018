

#define MAX 200
#ifndef alumnos_h
#define alumnos_h
struct alumnos
{
    int edad;
    char nombre[120];
    char genero[10];
    char carrera[50];
    char nCuenta[10];
    float promedio;
};
typedef struct alumnos ALUMNO;
int indiceAlArreglo=0; // esta variable global se usarÂ· para almacenar el indice del ultimo alumno ingresado al arreglo.
ALUMNO listaAlumnos[MAX]; // declaraciÃ›n de un arreglo de alumnos de 200 elementos


/**  Funcion insertarAlumno
 *
 * Descripción:
 *   Funcion para insertar al arreglo un nuevo alumno,
 * Entrada:
 *     la función  recibe un alumno "al" de entrada.
 * LÛgica interna:
 *     Verifica que el indice este en el rango adecuado, entre 0 y MAX.
 *     de cumplirse ingresa el alumno al arreglo e incrementa el indice general
 * Valor de retorno:
 *     No regresa nada.
 */
void insertarAlumno(ALUMNO al){
    if (indiceAlArreglo >= 0 && indiceAlArreglo < MAX) { // verificamos que inidice este en los rangos correctos
        listaAlumnos[indiceAlArreglo]=al;
        indiceAlArreglo++;
    }else{
        printf("El indice apunta fuera del arreglo, favor de revisar la lógica");
    }
}

/** Funcion nuevoAlumno
 * DescripciÛn:
 *   Funcion para capturar los datos desde teclado de un nuevo alumno,
 * Entrada:
 *     la funciÛn no recibe ningun parámetro de entrada.
 * Lógica interna:
 *     Crea una variable temporal del tipo alumno y se obtienen los datos desde el teclado.
 *     TambÌen se agrega el alumno al arreglo
 * Valor de retorno:
 *     Regreza la variable temporal de tipo ALUMNO con los datos llenos.
 */
ALUMNO nuevoAlumno(){
    ALUMNO tmp;
    printf("Introduce la edad:");
    scanf("%d",&tmp.edad);
    printf("Introduce el genero [M o F]:");
    scanf(" %s",&tmp.genero);   // El espacio antes del %c es para que ignore espacios en blanco
    printf("Introduce el nombre:");
    scanf("%*c%[^\n]",tmp.nombre);
    printf("Introduce Carrera:");
    scanf("%*c%[^\n]",tmp.carrera);
    printf("Introduce numero de cuenta:");
    scanf("%*c%[^\n]",tmp.nCuenta);
    printf("Introduce tu promedio:");
    scanf("%f",&tmp.promedio);
    /*
     * Aqui agregamos al alumno al arreglo e incrementamos el Ìndice para que apunte al siguiente elementos
     */
    insertarAlumno(tmp);
    return tmp;
}
/** funcion imprimeAlumno
 * DescripciÛn:
 *   Funcion para imprimir en pantalla los datos de un solo alumno,
 * Entrada:
 *     la funciÛn  recibe la variable alumno a ser impresa.
 * LÛgica interna:
 *     SÛlo imprime cada uno de los campos
 * Valor de retorno:
 *     No regresa nada
 */
void imprimeAlumno(ALUMNO al){
    printf("\tNombre:%s\n",al.nombre);
    printf("\tEdad:%d\n",al.edad);
    printf("\tGenero:%s\n",al.genero);
    printf("\tCarrera:%s\n",al.carrera);
    printf("\tNumero de Cuenta:%s\n",al.nCuenta);
    printf("\tPromedio:%.2f\n",al.promedio);
    printf("+---------------------------------+\n\n");
}


/** funcion imprimirLista
 * DescripciÛn:
 *   Funcion para imprimir en pantalla TODOS los datos del arreglo.
 * Entrada:
 *     la funciÛn NO recibe parametros de entrada.
 * LÛgica interna:
 *     en un for recorre el arreglo hasta el indiceAlArreglo que es el que almacena el tope actual
 * Valor de retorno:
 *     No regresa nada
 */
void imprimirLista(){
    int j=0;
    for (j = 0; j < indiceAlArreglo; j++) {
        printf("+--------- # de lista: %d ---------+*\n",j+1);
        imprimeAlumno(listaAlumnos[j]);
    }
}



int menu(){
    int opcion=0;
    printf("\n----------- Menú para la aplicacion de BD para alumnos ---------\n");
    printf("(1) Crear lista.\n");
    printf("(2) Guardar a archivo.\n");
    printf("(3) Leer desde archivo.\n");
    printf("(4) Mostrar lista.\n");
    printf("(5) Agregar alumno. \n");
    printf("(6) Obtener promedio de alumnos.\n");
    printf("(7) Buscar alumno por nombre. \n");
    printf("(8) Buscar alumno por edad. \n");
    printf("(9) Eliminar alumno. \n");
    printf("(10) Modificar datos \n");
    printf("(11) Mostrar alumnos aprobados \n");
    printf("(12) Mostrar alumnos reprobados \n");
    printf("(0) SALIR\n");
    printf("\n\nElige una opcion:");
    scanf("%d",&opcion);

    return opcion;
}



/**
Manejo de archivos
*/

/*
 Funcion para grabar un ARREGLO DE REGISTROS
 en el archivo Evaluaciones.dat
 */
void grabarRegistros(ALUMNO r[], int tam){
    FILE *ptrF;

    if((ptrF=fopen("Evaluaciones.dat","w"))==NULL){
        printf("el archivo no se puede abrir\n");
    }else{
        fwrite(r,sizeof(ALUMNO),tam,ptrF);
    }

    fclose(ptrF);
}

/*
 Funcion para LEER  REGISTROs
 en el archivo Evaluaciones.dat
 */
void leerRegistros(int tam){

    FILE *ptrF;

    if((ptrF=fopen("Evaluaciones.dat","rb"))==NULL){
        printf("el archivo no se puede abrir\n");
    }
    else{
        //for /*(int i=0;i<tam;i++)*/
        fread(listaAlumnos,sizeof(ALUMNO),tam,ptrF);
    }

    fclose(ptrF);
}

/**
 *
 * Regresa el numero de registros almacenados en el archivo
 *
 */
int registrosEnArchivo(){
    FILE *ptrF;
    int cont=0;
    ALUMNO  basura;
    if((ptrF=fopen("Evaluaciones.dat","rb"))==NULL){
        printf("el archivo no se puede abrir\n");
    }
    else{
        while(!feof(ptrF)){
            if (fread(&basura,sizeof(ALUMNO),1,ptrF))
                cont++;
        }

    }
    fclose(ptrF);
    return cont;
}

void agregar(){
	
	if(indiceAlArreglo<MAX){
        nuevoAlumno();
	}else{
		printf("No hay espacio");
		}
}

void promedio(){
	float sumaCalif=0;
	int j=0;
	
	for (j=0;j<indiceAlArreglo;j++){
		
		
                	sumaCalif+=(listaAlumnos[j].promedio);
				}			
	printf("El promedio del grupo es: %f",sumaCalif/(indiceAlArreglo));
}

void buscarnom(){
	int j;
	char nombreABuscar[100];
	
	printf("Dame el nombre a buscar: ");
    scanf("%*c%[^\n]",&nombreABuscar);
        for(j=0;j<indiceAlArreglo;j++){
        	if(strcmp(nombreABuscar,listaAlumnos[j].nombre)==0){
          	imprimeAlumno(listaAlumnos[j]);
					}
				}
}

void buscared(){
	int j;
	int edadABuscar;
	
	printf("Dame la edad a buscar: ");
    scanf("%d",&edadABuscar);
                for(j=0;j<indiceAlArreglo;j++){
                	if((listaAlumnos[j].edad)==edadABuscar){
                		imprimeAlumno(listaAlumnos[j]);
					}
				}
}

void eliminar(ALUMNO listaAlumnos[MAX], int *indiceAlArreglo, int alumnoEliminar){
    
	int j;

    for(j=(alumnoEliminar-1); j<*indiceAlArreglo-1; j+=1){
        listaAlumnos[j]= listaAlumnos[j+1];
    }
    *indiceAlArreglo-=1;
}

void listamod() { 
  printf("1) Edad\n");
  printf("2) Genero\n" );
  printf("3) Nombre\n" );
  printf("4) Carrera\n" );
  printf("5) Numero de cuenta\n");
  printf("6) Promedio\n" );
  }

void modificar(){
	int alumno=0;
    int op=0;
    int temporal=0;
    float temp=0;
    char cambiaNombre[120]; 
    char cambiaGenero[10]; 
    char cambiaCarrera[50]; 
    char cambiaNCuenta[15]; 
				
				printf("Numero de lista del alumno que quieres modificar: \n");
            	scanf("%d",&alumno);
            	alumno=alumno-1;
            	listamod();
            	imprimeAlumno(listaAlumnos[alumno]);
            	scanf("%d", &op );
            	switch (op) {
                case 1:
                        printf("Vas a modificar edad\n ¿Que edad vas a poner? " );
                        scanf("%d", &temporal);
                        listaAlumnos[alumno].edad=temporal;
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;

                case 2:
                        printf ("Vas a modificar genero\n Que genero vas a poner?.  ", listaAlumnos[alumno]);
                        scanf ("%s",&cambiaGenero );
                        strcpy (listaAlumnos[alumno].genero, cambiaGenero);
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;
                case 3:
                        printf("Vas a modificar nombre\n que nombre vas a poner? ");
                        scanf("%s", &cambiaNombre);
                        strcpy (listaAlumnos[alumno].nombre, cambiaNombre);
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;
                case 4:
                        printf("Vas a modificar la carrera\n Que carrera vas a poner?");
                        scanf ("%s", &cambiaCarrera);
                        strcpy (listaAlumnos[alumno].carrera, cambiaCarrera);
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;
                case 5:
                        printf("Vas a modificar el Numero de Cuenta\n Que numero de cuenta vas a poner?");
                        scanf ("%s", &cambiaNCuenta);
                        strcpy (listaAlumnos[alumno].carrera, cambiaNCuenta);
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;
                case 6:
                        printf("Vas editar el promedio\n Que promedio vas a poner? ");
                        scanf("%f", &temp);
                        listaAlumnos[alumno].promedio=temp;
                        imprimeAlumno(listaAlumnos[alumno]);
                        break;
            }
	
}

void aprobados(){
	int j;
	for(j=0;j<indiceAlArreglo;j++){
        if(listaAlumnos[j].promedio>5){
		    printf("El alumno %s con numero de lista %d esta APROBADO\n",listaAlumnos[j].nombre,j+1);
		}	
				}
	
}

void reprobados(){
	int j;
	for(j=0;j<indiceAlArreglo;j++){
        if(listaAlumnos[j].promedio<6){
       		printf("El alumno %s con numero de lista %d esta REPROBADO\n",listaAlumnos[j].nombre,j+1);
		}	
	}
}
#endif /* alumnos_h */
