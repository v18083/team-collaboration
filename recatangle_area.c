#include <stdio.h>

int main() {
    // Declare variables
    float length, width, area;

    // Get user input
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;

    // Display result
    printf("Area of rectangle: %.2f\n", area);

    return 0;
}
