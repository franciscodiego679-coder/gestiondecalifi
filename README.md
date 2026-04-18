Nombre: Diego Darío Francisca Matrícula: 2022-4386 Profesor: Gamalier Reyes del Carmen

Gestión de Calificaciones con Arreglos
Descripción del programa
Este programa en C++ sirve básicamente para registrar las calificaciones de un grupo de estudiantes, permitiendo trabajar con un máximo de 20 personas. Cada estudiante tiene 4 notas que se ingresan desde el teclado y, con esa información, el programa calcula automáticamente el promedio de cada estudiante, el promedio general del grupo y además identifica cuál fue la nota más alta y la más baja que se ingresaron.

También el programa muestra cuántos estudiantes aprobaron y cuántos reprobaron tomando como aprobado un promedio igual o mayor a 70.

Declaración de variables

Al principio del programa se crean varias variables necesarias para manejar toda la información.

La variable cantidadEstudiantes guarda cuántos estudiantes se van a registrador, asegurándose de que no pasen de 20.

Se usa un arreglo llamado notas[80], y aunque suene raro al inicio, tiene sentido: si el máximo son 20 estudiantes y cada uno tiene 4 notas, entonces se necesitan hasta 80 espacios para guardar todas las calificaciones.

También está el arreglo promedios[20], donde se guarda el promedio final de cada estudiante.

La variable promedioGeneral se utiliza para calcular cómo le fue al grupo completo.

Para encontrar los extremos se usan notaMasAlta, que inicia en 0, y notaMasBaja, que inicia en 100. Esto ayuda a que desde la primera nota ingresada se puedan hacer comparaciones correctamente.

Además, existen dos contadores: aprobados y reprobados, que van sumando estudiantes dependiendo de su resultado final.

Validación con do-while

Para pedir la cantidad de estudiantes se utilizó un ciclo do- while.

La idea es sencilla: el programa sigue preguntando hasta que el usuario escriba un número válido entre 1 y 20.

Se elige este tipo de ciclo porque primero ejecuta la acción y luego valida, asegurando que el usuario siempre introduzca el dato al menos una vez y evitando errores desde el inicio.

Uso de ciclos for

Los ciclos para son los que hacen que todo funcione automáticamente.

Hay un ciclo principal que recorre estudiante por estudiante. Dentro de este ciclo existe otro for que se encarga de pedir las 4 notas correspondientes a cada estudiante.

Gracias a esto no hace falta repetir el código manualmente; el programa simplemente repite el proceso las veces necesarias dependiendo de la cantidad de estudiantes.

Validación de notas con if

Cada vez que se ingresa una nota, el programa verifica usando un si el valor está entre 0 y 100.

Si la nota está fuera de ese rango, el sistema vuelve a pedirla hasta que sea correcta. Esto evita datos inválidos y mantiene los resultados confiables.

También se usan condicionales para decidir si un estudiante autorizado o reprobó según su promedio final.

Operaciones matemáticas

El cálculo es directo.

Se suman las 4 notas de cada estudiante y luego se dividen entre 4 para obtener su promedio individual.

Después, todos los promedios se van acumulando en una variable para poder calcular el promedio general del grupo al final del programa.

Uso de arreglos

Los arreglos ayudan a organizar la información sin complicar demasiado el código.

El arreglo notas[80] guarda todas las calificaciones ingresadas y el arreglo promedios[20] almacena los promedios finales.

Para ubicar correctamente cada nota se usa la fórmula i * 4 + j, que básicamente indica la posición exacta dentro del arreglo dependiendo del estudiante y la nota que se esté trabajando.

Esto permite manejar muchas notas usando un solo arreglo.

Nota más alta y más baja

Mientras se ingresan las notas, el programa va comparando cada valor con la nota más alta y la más baja registradas hasta ese momento.

Si aparece una nota mayor, se actualiza la variable de máximo. Si aparece una menor, se actualiza la variable de mínimo.

Al terminar, ya se sabe automáticamente cuál fue la mejor y la peor nota del grupo.

Uso de contadores

Los contadores sirven para llevar a cabo estadísticas rápidas.

Cada vez que se calcula el promedio de un estudiante, el programa revisa si es mayor o igual a 70.

Si cumple, aumenta el contador de aprobados; si no, aumenta el de reprobados.

Así se obtiene fácilmente un resumen del rendimiento general del curso.

Cálculo del promedio general

Para calcular el promedio general, primero se suman todos los promedios individuales usando una variable acumulada.

Luego esa suma se divide entre la cantidad total de estudiantes registrados.

El resultado final muestra cómo le fue al grupo completo en términos generales.

¿Cómo compilar y ejecutar?

bash g++ calificaciones.cpp -o calificaciones ./calificaciones

Ejemplo de ejecución de como funcionaria el programa
Entrada:

¿Cuantos estudiantes hay? (máximo 20): 3

Estudiante 1 Nota 1: 85 Nota 2: 90 Nota 3: 78 Nota 4: 88

Estudiante 2 Nota 1: 60 Nota 2: 55 Nota 3: 68 Nota 4: 72

Estudiante 3 Nota 1: 95 Nota 2: 100 Nota 3: 92 Nota 4: 98

Salida:

Estudiante 1 -> Notas: 85 90 78 88 | Promedio: 85.25 Estudiante 2 -> Notas: 60 55 68 72 | Promedio: 63.75 Estudiante 3 -> Notas: 95 100 92 98 | Promedio: 96.25

Promedio general del grupo: 81.75 Nota más alta: 100 Nota más baja: 55 Estudiantes aprobados (>= 70): 2 Estudiantes reprobados (< 70): 1

Capturas de pantalla
Captura 1 – Ingreso de datos:
<img width="1000" height="635" alt="image" src="https://github.com/user-attachments/assets/d22ab737-8ae9-46cc-b847-13aef0019cfa" />

imagen
Captura 2 – Resultados en pantalla:imagen
<img width="1043" height="315" alt="image" src="https://github.com/user-attachments/assets/c38eac62-d535-428d-ac39-436777419fee" />
