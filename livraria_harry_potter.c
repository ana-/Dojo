#include<stdio.h>
float melhor_desc(int liv  ) {
	float tot;
	float desc[]={0.05, 0.1, 0.15, 0.2 };
	if (liv >=5) {
		
			if (liv % 2 == 0) {
				tot = (liv / 2)*42*desc[(liv / 2) - 2];
				tot *= 2;
			}
			else {
				tot = 5 * 42 * desc[3] + 2 * 42 * desc[0];
			}
		}
	else {
		if (liv > 1)
			tot = liv * 42 * desc[liv - 2];
		else
			tot = 0;
	}
	return tot;
	}
int main(void) {
	int livros;
	float desconto, semDesconto, comDesconto;
	//printf(" Digite a quantidade de livros: ");
	//scanf_s("%d", &livros);
	for (livros = 1; livros < 9; livros++) {

		desconto = melhor_desc(livros);

		semDesconto = livros * 42;
		comDesconto = (livros * 42 - desconto);


		printf("\nO melhor desconto sera de %.2f\npreco antes do desconto: %.2f \nPreco depois do desconto: %.2f\n", desconto, semDesconto, comDesconto);
	}
	return 0;

}

