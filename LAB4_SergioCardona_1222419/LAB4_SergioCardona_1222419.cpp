// LAB4_SergioCardona_1222419.cpp 


#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <ctime>


using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

// Variables
int x;
int Tortuga = 1;
int Libre = 1;



int main()
{
	
	// punteros a las posciones en la carrera
	int* ptrT = &Tortuga;
	int* ptrH = &Libre;


	cout << "   ¡BANG! \n";
	cout << "  ¡Y ARRANCAN! \n";

	while (Tortuga < 70 && Libre < 70)
	{
		srand(time(0)); // Genera nuevos numeros cada vez que inicie el programa
		x = 1 + rand() % 10;
		sleep_for(seconds(1));

		// tortuga
		if (x <= 5)
		{
			*ptrT += 3;

			cout << "\n La tortuga esta en el esacalon: " << *ptrT;
			cout << "    Paso valoz de la tortuga. Porcentaje de tiempo: 50%\n\n";

			// Liebre

			if (x >= 1 && x <= 2)
			{
				*ptrH += 0;

				cout << "\n La liebre esta en el esacalon: " << *ptrH;
				cout << "     La liebre duerme.   Porcentaje de tiempo: 20% \n\n";
			}
			// Liebre
			if (x >= 3 && x <= 4)
			{
				*ptrH += 9;

				cout << "\n La liebre esta en el esacalon: " << *ptrH;
				cout << "     Gran salto de la liebre.   Porcentaje de tiempo: 20% \n\n";
			}
		}
		// Liebre
		if (x == 5)
		{
			*ptrH -= 12;

			if (*ptrH < 0) // Evitar que genere posiciones negativas
			{
				*ptrH = 1;
				cout << " \nGran resbalon de la Liebre.   Porcentaje de tiempo: 10%        ";
				cout << " La liebre esta en el punto de salida otra vez :(\n\n";
			}
			else
			{
				cout << "\n La liebre esta en el esacalon: " << *ptrH;
				cout << "     Gran resbalon de la Liebre.   Porcentaje de tiempo: 10% \n\n";
			}

			
		}

		//Tortuga
		if (x >= 6 && x <= 7)
		{
			*ptrT -= 6;

			if (*ptrT < 0) // Evitar que genere posiciones negativas
			{
				*ptrT = 1;
				cout << "\nResbalon de la tortuga. Porcentaje de tiempo: 20%        ";
				cout << "La tortuga esta en el punto de salida otra vez :(\n\n";
			}
			else
			{
				cout << "\n La tortuga esta en el esacalon: " << *ptrT;
				cout << "     Resbalon de la tortuga. Porcentaje de tiempo: 20%\n\n";
			}

			
		}

		//Liebre
		if (x >= 6 && x <= 8)
		{
			*ptrH += 1;

			cout << "\n La liebre esta en el esacalon: " << *ptrH;
			cout << "     Salto pequenio de la Liebre.   Porcentaje de tiempo: 20% \n\n";
		}

		// Tortuga
		if (x >= 8 && x <= 10)
		{
			*ptrT += 1;

			cout << "\n La tortuga esta en el esacalon: " << *ptrT;
			cout << "       Paso lento de la tortuga. Porcentaje de tiempo: 30% \n\n";
		}

		//Liebre
		if (x >= 9 && x <= 10)
		{
			*ptrH -= 2;

			if (*ptrH < 0)// Evitar que genere posiciones negativas
			{
				*ptrH = 1;
				cout << "\nSalto pequenio de la Liebre.   Porcentaje de tiempo: 20%      ";
				cout << "La liebre esta en el punto de salida otra vez :(\n\n";
			}

			else
			{
				cout << "\n La liebre esta en el esacalon: " << *ptrH;
				cout << "     Salto pequenio de la Liebre.   Porcentaje de tiempo: 20% \n\n";
			}
			
		}

		if (*ptrH == *ptrT)
		{
			cout << "\n OUCH!!!!!";
		}
	}

	if (Tortuga >= 70)
	{
		cout << "\n¡La tortuga gana! ¡Bravo!";
	}

	if (Libre >= 70)
	{
		cout << "\nLa liebre gana. Ni hablar";
	}

}
