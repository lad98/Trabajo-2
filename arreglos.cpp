#include <iostream>

using namespace std;

int main() {   
    int a, b, c;
    float* coordenadas = new float[b * 3];
    int* verticesPorCara = new int[c];
    int** caras = new int*[c];


    do {
        cout << "\nMENU\n";
        cout << "1. Ingrese los vertices de su figura"<<endl;
        cout << "2. Ingrese las caras de su figura"<<endl;
        cout << "3. Ver figura"<<endl;
        cout << "4. Salida"<<endl;
        cout << "Seleccione una opción: ";
        cin >> a;

        switch (a) {
            case 1: {
                cout << "¿Cuántos vértices desea ingresar?: ";
                cin >> b;

                
                
                for (int i = 0; i < b; i++) {
                    cout << "Ingrese la coordenada " << i + 1 <<endl;
                    cin >> coordenadas[i * 3] >> coordenadas[i * 3 + 1] >> coordenadas[i * 3 + 2];
                }
                break;
            }

            case 2: {
                cout << "Ingrese la cantidad de caras de su figura: ";
                cin >> c;
                for (int i = 0; i < c; i++) {
                    cout << "Ingrese el número de vértices de la cara " << i + 1 << ": ";
                    cin >> verticesPorCara[i];

                    caras[i] = new int[verticesPorCara[i]];
                    cout << "Ingrese los índices de los vértices de la cara " << i + 1 << ": ";
                    
                    for (int j = 0; j < verticesPorCara[i]; j++) {
                        cin >> caras[i][j];
                    }
                }
                
                break;
            }

            case 3:
                cout << "Los datos ingresados son:"<<endl;
                cout << "\nLista de coordenadas:\n";
                for (int i = 0; i < b; i++) {
                    cout << "V" << i + 1 << ": (" 
                         << coordenadas[i * 3] << ", " 
                         << coordenadas[i * 3 + 1] << ", " 
                         << coordenadas[i * 3 + 2] << ")\n";
                }

            
                

                
                cout << "\nLista de caras:\n";
                for (int i = 0; i < c; i++) {
                    cout << "Cara " << i + 1 << ": ";
                    for (int j = 0; j < verticesPorCara[i]; j++) {
                        cout << caras[i][j]<<endl;
                        if (j < verticesPorCara[i] - 1) {
                            cout << " -> ";
                        }
                    }
                    
                }
            case 4:
            cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
        }
    } while (a != 4); 

    return 0;
}
