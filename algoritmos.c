#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int opcion;
  while (1) {
    printf("Menú:\n");
    printf("1 \n");
    printf("2 \n");
    printf("3 \n");
    printf("4 \n");
    printf("5 \n");
    printf("Volver\n");
    printf("\n");
    scanf("%d", &opcion);
    switch (opcion) {
      case 1:
      printf("Elegiste opcion 1\n");
      break;
      case 2:
      printf("Elegiste opcion 2\n");
      break
      case 3
      printf("Elegiste opcion 3\n");
      break;
      case 4:
      printf("Elegiste opcion 4\n");
      break;
      case 5:
      printf("Elegiste opcion 5\n");
      break;
      case 6:
      return 0;
      break;
    // if (opcion > 6 || opcion < 0) printf("Son 5 opciones\n");
    // else if (opcion == 1) printf("Elegiste opcion 1\n");
    // else if (opcion == 2) printf("Elegiste opcion 2\n");
    // else if (opcion == 3) printf("Elegiste opcion 3\n");
    // else if (opcion == 4) printf("Elegiste opcion 4\n");
    // else if (opcion == 5) printf("Elegiste opcion 5\n");
    // else if (opcion == 6) {
    //   printf("¿Quiere salir del menú?\n");
    //   scanf("%d\n", &opcion);
    //   printf("1.SI        2.NO\n");
    //   if (opcion == 2)break;
    //   else if (opcion == 1) return 0;
    }
  }
  return 0;
}
