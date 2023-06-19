// This program is a temperature conversion program.
// It converts Celsius temperatures to Fahrenheit.
#include <iostream>
int celsiusToFahrenheit(int);
int main()
{
    using namespace std;
    int celsius;
    cout << "Enter a Celsius value: ";
    cin >> celsius;
    int fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " degrees Celsius is ";
    cout << fahrenheit << " degrees Fahrenheit." << endl;
    cout << "press anykey to continue...";
    cin >> celsius;
    return 0;
}
int celsiusToFahrenheit(int celsius)
{
    return 1.8 * celsius + 32.0;
}