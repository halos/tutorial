#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Funcion que se encarga de la E/S 
 */
int ent_sal(void){
	int a;
	
	scanf("%d",&a);
	printf("Num: %d\n",a);
}

int main(int argc,char** argv)
{

	int i,j;
	
	for(i=0; i < 10; i++)
		j = i;

	return 0;

}

