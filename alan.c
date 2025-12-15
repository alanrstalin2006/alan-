#include<stdio.h>
int main() {
    int n; // Variable to store the number of rows
    int i, j; // Loop counters
    long long coefficient; // Variable to store the binomial coefficient.
                           // Using long long to prevent overflow for larger triangles.

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    // Read the integer input from the user
    scanf("%d", &n);

    // Outer loop iterates through each row of the triangle
    // 'i' represents the current row number (0-indexed)
    for (i = 0; i < n; i++) {
        // Inner loop to print leading spaces for proper alignment,
        // making the triangle appear centered.
        // The number of spaces decreases with each row.
        for (j = 0; j < n - i - 1; j++) {
            printf("   "); // Print three spaces for alignment
        }

        // Initialize the first coefficient of each row to 1
        coefficient = 1;
        // Inner loop iterates through each element (coefficient) in the current row
        // 'j' represents the current element's position within the row (0-indexed)
        for (j = 0; j <= i; j++) {
            // Print the current coefficient.
            // "%6lld" ensures consistent spacing for numbers up to 5 digits,
            // making the triangle columns align well.
            printf("%6lld", coefficient);

            // Calculate the next coefficient using the formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
            // Here, 'i' is 'n' (current row) and 'j' is 'k-1' (previous element's index)
            // So, the next coefficient (for index j+1) is calculated from the current one (for index j).
            // The formula becomes: current_coeff * (row - current_index) / (current_index + 1)
            coefficient = coefficient * (i - j) / (j + 1);
        }
        // After printing all elements in a row, move to the next line
        printf("\n");
    }

    // Indicate successful execution of the program
    return 0;
}