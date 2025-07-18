#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert meters to feet
double metersToFeet(double meters)
{
    return meters * 3.28084;
}

// Function to convert feet to meters
double feetToMeters(double feet)
{
    return feet / 3.28084;
}

// Function to convert minutes to seconds
int minutesToSeconds(int minutes)
{
    return minutes * 60;
}

// Function to convert seconds to minutes
int secondsToMinutes(int seconds)
{
    return seconds / 60;
}

// Function to convert kilograms to pounds
double kilogramsToPounds(double kilograms)
{
    return kilograms * 2.20462;
}

// Function to convert pounds to kilograms
double poundsToKilograms(double pounds)
{
    return pounds / 2.20462;
}

int main()
{
    int choice;
    double value, result;

    printf("Unit Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Meters to Feet\n");
    printf("4. Feet to Meters\n");
    printf("5. Minutes to Seconds\n");
    printf("6. Seconds to Minutes\n");
    printf("7. Kilograms to Pounds\n");
    printf("8. Pounds to Kilograms\n");
    printf("Enter your choice (1-8): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &value);
        result = celsiusToFahrenheit(value);
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", value, result);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &value);
        result = fahrenheitToCelsius(value);
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", value, result);
        break;
    case 3:
        printf("Enter length in meters: ");
        scanf("%lf", &value);
        result = metersToFeet(value);
        printf("%.2f meters is equal to %.2f feet.\n", value, result);
        break;
    case 4:
        printf("Enter length in feet: ");
        scanf("%lf", &value);
        result = feetToMeters(value);
        printf("%.2f feet is equal to %.2f meters.\n", value, result);
        break;
    case 5:
        printf("Enter time in minutes: ");
        scanf("%lf", &value);
        result = minutesToSeconds((int)value);
        printf("%.2f minutes is equal to %.2f seconds.\n", value, result);
        break;
    case 6:
        printf("Enter time in seconds: ");
        scanf("%lf", &value);
        result = secondsToMinutes((int)value);
        printf("%.2f seconds is equal to %.2f minutes.\n", value, result);
        break;
    case 7:
        printf("Enter weight in kilograms: ");
        scanf("%lf", &value);
        result = kilogramsToPounds(value);
        printf("%.2f kilograms is equal to %.2f pounds.\n", value, result);
        break;
    case 8:
        printf("Enter weight in pounds: ");
        scanf("%lf", &value);
        result = poundsToKilograms(value);
        printf("%.2f pounds is equal to %.2f kilograms.\n", value, result);
        break;
    default:
        printf("Invalid choice. Please enter a number between 1 and 8.\n");
        return 1;
    }

    return 0;
}