// Problema 2.16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, z, a, s, d, e, r;
    cout << "ingrese primer numero: ";
    cin >> x;
    cout << "ingrese segundo numero: ";
    cin >> y;
    z = x + y;
    a = x - y;
    s = x * y;
    e = x % y;
    r = (x - e) / y;
    cout << "suma: "<< z << endl;
    cout << "resta: " << a << endl;
    cout << "multiplicacion: " << s << endl;
    cout << "cosiente: " << r << endl;
    cout << "residuo: " << e << endl;

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
