#include <stdio.h>

int main() {
	//Convert the height in terms of meter.
    //Print the result. Note: that, 1 inch = 0.0254 meter.
    int feet, inches;
    double height_In_Meters;

    // Input height in feet-inches
    printf("Enter height (example: 5'4\"): ");
    scanf("%d'%d\"", &feet, &inches);

    // Convert height to meters
    height_In_Meters = (feet * 12 + inches) * 0.0254;

    // Print the result
    printf("Height in meters: %.2lf meters\n", height_In_Meters);

    return 0;
}
