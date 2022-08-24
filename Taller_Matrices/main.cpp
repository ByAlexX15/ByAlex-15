/********************************************
 *
 *      Fecha : 19 Agosto 2022
 *      Autor : Rubén Alexis Núñez Montaña
 *      Maestro :
 *      Materia: HPC I
 *      Tema :
 *      Tópico :
 *
 *
 *
 *
 * ********************************/



#include <iostream>
#include <eigen3/Eigen/Dense>
#include <vector>
#include "eigen.h"

void primer_punto(){

    std::cout << "\n=='***** PRIMER PUNTOO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2 x 2 double
    Eigen::Matrix2d matriz2; //Matriz B de 2 x 2 double
    Eigen::Matrix2d r1;  //Matriz donde guardaremos los resultados de la matriz1 * 3
    Eigen::Matrix2d r2;  //Matriz donde guardaremos los resultados de la matriz2 * 4
    Eigen::Matrix2d resultado; //Matriz donde guardaremos el resultado de 3A - 4B
    matriz1<< 4,-2,1,-7; //Llenamos los valroes de la matriz1
    matriz2<< -1,2,6,-5; //Llenamos los valroes de la matriz2
    std::cout << "\n El ejercicio pide: X = 3A - 4B "<<std:: endl;
    r1 = 3 * matriz1.array(); //Multiplicamos cada valor de la matriz1 * 3
    r2 = 4 * matriz2.array(); //Multiplicamos cada valor de la matriz2 * 4
    resultado = r1 - r2;  //Procedemos a restar r1 con r2
    std::cout<<"\n La matriz resultante es: \n"<< resultado<<std::endl;

    std::cout << "\n=='-.-.-.-.-.-.  FIN PRIMER PUNTO  -.-.-.-.-.-.- '==" <<std:: endl;
}

void segundo_punto(){

    std::cout << "\n=='***** SEGUNDO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; // Definimos la Matriz A de 2 x 2 double
    Eigen::Matrix2d matriz2; // Definimos la Matriz B de 2 x 2 double
    Eigen::Matrix2d r1;  //Matriz donde guardaremos los resultados de la matriz A * 4
    Eigen::Matrix2d r2;  //Matriz donde guardaremos el resultado 3 * BA
    Eigen::Matrix2d r3;  //Matriz que usaremos para comparar si el resultado esta bien
    Eigen::Matrix2d x; //Matriz donde guardaremos el resultado de = ((3 * BA)) - A4)/2
    matriz1<< 0,-1,2,1; //Lenamos valroes de la matriz1
    matriz2<< 1,2,3,4; //Llenamos los valroes de la matriz2
    r1 = 4 * matriz1.array(); //Multiplicamos cada valor de la A * 4
    r2 = 3 *(matriz2 * matriz1).array(); //Multiplicamos *3 el resultado de A*B
    x = (r2-r1)/2; //Despejamos la variable x de la ecuación y rellenamos la matriz
    r3 = 2*x.array() + r1.array(); // Realizamos una comprobación de que la variable X cumple con la función
    std::cout << "\n El ejercicio pide: 2X + 4A = 3BA"<<std:: endl;
    std::cout << "\n COMPROBACIÓN " <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n 2X + 4A es : \n"<<r3<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< r2<<std::endl;

    std::cout << "\n=='-.-.-.-.-.-.  FIN SEGUNDO PUNTO  -.-.-.-.-.-.- '==" <<std:: endl;
}

