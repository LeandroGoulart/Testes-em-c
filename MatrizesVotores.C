#include <stdio.h>   



int main (){
int mat1[3][2], mat2[3][2], matT[3][4], l, c; 

printf ("\nDigite os numeros para os elementos da matriz 1: \n\n"); //inicio matriz 1
for ( l=0; l<3; l++ ){              // laço de repetição da linha
    for ( c=0; c<2; c++ ){          // laço de repetição da coluna
        printf ("Elemento [%d][%d] =", l, c);
        scanf ("%d", &mat1[l] [c] );
    }
}  //fim matriz 1

printf ("\nDigite os numeros para os elementos da matriz 2: \n\n"); //inicio matriz 1
for ( l=0; l<3; l++ ){              // laço de repetição da linha
    for ( c=0; c<2; c++ ){          // laço de repetição da coluna
        printf ("Elemento [%d][%d] =", l, c);
        scanf ("%d", &mat2[l] [c] );
    }
}  //fim matriz 2

printf("\n\n******************* Resuldato da Matriz ********************* \n\n");
for ( l=0; l<3; l++ ){
    for ( c=0; c<2; c++ ){  
        printf (" | %d |", mat1[l][c] );
    }
    printf ("\n" ); // mostra matriz 1
}


printf("\n\n******************* Resuldato da Matriz 2 ********************* \n\n");
for ( l=0; l<3; l++ ){
    for ( c=0; c<2; c++ ){  
        printf (" | %d |", mat2[l][c] );
    }
    printf ("\n" ); // mostra matriz 2
}


printf("\n\n******************* Matriz composta ordenada ********************* \n\n");

 
int i, Vet[12];

for (i=0; i< 12; i++){
    for ( l=0; l<3; l++ ){
      for ( c=0; c<2; c++ ){  
      printf (" | %d |", mat2[l][c] );
    }
    printf ("\n" ); // mostra matriz 2
} 
    
}


printf(" %d " , Vet);


return 0;
}
