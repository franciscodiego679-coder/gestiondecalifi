#include <iostream>
using namespace std;

int main() {

 
    int cantidadEstudiantes;
    float notas[80]; 
    float promedios[20];
    float promedioGeneral = 0;
    float notaMasAlta = 0;
    float notaMasBaja = 100;
    int aprobados = 0;
    int reprobados = 0;

    do {
        cout << "Cuantos estudiantes hay? (maximo 20): ";
        cin >> cantidadEstudiantes;
    } while (cantidadEstudiantes < 1 || cantidadEstudiantes > 20);

   
    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << "\n--- Estudiante " << (i + 1) << " ---" << endl;
        float suma = 0;

        for (int j = 0; j < 4; j++) {
            // viendo que la nota este entre 0 y 100
            do {
                cout << "  Nota " << (j + 1) << ": ";
                cin >> notas[i * 4 + j];
            } while (notas[i * 4 + j] < 0 || notas[i * 4 + j] > 100);

            suma += notas[i * 4 + j];
        }

      
        promedios[i] = suma / 4;
    }

    
    cout << "\n========== RESULTADOS ==========" << endl;

    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << "\nEstudiante " << (i + 1) << " -> Notas: ";

        for (int j = 0; j < 4; j++) {
            cout << notas[i * 4 + j] << "  ";

            // nota mas alta y la mas baja
            if (notas[i * 4 + j] > notaMasAlta) notaMasAlta = notas[i * 4 + j];
            if (notas[i * 4 + j] < notaMasBaja) notaMasBaja = notas[i * 4 + j];
        }

        cout << "| Promedio: " << promedios[i];

        if (promedios[i] >= 70) {
            aprobados++;
        }
        else {
            reprobados++;
        }

        promedioGeneral += promedios[i];
    }

    // Calculamos el promedio general dividiendo entre la cantidad de estudiantes
    promedioGeneral = promedioGeneral / cantidadEstudiantes;

    cout << "\n\nPromedio general del grupo: " << promedioGeneral << endl;
    cout << "Nota mas alta: " << notaMasAlta << endl;
    cout << "Nota mas baja: " << notaMasBaja << endl;
    cout << "Estudiantes aprobados (>= 70): " << aprobados << endl;
    cout << "Estudiantes reprobados (< 70): " << reprobados << endl;

    return 0;
}