#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//fun��o do print
	float printcom(float sub) {
			printf ("     __________________________________");
			printf ("\n    |     Sua Comiss�o � ==> R$%.00f     |\n", sub);
			printf ("    |__________________________________|\n");
			system ("\n pause");
			return 0;
			}
int main (){
	setlocale(LC_ALL,"Portuguese");
	float vv, vm, vf,sub,cm,valorpart1;
	//vv valor vendido, vm valormaximo, vf valorfinal, sub � o calculo final, cm valor maximo at� 60k	
	//INICIO DO CODIGO
	vm = 30000,cm = 50000,valorpart1 = 60000;
	printf ("Digite o valor que foi vendido at� o momento: \n"); 
		scanf ("%f", &vv); 
		system ("cls");
	if (vv<=30000){ 
			vf = (vv*0.5)/100;
			printcom(vf);
		}else
			if (vv<=50000){ 
			sub = (((vv-vm)*1)/100)+150; 
			printcom(sub);
			}else
				if (vv<=60000){
				sub = (((vv-cm)*1.5)/100)+350;
				printcom(sub);
				}else
					if (vv>=60000){
					sub = (((vv-valorpart1)*2)/100)+500;
					printcom(sub);
					}
        	}			
	
	


	
				

