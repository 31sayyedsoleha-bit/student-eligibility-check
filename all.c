#include <stdio.h>

int main() {
    float phy, chem, math, avg;

    // Input marks
    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Math marks: ");
    scanf("%f", &math);

    // Calculate average
    avg = (phy + chem + math) / 3;

    // Display average
    printf("\nAverage of PCM = %.2f\n", avg);

    // Check eligibility using conditional operator
    (avg >= 50) ? printf("Student is eligible for admission.\n") 
                : printf("Student is not eligible for admission.\n");

    return 0;
}
