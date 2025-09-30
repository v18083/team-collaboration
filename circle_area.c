int main() {
    // Declare variables
    float radius, area;
    const float PI = 3.14;

    // Get user input
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Display result
    printf("Area of circle: %.2f\n", area);

    return 0;
}
