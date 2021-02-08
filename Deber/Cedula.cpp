/*#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

long int num;
int valor = 0, cociente = 0, residuo = 0, i, j = 0, mul = 0, resta = 0, suma = 0, sumapares = 0, sumaimpares = 0, com = 0, total = 0, a = 0, b = 0, c = 0, d = 0, e = 0;

int main() {
    while (valor == 0)
    {
        while (num > 9999999999 || num < 99999999)
        {
            cout << ("Cedula invalida. Reingrese: ");
            cin >> num;
        }
        com = num % 10;

        for (i = 1; i <= 10; i++)
        {
            cociente = num / 10;
            residuo = num % 10;
            j = i % 2;

            if (j == 0)
            {
                mul = (residuo * 2);
                if (mul >= 10)
                {
                    resta = mul - 9;
                    sumaimpares += resta;
                }
                else
                {
                    sumaimpares += mul;
                }
            }
            else
            {
                suma += residuo;
                sumapares = suma - com;
            }

            num = cociente;
        }

        total = sumaimpares + sumapares;
        a = total % 10;
        b = 10 - a;
        c = total + b;
        d = c - total;
        if (d == 10)
            e = d - 10;

        if (d == com)
            cout << ("\nCedula Valida.\n\n");
        else if (e == com)
            cout << ("\nCedula Valida.\n\n");
        else

            cout << ("\nCedula invalida.\n\n");

    }

    return 0;
}*/