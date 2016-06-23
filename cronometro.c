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
    GPIOWrite(a,LOW);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 2:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 3:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 4:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 5:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 6:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 7:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 8:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 9:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
case 0:
    GPIOWrite(a,HIGH);
    GPIOWrite(b,LOW);
    GPIOWrite(c,LOW);
    GPIOWrite(d,LOW);
    GPIOWrite(e,LOW);
    GPIOWrite(f,LOW);
    GPIOWrite(g,LOW);	
	break;
default:
    printf("não encontrado ");
}

return 1;

}
