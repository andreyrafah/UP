#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int display(int vlr);
int AcendeLED(int n);
int LeBTN(){


}
//Precisa de 3 botoes um incremeta outro descrementa e outro sart


//Usar theread para rodar switch do diodo, trocando os displays disp um e disp 2

int main (){



}
int AcendeLED(int n){
    int i;

    for(i = n;i >= 0;i--){

        if(i > 9){
            display(floor(i/10));
            display(i%10);
        }else{
           display(0);
           display(i);
        }
        Sleep(1000);

    }

}

int display(int vlr){


switch (vlr){
case 1:
	printf("   \n");
	printf("  |\n");
	printf("  |\n");
	break;
case 2:
	printf(" _ \n");
	printf(" _|\n");
	printf("|_ \n");
	break;
case 3:
	printf(" _ \n");
	printf(" _|\n");
	printf(" _|\n");
	break;
case 4:
	printf("   \n");
	printf("|_|\n");
	printf("  |\n");
	break;
case 5:
	printf(" _ \n");
	printf("|_ \n");
	printf(" _|\n");
	break;
case 6:
	printf(" _ \n");
	printf("|_ \n");
	printf("|_|\n");
	break;
case 7:
	printf(" _ \n");
	printf("  |\n");
	printf("  |\n");
	break;
case 8:
	printf(" _ \n");
	printf("|_|\n");
	printf("|_|\n");
	break;
case 9:
	printf(" _ \n");
	printf("|_|\n");
	printf("  |\n");
	break;
case 0:
	printf(" _ \n");
	printf("| |\n");
	printf("|_|\n");
	break;
default:
    printf("não encontrado ");
}

return 1;

}
