/******************************
* Автор: Сабитов И.И          *
* Дата: 16.09.2026            *
* Название: Лаба 1 Вариант 8  *
*******************************/


#include <iostream>
#include <math.h>
#include <iostream>


using namespace std;


int main() {

	const double pi = 3.14159265358979323846;

	double thermalConductivity;
	double innerRadius;
	double outerRadius;
	double innerTemperature;
	double outerTemperature;
	double wallArea;
	double cylinderLength;

	double flatWallHeatFlow; // плоская стена out
	double cylindricalWallHeatFlow; //цилиндрическая стена out 
	double sphericalWallHeatFlow; //сферическая стена out


	cout << "Enter thermal conductivity (lambda): ";
	cin >> thermalConductivity;

	cout << "Enter inner radius (r1 cm): ";
	cin >> innerRadius;

	cout << "Enter outer radius (r2 cm): ";
	cin >> outerRadius;

	cout << "Enter inner temperature (T1 temperature, C): ";	
	cin >> innerTemperature;

	cout << "Enter outer temperature (T2 temperature, C): ";
	cin >> outerTemperature;

	cout << "Enter wall area (F m^2): ";
	cin >> wallArea;

	cout << "Enter cylinder length (L m): ";
	cin >> cylinderLength;


	flatWallHeatFlow = (thermalConductivity * wallArea / (outerRadius - innerRadius)) * (innerTemperature - outerTemperature);
	cout << "Q1 (flat wall) = " << flatWallHeatFlow << endl;


	cylindricalWallHeatFlow = (2.0 * pi * thermalConductivity * cylinderLength / log(outerRadius / innerRadius)) * (innerTemperature - outerTemperature);
	cout << "Q2 (cylinderical wall) = " << cylindricalWallHeatFlow << endl;


	sphericalWallHeatFlow = (4.0 * pi * thermalConductivity / (1.0 / innerRadius - 1.0 / outerRadius)) * (innerTemperature - outerTemperature);
	cout << "Q3 (spherical wall) = " << sphericalWallHeatFlow << endl;


	return 0;
}

