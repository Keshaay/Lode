#include "Zadavani.h"

void zadavaniAutomat(int pole[10][10])
{
	int i, a, b, c;
	srand(time(NULL));

	do //Rozmisteni letadlove lodi
	{
		a = rand() % 10; b = rand() % 10;
		c = rand() % 2; i = 0;

		//Horizontalni umisteni
		if ((b + 4 < 10) && (c == 0) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0) && (pole[a][b + 3] == 0) && (pole[a][b + 4] == 0))
		{
			for (int j = 0; j < 5; j++)
			{ pole[a][b + j] = 108; i = 1; }
		}

		//Vertikalni umisteni
		if ((a + 4 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0) && (pole[a + 3][b] == 0) && (pole[a + 4][b] == 0))
		{
			for (int j = 0; j < 5; j++)
			{ pole[a + j][b] = 108; i = 1; }
		}
	} while (i == 0);

	do //Rozmisteni bitevni lodi
	{
		a = rand() % 10; b = rand() % 10;
		c = rand() % 2; i = 0;

		//Horizontalni umisteni
		if ((b + 3 < 10) && (c == 0) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0) && (pole[a][b + 3] == 0))
		{
			for (int j = 0; j < 4; j++)
			{ pole[a][b + j] = 98; i = 1; }
		}

		//Vertikalni umisteni
		if ((a + 3 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0) && (pole[a + 3][b] == 0))
		{
			for (int j = 0; j < 4; j++)
			{ pole[a + j][b] = 98; i = 1; }
		}
	} while (i == 0);

	do //Rozmisteni krizniku
	{
		a = rand() % 10; b = rand() % 10;
		c = rand() % 2; i = 0;

		//Horizontalni umisteni
		if ((b + 2 < 10) && (c == 0) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0))
		{
			for (int j = 0; j < 3; j++)
			{ pole[a][b + j] = 107; i = 1; }
		}

		//Vertikalni umisteni
		if ((a + 2 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0))
		{
			for (int j = 0; j < 3; j++)
			{ pole[a + j][b] = 107; i = 1; }
		}
	} while (i == 0);

	do //Rozmisteni ponorky
	{
		a = rand() % 10; b = rand() % 10;
		c = rand() % 2; i = 0;

		//Horizontalni umisteni
		if ((b + 2 < 10) && (c == 0) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0))
		{
			for (int j = 0; j < 3; j++)
			{ pole[a][b + j] = 112; i = 1; }
		}

		//Vertikalni umisteni
		if ((a + 2 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0))
		{
			for (int j = 0; j < 3; j++)
			{ pole[a + j][b] = 112; i = 1; }
		}
	} while (i == 0);

	do //Rozmisteni torpedoborce
	{
		a = rand() % 10; b = rand() % 10;
		c = rand() % 2; i = 0;

		//Horizontalni umisteni
		if ((b + 1 < 10) && (c == 0) && (pole[a][b] == 0) && (pole[a][b + 1] == 0))
		{
			for (int j = 0; j < 2; j++)
			{ pole[a][b + j] = 116; i = 1; }
		}

		//Vertikalni umisteni
		if ((a + 1 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a + 1][b] == 0))
		{
			for (int j = 0; j < 2; j++)
			{ pole[a + j][b] = 116; i = 1; }
		}
	} while (i == 0);
}

