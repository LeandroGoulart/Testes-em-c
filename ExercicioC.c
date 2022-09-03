#include <stdio.h>   
#include <string.h>



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

 
int i=0, j=6, k ,  vet[12];        
 
for ( l=0; l<3; l++ ){             // passagem de matriz pra vetor 
    for ( c=0; c<2; c++ ){  
        vet[i] = mat1[l][c];
        vet[j] = mat2[l][c];
        i++, j++;
    }
}
/*
for (k=0 ; k<j; k++){               //print vetor ordenado
    printf (" ( %d )",vet[k]);
}
*/
for (i=0; i<12; i++){
    for (j=i; j<12; j++){
        if (vet[i]>vet[j]){         //ordenação vetor
              k     =vet[i];
            vet[i]  =vet[j];
            vet[j]  =k;
        }
    }
}

/*
for (i=0; i<12; i++){
    printf("\nNumero  %d  =  %d \n",i,vet[i]);
}
*/
int count = 0;
for ( l=0; l<3; l++ ){             // passagem de vetor para matriz
    for ( c=0; c<4; c++ ){  
        matT[l][c] = vet[count];
        count++;
    }
}

for ( l=0; l<3; l++ ){
    for ( c=0; c<4; c++ ){  
        printf (" | %d |", matT[l][c] );
    }
    printf ("\n" ); // mostra matriz total
}


system("pause");
return 0;
}