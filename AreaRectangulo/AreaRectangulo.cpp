#include <iostream>
using namespace std;
// Función para calcular el área de un rectángulo
float calcularArea(float base, float altura) {
return base * altura; // Retorna el área del rectángulo (base * altura)
}
int main() {
float base, altura; // Declaración de variables para almacenar la base y la altura del rectángulo
cout << "Ingrese la base del rectángulo: "; // Solicita al usuario que ingrese la base del rectángulo
cin >> base; // Lee el valor de la base desde la entrada estándar (teclado)
cout << "Ingrese la altura del rectángulo: "; // Solicita al usuario que ingrese la altura del rectángulo
cin >> altura; // Lee el valor de la altura desde la entrada estándar (teclado)
// Llama a la función calcularArea con la base y la altura como argumentos, y almacena el resultado en una variable
float area = calcularArea(base, altura);
// Imprime el resultado del cálculo del área del rectángulo
cout << "El área del rectángulo con base " << base << " y altura " << altura << " es: " << area << endl;
return 0;
}
