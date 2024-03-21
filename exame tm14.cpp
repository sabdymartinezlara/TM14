// Nombre: Martinez Lara Sabdy Fabiola 
// Grupo: TM14
// Fecha: 21/marzo/2024
//

#include <iostream>
using namespace std;
using namespace sumadematrices 
int main()
{
    std::cout << "Nombre: Martinez Lara Sabdy Fabiola\n";
    std::cout << "Grupo: TM14\n";
    std::cout << "Fecha: 21/marzo/2024\n";

    MatrixXd A(3, 3); 
    A << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
      
    cout << A;
    cout << endl;
    cout << endl;

    cout << A.inverse() << endl << endl;
    cout << A.transpose() << endl << endl;
    cout << A.conjugate() << endl << endl;
    cout << A.adjoint() << endl << endl;


    MatrixXd B(3, 3);
    B << 1, 2, 3,
        4, 5, 6,
        7, 8, 9; 
       
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(3, 3);
    C << 1, 2, 3,
        4, 5, 6,
        7, 8, 9; 
    cout << C;
    cout << endl;
    cout << endl;


    C = A + B;
    cout << "C= A - B" << endl;
    cout << C;
    cout << endl;
    cout << endl;

    C = A - B;
    cout << "C = A + B" << endl;
    cout << C;
    cout << endl;
    cout << endl;

    C = 5 * B;
    cout << "C = 5*B" << endl;
    cout << C;
    cout << endl;
    cout << endl;


    cout << " C = B.determinant()" << endl;
    cout << C;
    cout << endl;
    cout << endl;

     
    
    
    
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
