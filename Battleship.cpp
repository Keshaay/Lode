#include "Battleship.h"
#include "Zadavani.h"
#include "Herni_rezim.h"

int main()
{
	int hrac1[10][10], hrac2[10][10];
	char rezim;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			hrac1[i][j] = 0;
			hrac2[i][j] = 0;
		}
	}

	while(true)
	{
		printf("\n\n%5c /$$$$$$$              /$$     /$$     /$$                     /$$       /$$          \n", 32);
		printf("%5c| $$__  $$            | $$    | $$    | $$                    | $$      |__/          \n", 32);
		printf("%5c| $$  %c $$  /$$$$$$  /$$$$$$ /$$$$$$  | $$  /$$$$$$   /$$$$$$$| $$$$$$$  /$$  /$$$$$$ \n", 32, 92);
		printf("%5c| $$$$$$$  |____  $$|_  $$_/|_  $$_/  | $$ /$$__  $$ /$$_____/| $$__  $$| $$ /$$__  $$\n", 32);
		printf("%5c| $$__  $$  /$$$$$$$  | $$    | $$    | $$| $$$$$$$$|  $$$$$$ | $$  %c $$| $$| $$  %c $$\n", 32, 92, 92);
		printf("%5c| $$  %c $$ /$$__  $$  | $$ /$$| $$ /$$| $$| $$_____/ %c____  $$| $$  | $$| $$| $$  | $$\n", 32, 92, 92);
		printf("%5c| $$$$$$$/|  $$$$$$$  |  $$$$/|  $$$$/| $$|  $$$$$$$ /$$$$$$$/| $$  | $$| $$| $$$$$$$/\n", 32);
		printf("%5c|_______/  %c_______/   %c___/   %c___/  |__/ %c_______/|_______/ |__/  |__/|__/| $$____/ \n", 32, 92, 92, 92, 92);
		printf("%5c                                                                            | $$      \n", 32);
		printf("%5c                                                                            | $$      \n", 32);
		printf("%5c                                                                            |__/      \n", 32);

		printf("%38cRezim 1 - Singleplayer\n%38cRezim 2 - Multiplayer\n%41cZvoleny rezim: ", 32, 32, 32);
		scanf_s("%c", &rezim); getchar(); rezim = rezim - 48;

		if (rezim == 1)
		{ break; }

		if (rezim == 2) 
		{ break; }

		system("CLS");
	} 

	system("CLS"); 
	system("color 71");

	if (rezim == 1)
	{
		char i = 0;

		zadavaniAutomat(hrac2);
		printf("\n\n\n\n%10cProbiha automaticke rozmisteni\n%10clodi pro pocitac...", 32, 32); Sleep(3000);
		while (true)
		{
			system("CLS"); 
			printf("\n\n\n\n%10cAutomaticke rozmisteni - rezim 1\n%10cManualni rozmisteni - rezim 2\n%10cRezim rozmisteni pro Hrace1: ", 32, 32, 32);
			scanf_s("%c", &i); getchar(); i = i - 48;

			if (i == 1)
			{ zadavaniAutomat(hrac1);
			printf("\n%10cProbiha automaticke rozmisteni\n%10clodi pro Hrace 1...", 32, 32); Sleep(3000); break; }

			if (i == 2)
			{ zadavaniManual(hrac1); break; }
		}
		singleplayer(hrac1, hrac2);
	}

	if (rezim == 2)
	{
		char i = 0;
		while (true)
		{
			system("CLS");
			printf("\n\n\n\n%10cAutomaticke rozmisteni - rezim 1\n%10cManualni rozmisteni - rezim 2\n%10cRezim rozmisteni pro Hrace1: ", 32, 32, 32);
			scanf_s("%c", &i); getchar(); i = i - 48;

			if (i == 1)
			{ zadavaniAutomat(hrac1); 
			printf("\n%10cProbiha automaticke rozmisteni\n%10clodi pro Hrace 1...", 32, 32); Sleep(3000);break; }

			if (i == 2)
			{ zadavaniManual(hrac1); break; }
		}

		while (true)
		{
			system("CLS");
			printf("\n\n\n\n%10cAutomaticke rozmisteni - rezim 1\n%10cManualni rozmisteni - rezim 2\n%10cRezim rozmisteni pro Hrace2: ", 32, 32, 32);
			scanf_s("%c", &i); getchar(); i = i - 48;

			if (i == 1)
			{ zadavaniAutomat(hrac2); 
			printf("\n%10cProbiha automaticke rozmisteni\n%10clodi pro Hrace 2...", 32, 32); Sleep(3000); break; }

			if (i == 2)
			{ zadavaniManual(hrac2); break; }
		}
		multiplayer(hrac1, hrac2);
	}
}