void zadavaniManual(int pole[10][10])
{
	int i;
	char a, b, c;

	do //Rozmisteni letadlove lodi
	{
		a = 0, b = 0, c = 0;

		system("CLS");
		printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
		for (int i = 0; i < 10; i++)
		{
			printf("%10c%c ", 32, i + 97);
			for (int j = 0; j < 10; j++)
			{
				if (pole[i][j] == 0)
				{ printf("- "); }
				else
				{ printf("%c ", pole[i][j]); }
			}
			printf("\n");
		}

		printf("\n%7cZvolte pocatecni souradnice\n%7cletadlove lodi, velikost 5 <format a0>: ", 32, 32);
		scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48; i = 0;

		if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
		{
			printf("\n%7cZvolte 1 pro horizonzalni umisteni,\n%7c2 pro vertiklani umisteni: ", 32, 32);
			scanf_s("%c", &c); getchar(); c = c - 48;

			//Horizontalni umisteni
			if ((b + 4 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0) && (pole[a][b + 3] == 0) && (pole[a][b + 4] == 0))
			{
				for (int j = 0; j < 5; j++)
				{
					pole[a][b + j] = 108; i = 1;
				}
			}

			//Vertikalni umisteni
			if ((a + 4 < 10) && (c == 2) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0) && (pole[a + 3][b] == 0) && (pole[a + 4][b] == 0))
			{
				for (int j = 0; j < 5; j++)
				{
					pole[a + j][b] = 108; i = 1;
				}
			}
		}
	} while (i == 0);

	do //Rozmisteni bitevni lodi
	{
		a = 0, b = 0, c = 0;

		system("CLS");
		printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
		for (int i = 0; i < 10; i++)
		{
			printf("%10c%c ", 32, i + 97);
			for (int j = 0; j < 10; j++)
			{
				if (pole[i][j] == 0)
				{ printf("- "); }
				else
				{ printf("%c ", pole[i][j]); }
			}
			printf("\n");
		}

		printf("\n%7cZvolte pocatecni souradnice\n%7cbitevni lodi, velikost 4 <format a0>: ", 32, 32);
		scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48; i = 0;

		if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
		{
			printf("\n%7cZvolte 1 pro horizonzalni umisteni,\n%7c2 pro vertiklani umisteni: ", 32, 32);
			scanf_s("%c", &c); getchar(); c = c - 48;

			//Horizontalni umisteni
			if ((b + 3 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0) && (pole[a][b + 3] == 0))
			{
				for (int j = 0; j < 4; j++)
				{
					pole[a][b + j] = 98; i = 1;
				}
			}

			//Vertikalni umisteni
			if ((a + 3 < 10) && (c == 2) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0) && (pole[a + 3][b] == 0))
			{
				for (int j = 0; j < 4; j++)
				{
					pole[a + j][b] = 98; i = 1;
				}
			}
		}
	} while (i == 0);

	do //Rozmisteni krizniku
	{
		a = 0, b = 0, c = 0;

		system("CLS");
		printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
		for (int i = 0; i < 10; i++)
		{
			printf("%10c%c ", 32, i + 97);
			for (int j = 0; j < 10; j++)
			{
				if (pole[i][j] == 0)
				{ printf("- "); }
				else
				{ printf("%c ", pole[i][j]); }
			}
			printf("\n");
		}

		printf("\n%7cZvolte pocatecni souradnice\n%7ckrizniku, velikost 3 <format a0>: ", 32, 32);
		scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48; i = 0;

		if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
		{
			printf("\n%7cZvolte 1 pro horizonzalni umisteni,\n%7c2 pro vertiklani umisteni: ", 32, 32);
			scanf_s("%c", &c); getchar(); c = c - 48;

			//Horizontalni umisteni
			if ((b + 2 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0))
			{
				for (int j = 0; j < 3; j++)
				{
					pole[a][b + j] = 107; i = 1;
				}
			}

			//Vertikalni umisteni
			if ((a + 2 < 10) && (c == 2) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0))
			{
				for (int j = 0; j < 3; j++)
				{
					pole[a + j][b] = 107; i = 1;
				}
			}
		}
	} while (i == 0);

	do //Rozmisteni ponorky
	{
		a = 0, b = 0, c = 0;

		system("CLS");
		printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
		for (int i = 0; i < 10; i++)
		{
			printf("%10c%c ", 32, i + 97);
			for (int j = 0; j < 10; j++)
			{
				if (pole[i][j] == 0)
				{ printf("- "); }
				else
				{ printf("%c ", pole[i][j]); }
			}
			printf("\n");
		}

		printf("\n%7cZvolte pocatecni souradnice\n%7cponorky, velikost 3 <format a0>: ", 32, 32);
		scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48; i = 0;

		if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
		{
			printf("\n%7cZvolte 1 pro horizonzalni umisteni,\n%7c2 pro vertiklani umisteni: ", 32, 32);
			scanf_s("%c", &c); getchar(); c = c - 48;

			//Horizontalni umisteni
			if ((b + 2 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a][b + 1] == 0) && (pole[a][b + 2] == 0))
			{
				for (int j = 0; j < 3; j++)
				{
					pole[a][b + j] = 112; i = 1;
				}
			}

			//Vertikalni umisteni
			if ((a + 2 < 10) && (c == 2) && (pole[a][b] == 0) && (pole[a + 1][b] == 0) && (pole[a + 2][b] == 0))
			{
				for (int j = 0; j < 3; j++)
				{
					pole[a + j][b] = 112; i = 1;
				}
			}
		}
	} while (i == 0);

	do //Rozmisteni torpedoborce
	{
		a = 0, b = 0, c = 0;

		system("CLS");
		printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
		for (int i = 0; i < 10; i++)
		{
			printf("%10c%c ", 32, i + 97);
			for (int j = 0; j < 10; j++)
			{
				if (pole[i][j] == 0)
				{ printf("- "); }
				else
				{ printf("%c ", pole[i][j]); }
			}
			printf("\n");
		}

		printf("\n%7cZvolte pocatecni souradnice\n%7ctorpedoborce, velikost 2 <format a0>: ", 32, 32);
		scanf_s("%c", &a); scanf_s("%c", &b); getchar(); a = a - 97; b = b - 48; i = 0;

		if (((a >= 0) && (a <= 9)) && ((b >= 0) && (b <= 9)))
		{
			printf("\n%7cZvolte 1 pro horizonzalni umisteni,\n%7c2 pro vertiklani umisteni: ", 32, 32);
			scanf_s("%c", &c); getchar(); c = c - 48;

			//Horizontalni umisteni
			if ((b + 1 < 10) && (c == 1) && (pole[a][b] == 0) && (pole[a][b + 1] == 0))
			{
				for (int j = 0; j < 2; j++)
				{
					pole[a][b + j] = 116; i = 1;
				}
			}

			//Vertikalni umisteni
			if ((a + 1 < 10) && (c == 2) && (pole[a][b] == 0) && (pole[a + 1][b] == 0))
			{
				for (int j = 0; j < 2; j++)
				{
					pole[a + j][b] = 116; i = 1;
				}
			}
		}
	} while (i == 0);

	system("CLS");
	printf("\n\n%10c  0 1 2 3 4 5 6 7 8 9 \n", 32);
	for (int i = 0; i < 10; i++)
	{
		printf("%10c%c ", 32, i + 97);
		for (int j = 0; j < 10; j++)
		{
			if (pole[i][j] == 0)
			{ printf("- "); }
			else
			{ printf("%c ", pole[i][j]); }
		}
		printf("\n");
	}

	printf("\n%9cKonecne rozmisteni lodi\n%12cLetadlova lod - l\n%13cBitevni lod - b\n%15cKriznik - k\n%15cPonorka - p\n%12cTorpedoborec - t", 32, 32, 32, 32, 32, 32);
	getchar();
}