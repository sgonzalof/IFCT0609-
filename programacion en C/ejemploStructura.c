struct LISTA{
    int tam;
    char cadena[50];
}var_lista;
struct nodo{
    int tam;
    float vector[3];
    struct nodo *siguiente;
} n;

enum DIAS{lunes, martes=3, miercoles, jueves=100, viernes } dias_semana;


typedef int entero;
typedef struct{
    unsigned codigo;
    char nombre[40];
    char apellido[40];
}cliente;