#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void displayMenu() {
    printf("\nChoose an option:\n");
    printf("1. Solve Linear Equation\n");
    printf("2. Solve Quadratic Equation\n");
    printf("3. Solve System of Linear Equations\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    for (;;) {
        // Display menu
        displayMenu();

        // Get user choice
        if (scanf("%d", &choice) != 1) {
            // Invalid input (non-integer)
            printf("Error: Invalid input. Please enter a valid option.\n");
            fflush(stdin); // Clear the input buffer
            continue;
        }

        switch (choice) {
            case 1: {
                // Solve Linear Equation: ax + b = 0
                float a, b;
                printf("Enter coefficients for the linear equation (ax + b = 0):\n");
                printf("Enter 'a': ");
                if (scanf("%f", &a) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'b': ");
                if (scanf("%f", &b) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }

                // Solve Linear Equation without using a function
                if (a == 0) {
                    if (b == 0) {
                        printf("Infinite solutions (all real numbers are solutions).\n");
                    } else {
                        printf("No solution (contradiction).\n");
                    }
                } else {
                    float x = -b / a;
                    printf("Solution: x = %.2f\n", x);
                }
            }
            break;
            case 2: {
                // Solve Quadratic Equation: ax^2 + bx + c = 0
                float a, b, c;
                printf("Enter coefficients for the quadratic equation (ax^2 + bx + c = 0):\n");
                printf("Enter 'a': ");
                if (scanf("%f", &a) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'b': ");
                if (scanf("%f", &b) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'c': ");
                if (scanf("%f", &c) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }

                // Solve Quadratic Equation without using a function
                if (a == 0) {
                    // Not a quadratic equation
                    printf("Error: Not a quadratic equation (a cannot be zero).\n");
                } else {
                    float discriminant = b * b - 4 * a * c;
                    if (discriminant > 0) {
                        float root1 = (-b + sqrt(discriminant)) / (2 * a);
                        float root2 = (-b - sqrt(discriminant)) / (2 * a);
                        printf("Two real and distinct solutions: x1 = %.2f, x2 = %.2f\n", root1, root2);
                    } else if (discriminant == 0) {
                        float root = -b / (2 * a);
                        printf("One real solution (double root): x = %.2f\n", root);
                    } else {
                        float realPart = -b / (2 * a);
                        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * a);
                        printf("Complex solutions: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
                    }
                }
            }
            break;
            case 3: {
                // Solve System of Linear Equations
                float a1, b1, c1, a2, b2, c2;
                printf("Enter coefficients for the system of linear equations:\n");
                printf("Enter 'a1': ");
                if (scanf("%f", &a1) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'b1': ");
                if (scanf("%f", &b1) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'c1': ");
                if (scanf("%f", &c1) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'a2': ");
                if (scanf("%f", &a2) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'b2': ");
                if (scanf("%f", &b2) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }
                printf("Enter 'c2': ");
                if (scanf("%f", &c2) != 1) {
                    // Invalid input (non-numeric)
                    printf("Error: Invalid input. Please enter numeric values.\n");
                    fflush(stdin); // Clear the input buffer
                    continue;
                }

                // Solve System of Linear Equations without using a function
                float determinant = a1 * b2 - a2 * b1;
                if (determinant == 0) {
                    if ((c1 * b2 - c2 * b1) == 0) {
                        printf("Infinite solutions (dependent system).\n");
                    } else {
                        printf("No solution (inconsistent system).\n");
                    }
                } else {
                    float x = (c1 * b2 - c2 * b1) / determinant;
                    float y = (a1 * c2 - a2 * c1) / determinant;
                    printf("Unique solution: x = %.2f, y = %.2f\n", x, y);
                }
            }
            break;
            case 4:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                // Invalid choice
                printf("Error: Invalid choice. Please enter a valid option.\n");
                break;
        }
    }
return 
0;
}
