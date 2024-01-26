//trabajo practico 2 
// jose luis valdivia 
#include <iostream>

// Variables globales
float numero1 = 0;
float numero2 = 0;

// Funci�n para mostrar el men� principal
void mostrarMenuPrincipal() {
	std::cout << "MENU PRINCIPAL" << std::endl;
	std::cout << "(1) -- Operaciones con N�meros" << std::endl;
	std::cout << "(2) -- Concatenar 2 cadenas." << std::endl;
	std::cout << "(s/S) -- Salir" << std::endl;
}

// Funci�n para mostrar el submen� de operaciones con n�meros
void mostrarSubMenuNumeros() {
	std::cout << "SUBMENU OP NUMEROS" << std::endl;
	std::cout << "1) - Suma de 2 n�meros." << std::endl;
	std::cout << "2) - Divisi�n de 2 n�meros." << std::endl;
	std::cout << "(m/M) - Volver al Menu principal" << std::endl;
}

// Funci�n para realizar la operaci�n de suma
void operacionSuma() {
	float resultado = numero1 + numero2;
	std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;
}

// Funci�n para realizar la operaci�n de divisi�n
void operacionDivision() {
	if (numero2 != 0) {
		float resultado = numero1 / numero2;
		std::cout << "La divisi�n de " << numero1 << " entre " << numero2 << " es: " << resultado << std::endl;
	} else {
		std::cout << "Error: No se puede dividir por cero." << std::endl;
	}
}

int main() {
	char opcionPrincipal;
	
	while (true) {
		mostrarMenuPrincipal();
		std::cout << "Ingrese su elecci�n: ";
		std::cin >> opcionPrincipal;
		
		if (opcionPrincipal == '1') {
			mostrarSubMenuNumeros();
			char opcionSubMenu;
			std::cout << "Ingrese su elecci�n: ";
			std::cin >> opcionSubMenu;
			
			if (opcionSubMenu == '1') {
				std::cout << "Ingrese el primer n�mero: ";
				std::cin >> numero1;
				std::cout << "Ingrese el segundo n�mero: ";
				std::cin >> numero2;
				operacionSuma();
			} else if (opcionSubMenu == '2') {
				std::cout << "Ingrese el numerador: ";
				std::cin >> numero1;
				std::cout << "Ingrese el denominador: ";
				std::cin >> numero2;
				operacionDivision();
			} else if (opcionSubMenu == 'm' || opcionSubMenu == 'M') {
				continue;
			} else {
				std::cout << "Opci�n no v�lida. Int�ntelo de nuevo." << std::endl;
			}
			
		} else if (opcionPrincipal == '2') {
			std::string cadena1, cadena2;
			std::cout << "Ingrese la primera cadena: ";
			std::cin >> cadena1;
			std::cout << "Ingrese la segunda cadena: ";
			std::cin >> cadena2;
			std::string resultadoConcatenacion = cadena1 + cadena2;
			std::cout << "La concatenaci�n de las cadenas es: " << resultadoConcatenacion << std::endl;
			
		} else if (opcionPrincipal == 's' || opcionPrincipal == 'S') {
			break;
			
		} else {
			std::cout << "Opci�n no v�lida. Int�ntelo de nuevo." << std::endl;
		}
	}
	
	return 0;
}
