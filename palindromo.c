/*
 ============================================================================
 Name        : pjr_palindromo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char palavra[100];
	int i, j, tamanho;
	int palindromo = 1;

	printf("Digite uma palavra: ");
	fflush(stdout);
	scanf("%s", palavra);
	tamanho = strlen(palavra);

	// verificar se e palindromo
	for(i = 0, j = tamanho - 1; i < j; i++, j--){
		printf("i: %c\n", palavra[i]);
		printf("j: %c\n", palavra[j]);
		if(palavra[i] != palavra [j]){
			palindromo = 0;
			break;
		}
	}
	if(palindromo) {
		printf("\nA palavra é um palíndromo.\n"); //ARARA OVO OSSO //SOCORRO SUBI NO ONIBUS EM MARROCOS
	} else {
		printf("\nA palavra não é um palíndromo.\n");
	}

	return 0;
}

// palindromo resolução 2

/*
 ============================================================================
 Name        : pjr_palindromo.c
 Author      :  
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[], int left, int right){
    return(left >= right) ? 1 : (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
 }
    int isPalindrome2(char str[], int left, int right){
        if (left >= right)
        return 1;
        
        return isPalindrome2(str, left + 1, right - 1);
    }
int main(void){
    char palavra[100];
    printf("Digite uma palavra:  ");
    fflush(stdout);
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    printf("%d", tamanho);
    if (isPalindrome(palavra, 0, tamanho - 1)) { //verificar se é palindromo
    printf(" É um palindromo\n");
}else{
    printf(" Não é palindromo\n");
}

return 0;

}