void tercer_punto(){

    std::cout << "\n=='***** TERCER PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2 x 2 double
    Eigen::Matrix2d matriz2; //Matriz B de 2 x 2 double
    Eigen::Matrix2d matriz3; //Matriz C de 2 x 2 double
    Eigen::Matrix2d r2; //Matriz que usaremos para comparar si el resultado esta bien
    Eigen::Matrix2d x; //Matriz donde guardaremos el resultado de C/(A X B_t)
    matriz1<< -3,-2,3,3; //Llenamos valroes de la matriz1
    matriz2<< 5,3,9,4; //Llenamos los valroes de la matriz2
    matriz3<< 1,1,0,0; //Llenamos los valroes de la matriz3
    x = matriz1.inverse() * matriz3 * matriz2.transpose().inverse(); //Despejamos la variable x de la ecuación y rellenamos la matriz x
    r2 = (matriz1 * x * matriz2.transpose()); //Verificamos con la respuesta del ejercicio
    std::cout << "\n El ejercicio pide: AXB^T = C "<<std:: endl;
    std::cout << "\n COMPROBACIÓN " <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n AXB^t = : \n"<<r2<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz3<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN TERCER PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void cuarto_punto(){

    std::cout << "\n=='***** CUARTO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2 x 2 double
    Eigen::Matrix2d matriz2; //Matriz B de 2 x 2 double
    Eigen::Matrix2d r1;  //Matriz donde guardaremos el X*A = B
    Eigen::Matrix2d x; //Matriz donde guardaremos el resultado de B/A
    matriz1<< 2,1,-4,-3; //Llenamos valroes de la matriz1
    matriz2<< 2,2,6,4; //Llenamos los valroes de la matriz2
    x = matriz2 * matriz1.inverse(); //Despejamos la variable x de la ecuación y rellenamos la matriz x
    r1 = x * matriz1; //Verificamos con la respuesta del ejercicio
    std::cout << "\n El ejercicio pide: XA = B "<<std:: endl;
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n XA = B = : \n"<<r1<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz2<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN CUARTO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void quinto_punto(){

    std::cout << "\n=='***** QUINTO PUNTO ***** '==" <<std:: endl;
    Eigen::MatrixXf matriz_dinamica1 = Eigen::MatrixXf(2,3); //Matriz A dinamica de 2 x 3 flotante
    Eigen::MatrixXf matriz_dinamica2 = Eigen::MatrixXf(3,2); //Matriz B dinamica de 3 x 2 flotatne
    Eigen::Matrix2f matriz3; //Matriz C de 2 x 2 flotante
    Eigen::MatrixXf x; //Matriz donde guardaremos 2(AB + C)
    matriz_dinamica1<< 3,0,-1,0,2,1; //Llenamos valroes de la matriz_dinamica1
    matriz_dinamica2<< 1,2,1,0,0,6; //Llenamos los valroes de la matriz_dinamica2
    matriz3<< -2,0,-2,-5; //Llenamos los valores de la matriz C
    x = 2 *((matriz_dinamica1 * matriz_dinamica2) +matriz3).array(); //Despejamos la variable x de la ecuación y rellenamos la matriz x
    std::cout<<"\n Resultado de la operación 2(AB + C)\n"<< x<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN QUINTO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void sexto_punto(){

    std::cout << "\n=='***** SEXTO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix3f matriz1; //Matriz A 3x3 flotante
    Eigen::Matrix3f matriz2; //Matriz B 3x3 flotante
    Eigen::Matrix3f r1 ; //Matriz donde guardaremos el resultado de 3B
    Eigen::Matrix3f x ; //Matriz donde guardaremos el resultado de A + 3B
    matriz1<< 1,5,-1,-1,2,2,0,-3,3; //Llenamos valroes de la matriz1
    matriz2<< -1,-4,3,1,-2,-2,-3,3,-5; //Llenamos los valroes de la matriz2
    r1 = 3 * matriz2.array(); //Multiplicamos 3B
    x = matriz1 + r1; //Operación A + 3B
    std::cout<<"\n Resultado de la operación A + 3B = \n"<< x<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN SEXTO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void septimo_punto(){

    std::cout << "\n=='***** SEPTIMO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix3d matriz1; //Matriz A 3x3 double
    Eigen::Matrix3d matriz2; //Matriz B 3x3 double
    Eigen::Matrix3d r1 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix3d x ; //Matriz donde guardaremos el resultado de B/A
    matriz1<<2,7,3,3,9,4,1,5,3; //Llenamos valroes de la matriz1
    matriz2<<1,0,2,0,1,0,0,0,1; //Llenamos los valroes de la matriz2
    x = matriz2*matriz1.inverse();//Despejamos la variable x de la ecuación y rellenamos la matriz x
    r1 = (x * matriz1); //Reemplazamos X en la ecuación original para la comprobación
    std::cout << "\n El ejercicio pide: XA = B"<<std:: endl;
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n XA = : \n"<<r1<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz2<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN SEPTIMO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void octavo_punto(){

    std::cout << "\n=='***** OCTAVO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix3f matriz1; //Matriz A 3x3 flotante
    Eigen::Matrix3f matriz2; //Matriz B 3x3 flotante
    Eigen::Matrix3f r1 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix3f x ; //Matriz donde guardaremos el resultado de B/A
    matriz1<<1,1,1,6,5,4,13,10,8; //Llenamos valroes de la matriz1
    matriz2<<0,1,2,1,0,2,1,2,0; //Llenamos los valroes de la matriz2
    x = matriz1.inverse() * matriz2;//Despejamos la variable x de la ecuación y rellenamos la matriz x
    r1 = (matriz1 * x); //Reemplazamos X en la ecuación original para la comprobación
    std::cout << "\n El ejercicio pide: AX = B "<<std:: endl;
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n AX = : \n"<<r1<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz2<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN OCTAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}
void noveno_punto(){

    std::cout << "\n=='***** NOVENO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2x2 Double
    Eigen::Matrix2d r1 ; //Matriz donde guardaremos el valor de A Transpuesta
    Eigen::Matrix2d r2 ; //Matriz donde guardaremos el valor de 2A
    Eigen::Matrix2d x ; //Matriz donde guardaremos el valor de A^t * A - 2A
    matriz1<<3,-1,0,2; //Llenamos valroes de la matriz1
    r1 = matriz1.transpose(); //Guardamos la transpuesta de la matriz1 A
    r2 = 2 * matriz1.array(); //Guardamos el valor de 2A
    x = (r1 * matriz1 - r2); //Realizamos la operación A^t * A - 2A
    std::cout << "\n El ejercicio pide: X = A^T * A - 2A "<<std:: endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<<x<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN NOVENO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void decimo_punto(){

    std::cout << "\n=='***** DECIMO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2x2 Double
    Eigen::Matrix2d x ; //Matriz donde guardaremos el valor de A * A * A
    matriz1<<4,2,-1,0; //Llenamos valroes de la matriz1
    x =(matriz1* matriz1 * matriz1) ; //Realizamos la operación A * A * A
    std::cout << "\n El ejercicio pide: A³ "<<std:: endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<<x<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN DECIMO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void onceavo_punto(){

    std::cout << "\n=='***** ONCEAVO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix2d matriz1; //Matriz A de 2 x 2 double
    Eigen::Matrix2d matriz2; //Matriz B de 2 x 2 double
    Eigen::Matrix2d matriz3; //Matriz C de 2 x 2 double
    Eigen::Matrix2d r1;  //Matriz donde guardaremos el resultado de A transpuesta
    Eigen::Matrix2d r2;  //Matriz que usaremos para comparar si el resultado esta bien
    Eigen::Matrix2d x; //Matriz donde guardaremos el resultado de C/(A^t X B)
    matriz1<< 2,4,3,2; //Llenamos valroes de la matriz1
    matriz2<< 1,0,2,1; //Llenamos los valroes de la matriz2
    matriz3<< 7,5,6,1; //Llenamos los valroes de la matriz3
    r1 = matriz1.transpose().inverse(); //Hacemos la matriz transpuesta Y la inversa de A
    x = r1 * matriz3 * matriz2.inverse(); //Despejamos la variable x de la ecuación y rellenamos la matriz x
    r2 = (matriz1.transpose() * x * matriz2); //Verificamos con la respuesta del ejercicio
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n AXB^t = : \n"<<r2<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz3<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN ONCEAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void doceavo_punto(){

    std::cout << "\n=='***** DOCEAVO PUNTO ***** '==" <<std:: endl;
    Eigen::MatrixXf matriz_dinamica1 = Eigen::MatrixXf(2,3); //Matriz A dinamica de 2 x 3 flotante
    Eigen::MatrixXf matriz_dinamica2 = Eigen::MatrixXf(3,2); //Matriz B dinamica de 3 x 2 flotatne
    Eigen::MatrixXf r1; //Guardaremos A * A^T
    Eigen::MatrixXf r2; //Guardaremos 2AB
    Eigen::MatrixXf x; //Matriz donde guardaremos 2(AB + C)
    matriz_dinamica1<< 1,0,-2,2,-1,3; //Llenamos valroes de la matriz_dinamica1
    matriz_dinamica2<< 2,-3,-2,0,-1,-2; //Llenamos los valroes de la matriz_dinamica2
    r1 = matriz_dinamica1 * matriz_dinamica1.transpose(); // A * A^t
    r2 = 2*((matriz_dinamica1 * matriz_dinamica2).array()); // 2 AB
    x = r1 - r2; //Despejamos la variable x de la ecuación y rellenamos la matriz x
    std::cout<<"\n Resultado de la operación X = A*A^T - 2AB\n"<< x<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN DOCEAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}


void treceavo_punto(){

    std::cout << "\n=='***** TRECEAVO PUNTO ***** '==" <<std:: endl;
    Eigen::VectorXd vec(3); //Vector A 3x3 flotante
    Eigen::MatrixXd matriz_dinamica2 = Eigen::MatrixXd(3,2); //Matriz B 3x3 flotante
    Eigen::MatrixXd matriz_dinamica3 = Eigen::MatrixXd(2,1);
    Eigen::Matrix3d r2 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix3Xd x ; //Matriz donde guardaremos el resultado de B/A
    vec<<4,8,12; //Llenamos valroes de la matriz1
    matriz_dinamica2<<3,2,0,1,-1,0;
    matriz_dinamica3<<3,-1;
    //Llenamos los valroes de la matriz2
    x =  (matriz_dinamica2.array().colwise() * vec.array());
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x.colwise().sum() * matriz_dinamica3<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN TRECEAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}
void quinceavo_punto(){

    std::cout << "\n=='***** QUINCEAVO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix3f matriz1; //Matriz A 3x3 flotante
    Eigen::Matrix3f matriz2; //Matriz B 3x3 flotante
    Eigen::Matrix3f r2 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix3f x ; //Matriz donde guardaremos el resultado de B/A
    matriz1<<2,5,7,6,3,4,5,-2,-3; //Llenamos valroes de la matriz1
    matriz2<<-1,1,0,0,1,1,1,0,-1; //Llenamos los valroes de la matriz2
    x = matriz2* matriz1.inverse();//Despejamos la variable x de la ecuación y rellenamos la matriz x
    r2 = (x * matriz1); //Reemplazamos X en la ecuación original para la comprobación
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    std::cout<<"\n XA = : \n"<<r2<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz2<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN QUINCEAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}
void dieciseiesavo_punto(){
    std::cout << "\n=='***** DIECISEISAVO PUNTO ***** '==" <<std:: endl;
    Eigen::Matrix4d matriz1; //Matriz A 3x3 flotante
    Eigen::Matrix4d matriz2; //Matriz B 3x3 flotante
    Eigen::Matrix4d r2 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix4d r1 ; //Matriz que usaremos para mirar si la respuesta es correcta
    Eigen::Matrix4d x ; //Matriz donde guardaremos el resultado de B/A
    matriz1<<1,1,1,1,
            1,1,-1,-1,
            1,-1,1,-1,
            1,-1,-1,1; //Llenamos valroes de la matriz1

    matriz2<<1,1,0,0,
            1,0,1,0,
            1,0,0,1,
            1,0,1,1; //Llenamos los valroes de la matriz2
    x = matriz1.inverse() * matriz2 ;
    //x = matriz2.array()* r1.array();//Despejamos la variable x de la ecuación y rellenamos la matriz x
    //r2 = (matriz1 *x); //Reemplazamos X en la ecuación original para la comprobación
    std::cout << "\n COMPROBACIÓN \n" <<std:: endl;
    std::cout<<"\n El valor de X es igual a : \n"<< x<<std::endl;
    std::cout<<"\n Reemplazamos X en la ecuación original"<<std::endl;
    //std::cout<<"\n  : \n"<<r2<<std::endl;
    std::cout<<"\n Resultado que da el ejercicio : \n"<< matriz2<<std::endl;
    std::cout << "\n=='-.-.-.-.-.-.  FIN DIECISEISAVO PUNTO -.-.-.-.-.-.- '==" <<std:: endl;
}

void opciones(){


    std::cout <<"\n La respuesta de los puntos está en la parte superior"<< std::endl;
    std::cout <<"Taller Matrices" << std::endl;
    std::cout <<"Seleccione una opción del menu" << std::endl;
    std::cout <<"(1) X = 3A - 4B " << std::endl;
    std::cout <<"(2) 2X + 4A = 3BA" << std::endl;
    std::cout <<"(3) AXB^T = C" << std::endl;
    std::cout <<"(4) XA = B" << std::endl;
    std::cout <<"(5) X = 2(AB + C)" << std::endl;
    std::cout <<"(6) X = A + 3B" << std::endl;
    std::cout <<"(7) XA = B" << std::endl;
    std::cout <<"(8) AX = B" << std::endl;
    std::cout <<"(9) X = A^t * A - 2A" << std::endl;
    std::cout <<"(10) X = A³" << std::endl;
    std::cout <<"(11) A^t * XB = C " << std::endl;
    std::cout <<"(12) X = A* A^t - 2AB" << std::endl;
    std::cout <<"(13) X = ABC " << std::endl;
    std::cout <<"(15) XA = B " << std::endl;
    std::cout <<"(16) AX = B " << std::endl;
    std::cout <<"(17) Salir" << std::endl;


}

void menu(){

    int t;
    opciones();
    do {
            std::cin >>t;
            switch(t){

                case 1:
                    primer_punto();
                    menu();
                    break;

                case 2:
                    segundo_punto();
                    menu();
                    break;

                case 3:
                    tercer_punto();
                    menu();
                    break;

                case 4:
                    cuarto_punto();
                    menu();
                    break;
                case 5:
                    quinto_punto();
                    menu();
                    break;
                case 6:
                    sexto_punto();
                    menu();
                    break;
                case 7:
                    septimo_punto();
                    menu();
                    break;
                case 8:
                    octavo_punto();
                    menu();
                    break;
                case 9:
                    noveno_punto();
                    menu();
                    break;
                case 10:
                    decimo_punto();
                    menu();
                    break;
                case 11:
                    onceavo_punto();
                    menu();
                    break;
                case 12:
                    doceavo_punto();
                    menu();
                    break;
                case 13:
                    treceavo_punto();
                    menu();
                    break;
                case 15:
                    quinceavo_punto();
                    menu();
                    break;
                case 16:
                    dieciseiesavo_punto();
                    menu();
                    break;

                case 17:
                    std::cout<<"Salir "<<std::endl;
                    break;

                if(t <=0){
                    std::cout<<"Selecciones una opción valida "<<std::endl;
                    menu();
                }
                if(t>=18){
                    std::cout<<"Selecciones una opción valida "<<std::endl;
                    menu();
                }

            }
        }while(t ==16);

}




















