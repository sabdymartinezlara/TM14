//Nombre:
// Grupo:
// Fecha:
//

#include <iostream>
#include"Eigen/Dense"

using namespace std;
using namespace Eigen;



     
        int foo = 9999;
        float x = 10.5;
        double y = 8634654346;
        char caracter = 'H';
        string texto = "Hola me gusta el cafe";
        bool estado = true;
        const float gravedad = 9.81;
        float masa = 0;
        float fuerza = 0;
        

        int main()
        {
            
            MatrixXd A(4, 4);
            A << 1, 2, 3, 5,
                4, 5, 6, 4,
                7, 8, 9, 2,
                5, 3, 8, 2;
            cout << A;
            cout << endl;
            cout << endl;

            cout << A.inverse() << endl << endl;
            cout << A.transpose() << endl << endl;
            cout << A.conjugate() << endl << endl;
            cout << A.adjoint() << endl << endl;


            MatrixXd B(4, 4);
            B << 1, 2, 3, 6,
                4, 5, 6, 3,
                7, 8, 9, 9,
                4, 7, 6, 8;
            cout << B;
            cout << endl;
            cout << endl;

            MatrixXd C(4, 4);
            C << 1, 2, 3, 5,
                4, 5, 6, 6,
                7, 8, 9, 7,
                6, 5, 3, 3;
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
       
        cout << "foo = "<< foo << endl;
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "caracter=" << caracter << endl;
        cout << "texto= " << texto << endl;
        cout << "estado=" << estado << endl;
        cout << " cual es tu masa=" << endl;
        cin >> masa;
        fuerza = masa * gravedad;
     

        
            cout << "Algun texto\nque pongas aqui!!" << endl;
            cout << "Algun texto\tque pongas aqui!!" << endl;
            cout << "Algun texto\"que\" pongas aqui!!" << endl;
            cout << "Algun texto que pongas aqui!!" << endl;

            cout << "(10<5)=" << (10 < 5) << endl;
            cout << "(10>5)=" << (10 < 5) << endl;
            cout << "(10==5)=" << (10 < 5) << endl;
            cout << "(10<=5)=" << (10 < 5) << endl;
            cout << "(10=>5)=" << (10 < 5) << endl; 

            MatrixXd A(3, 3);
            A << 3, 4, 5,
                6, 7, 8,
                9, 1, 3;
            cout << A;
            cout << endl;
            cout << endl; 


            MatrixXd B(3, 3);
            A << 2, 5, 3,
                6, 4, 1,
                8, 2, 9;
            cout << B;
            cout << endl;
            cout << endl;

            cout << "(A==B)= " << (A == B) << endl; 



        }