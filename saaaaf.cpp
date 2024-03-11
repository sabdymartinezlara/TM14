//Nombre:Martínez lara Sabdy Fabiola 
// Grupo:TM14
// Fecha:11/03/2024
//
//son las librerias 
#include <iostream>
#include"Eigen/Dense"

//los nombres de espacio 
using namespace std;
using namespace Eigen;

//variables globales

//definiciones 
#define PI 3.141589

int main()
{
    
    MatrixXd A(4, 4);
    A << 1, 2, 3, 1,
        4, 5, 6, 5,
        7, 8, 9, 6,
        2, 4, 6, 8;
    cout << A;
    cout << endl;
    cout << endl;

    cout << A.inverse() << endl << endl; 
    cout << A.transpose() << endl << endl;
    cout << A.conjugate() << endl << endl;
    cout << A.adjoint() << endl << endl;

    MatrixXd B(4, 4);
    B << 1, 2, 3, 2,
        4, 5, 6, 6,
        7, 8, 9, 7,
        1, 3, 5, 7;
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(4, 4);
    C << 0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 0;

    cout << C;
    cout << endl;
    cout << endl;

    C = A + B; 

    cout << "C= " << endl;
    cout << C; 
    cout << endl;
    cout << endl; 
    C = A - B; 

    cout << "C= A - B " << endl;
    cout << C; 
    cout << endl;
    cout << endl; 

    C = 5 * B; 
    cout << "C= 5*B " << endl;
    cout << C;
    cout << endl; 
    cout << endl; 

    
    cout << "C= B.determinant() " << endl;
    cout << C.determinant(); 
    cout << endl;
    cout << endl;



}
