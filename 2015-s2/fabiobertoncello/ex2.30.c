#include<stdio.h>
int main(void){
	int valor1=0;
	printf("informe o valor que sera separado \n");
	scanf("%d",&valor1);
	printf("%d %d %d %d %d \n",(valor1%100000-valor1%10000)/10000,(valor1%10000-valor1%1000)/1000,(valor1%1000-valor1%100)/100,(valor1%100-valor1%10)/10,valor1%10);
	
	

return 0;
}
