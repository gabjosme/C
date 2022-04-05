	/*
	Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os
	códigos utilizados são:
	1 - candidato Jose
	2 - candidato Joao
	3 - candidata Maria
	4 - candidata Fatima
	5 - Voto Nulo
	6 - Voto em Branco
	Faça um programa que calcule e mostre:
	a) O total de votos para cada candidato;
	b) O total de votos nulos;
	c) O total de votos em branco;
	d) percentagem de votos nulos sobre o total de votos;
	e) A percentagem de votos em branco sobre o total de votos.
	A entrada de votos só finalizará quando o candidato escolhido for 0 (zero)
	*/

	#include <stdio.h>
	#include <stdlib.h>
	int
	main ()
	{
	  int voto = 0, tot_vot = 0;
	  int vot1=0, vot2=0, vot3=0, vot4=0, vot5=0, vot6=0;
	  int tot_bran=0,tot_nul=0;
	  float perc_branc,perc_nulo;
	  do
	    {
	      printf
		("Codigos para a votacao sao:\n1 - candidato Jose\n2 - candidato Joao\n3 - candidata Maria\n4 - candidata Fatima\n5 - Voto Nulo\n6 - Voto em Branco\n \nQual e o seu voto?\n");
	      scanf ("%d", &voto);
	      switch (voto)
		{
		case 6:
		  tot_vot++;
		  vot6++;
		  break;
		case 5:
		  tot_vot++;
		  vot5++;
		  break;
		case 4:
		  tot_vot++;
		  vot4++;
		  break;
		case 3:
		  tot_vot++;
		  vot3++;
		  break;
		case 2:
		  tot_vot++;
		  vot2++;
		  break;
		case 1:
		  tot_vot++;
		  vot1++;
		  break;
		default:
		  printf ("\nVOTO INVALIDO");
		}
	
	    }
	  while (voto != 0);
	  printf ("\na)O total de votos para o candidato Jose %d",vot1);
	  printf ("\na)O total de votos para o candidato Joao %d",vot2);
	  printf ("\na)O total de votos para o candidato Maria %d",vot3);
	  printf ("\na)O total de votos para o candidato Fatima %d",vot4);
	  printf ("\nb)O total de votos nulos e %d",vot5);
	  printf ("\nc)O total de votos em branco e %d",vot6);
	  perc_nulo=((float)vot5/(float)tot_vot)*100;
	  printf("\nd)O percentual de votos nulos é %.2f%%",perc_nulo);
	  perc_branc=((float)vot6/(float)tot_vot)*100;
	  printf("\ne)O percentual de votos brancos é %.2f%%",perc_branc);
	  system ("pause");
	}
