#include "Herni_rezim.h"

void singleplayer(int pole1[10][10], int pole2[10][10])
{
	int vypishrac1[10][10], vypishrac2[10][10];
	int skore_hrace1 = 17, skore_pocitace = 17, a, b;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			vypishrac1[i][j] = 0;
			vypishrac2[i][j] = 0;
		}
	}

	while (true)
	{
		while (true) //Hraje hrac1
		{
			a = 0; b = 0;
			system("CLS"); printf("%18cHrac1%37cPocitac", 32, 32);
			printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 %20c  0 1 2 3 4 5 6 7 8 9 \n", 32, 32);
			for (int i = 0; i < 10; i++)
			{
				printf("%10c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (pole1[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", pole1[i][j]);
					}
				}

				printf("%20c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (vypishrac2[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", vypishrac2[i][j]);
					}
				}
				printf("\n");
			}
			printf("\n%20cZvolte souradnice pro strelbu <format a0>: ", 32);
			scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48;

			if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
			{
				if ((pole2[a][b] > 0) && (pole2[a][b] != 88) && (pole2[a][b] != 48))
				{
					vypishrac2[a][b] = 88; pole2[a][b] = 88;
					printf("%39cZasah!", 32); getchar();
					skore_hrace1--; break;
				}
				if (pole2[a][b] == 0)
				{
					vypishrac2[a][b] = 48; pole2[a][b] = 48;
					printf("%37cMinul si!", 32); getchar();break;
				}
				else
				{
					printf("%23cNa zvolene souradnice si jiz strilel", 32); getchar();
				}
			}
			else
			{
				printf("%23cSouradnice byly zadany ve spatnem formatu", 32); getchar();
			}
		}

		if (skore_hrace1 == 0)
		{
			printf("\n%20cVyhrava Hrac1! Stisknete enter pro dalsi krok", 32);
			getchar(); break;
		};

		while (true) //Hraje pocitac
		{
			a = 0; b = 0;
			srand(time(NULL));
			system("CLS"); printf("%18cHrac1%37cPocitac", 32, 32);
			printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 %20c  0 1 2 3 4 5 6 7 8 9 \n", 32, 32);
			for (int i = 0; i < 10; i++)
			{
				printf("%10c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (pole1[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", pole1[i][j]);
					}
				}

				printf("%20c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (vypishrac2[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", vypishrac2[i][j]);
					}
				}
				printf("\n");
			}

			a = rand() % 10;
			b = rand() % 10;

			if ((pole1[a][b] > 0) && (pole1[a][b] != 88) && (pole1[a][b] != 48))
			{
				vypishrac1[a][b] = 88; pole1[a][b] = 88;
				printf("\n%31cPocitac zasahl tvoji lod!", 32); getchar();
				skore_pocitace--; break;
			}
			if (pole1[a][b] == 0)
			{
				vypishrac1[a][b] = 48; pole1[a][b] = 48;
				printf("\n%34cPocitac minul!", 32); getchar();break;
			}
		}

		if (skore_pocitace == 0)
		{
			printf("\n%18cVyhrava pocitac! Stisknete enter pro dalsi krok", 32);
			getchar(); break;
		}
	}
}

void multiplayer(int pole1[10][10], int pole2[10][10])
{
	int vypishrac1[10][10], vypishrac2[10][10];
	int skore_hrace1 = 17, skore_hrace2 = 17, a, b;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			vypishrac1[i][j] = 0;
			vypishrac2[i][j] = 0;
		}
	}

	while (true)
	{
		while (true) //Hraje hrac1
		{
			a = 0; b = 0;
			system("CLS"); printf("%18cHrac1%37cHrac2", 32, 32);
			printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 %20c  0 1 2 3 4 5 6 7 8 9 \n", 32, 32);
			for (int i = 0; i < 10; i++)
			{
				printf("%10c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (pole1[i][j] == 0)
					{ printf("- "); }
					else
					{ printf("%c ", pole1[i][j]); }
				}

				printf("%20c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (vypishrac2[i][j] == 0)
					{ printf("- "); }
					else
					{ printf("%c ", vypishrac2[i][j]); }
				}
				printf("\n");
			}
			printf("\n%20cZvolte souradnice pro strelbu <format a0>: ", 32);
			scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48;

			if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
			{
				if ((pole2[a][b] > 0) && (pole2[a][b] != 88) && (pole2[a][b] != 48))
				{
					vypishrac2[a][b] = 88; pole2[a][b] = 88;
					printf("%39cZasah!", 32); getchar();
					skore_hrace1--; break;
				}
				if (pole2[a][b] == 0)
				{
					vypishrac2[a][b] = 48; pole2[a][b] = 48;
					printf("%37cMinul si!", 32); getchar();break;
				}
				else
				{
					printf("%23cNa zvolene souradnice si jiz strilel", 32); getchar();
				}
			}
			else
			{ printf("%23cSouradnice byly zadany ve spatnem formatu", 32); getchar(); }
		}
		
		if (skore_hrace1 == 0)
		{
			printf("\n%20cVyhrava Hrac1! Stisknete enter pro dalsi krok", 32);
			getchar(); break;
		}

		system("CLS");
		printf("\n\n\n\n%20cNyni je na rade Hrac2, pro pokracovani stisknete enter", 32);
		getchar();

		while (true) //Hraje hrac2
		{
			a = 0; b = 0;
			system("CLS"); printf("%18cHrac2%37cHrac1", 32, 32);
			printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 %20c  0 1 2 3 4 5 6 7 8 9 \n", 32, 32);
			for (int i = 0; i < 10; i++)
			{
				printf("%10c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (pole2[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", pole2[i][j]);
					}
				}

				printf("%20c%c ", 32, i + 97);
				for (int j = 0; j < 10; j++)
				{
					if (vypishrac1[i][j] == 0)
					{
						printf("- ");
					}
					else
					{
						printf("%c ", vypishrac1[i][j]);
					}
				}
				printf("\n");
			}
			printf("\n%20cZvolte souradnice pro strelbu <format a0>: ", 32);
			scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48;

			if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
			{
				if ((pole1[a][b] > 0) && (pole1[a][b] != 88) && (pole1[a][b] != 48))
				{
					vypishrac1[a][b] = 88; pole1[a][b] = 88;
					printf("%39cZasah!", 32); getchar();
					skore_hrace2--; break;
				}
				if (pole1[a][b] == 0)
				{
					vypishrac1[a][b] = 48; pole1[a][b] = 48;
					printf("%37cMinul si!", 32); getchar();break;
				}
				else
				{
					printf("%23cNa zvolene souradnice si jiz strilel", 32); getchar();
				}
			}
			else
			{
				printf("%23cSouradnice byly zadany ve spatnem formatu", 32); getchar();
			}
		}

		if (skore_hrace2 == 0)
		{
			printf("\n%20cVyhrava Hrac2! Stisknete enter pro dalsi krok", 32);
			getchar(); break;
		}

		system("CLS");
		printf("\n\n\n\n%20cNyni je na rade Hrac1, pro pokracovani stisknete enter", 32);
		getchar();
	}
}