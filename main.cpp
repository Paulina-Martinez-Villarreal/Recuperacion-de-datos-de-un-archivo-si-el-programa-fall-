#include <cstdlib>

#include <cstdio>

#include <cstring> // Añadimos esta librería donde se encuentra strcpy



using namespace std;



int a=5;

int b=3;

char texto[30];

int main()

{



if (a>b){

strcpy(texto,"a es mayor");
printf("a es mayor\n\n\n");
}

else{

strcpy(texto,"b es mayor");
printf("b es mayor\n\n\n");
}



FILE *archivo;

archivo = fopen( "documento.txt", "w");

fprintf(archivo,texto);

system("pause");

return 0;

}
