// Problema 2.19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int x, y, c;
    int a, s, d, f, g;
    cout << "ingrese 3 numeros: ";
    cin >> x >> y >> c;
    a = x + y + c;
    s = (x + y + c) / 3;
    d = x * y * c;
    cout << "suma: " << a << endl;
    cout << "promedio: " << s << endl;
    cout << "multuplicacion: " << d << endl;
    if (x > y)
    {
        if (x > c)
        {
            cout << "el mayor es: " << x << endl;
            if (y > c)
            {
                cout << " el menor es: " << c << endl;
            }
            else
            {
                cout << " el menor es: " << y << endl;
            }
        }
        else
        {
            cout << "el mayor es: " << c << endl;
            if (y > x)
            {
                cout << " el menor es: " << x << endl;
            }
            else
            {
                cout << " el menor es: " << y << endl;
            }
        }
    }
    else
    {
        if (y > c)
        {
            cout << "el mayor es: " << y << endl;
            if (x > c)
            {
                cout << " el menor es: " << c << endl;
            }
            else
            {
                cout << " el menor es: " << x << endl;
            }
        }
        else
        {
            cout << "el mayor es: " << c << endl;
            if (y > x)
            {
                cout << " el menor es: " << x << endl;
            }
            else
            {
                cout << " el menor es: " << y << endl;
            }
        }
    }
    return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
