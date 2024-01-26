#include <iostream>
using namespace std;

int main() {
	// Initialize and declare the string directly
	string lyu = "I LOVE C++";
	
	// Concatenate strings using << instead of +
	cout << "La cadena es: " << lyu << endl;
	
	// Use a variable for the length to avoid repeated function calls
	size_t cadenaLongitud = lyu.length();
	cout << "La longitud de la cadena es: " << cadenaLongitud << endl;
	
	// Check if the string is empty directly in the condition
	cout << "¿Está vacío? " << (lyu.empty() ? "Sí" : "No") << endl << endl;
	
	// Append an exclamation mark directly
	lyu.append("!");
	cout << "La cadena modificada es: " << lyu << endl << endl;
	
	// Swap without using an intermediate string
	string lyu_2 = "I love too";
	lyu.swap(lyu_2);
	cout << "Cambié la cadena modificada a: " << lyu << endl << endl;
	
	return 0;
}

 
