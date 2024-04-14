/******************************************************************************

                               Calculadora
                
Autor : Vitor Veiga Silva
Data: 14/04/2024
Detalhes: Soma, divisão, mutiplicação, subtração.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int opcao;
  float n1, n2, res;
  printf ("   Calculadora    ");

  printf ("\nDigite 1 para somar ");
  printf ("\nDigite 2 para subtrair ");
  printf ("\nDigite 3 para multiplicar ");
  printf ("\nDigite 4 para dividir \n");
  scanf ("%d", &opcao);

  printf ("Digite dois numeros para realizar a operação: \n");
  scanf ("%f", &n1);
  scanf ("%f", &n2);

  if (opcao == 1)
	{
	  res = n1 + n2;
	  printf ("A soma é de: %.1f", res);
	}
  if (opcao == 2)
	{
	  res = n1 - n2;
	  printf ("A soma é de: %.1f", res);
	}
  if (opcao == 3)
	{
	  res = n1 * n2;
	  printf ("A mutiplicação é de: %.1f", res);
	}
  if (opcao == 4)
	{
	  res = n1 / n2;
	  printf ("A divisão é de: %.2f", res);

	}
  if (opcao >= 5)
	{
	  printf ("Opção inválida tente novamente!");
	}
}


