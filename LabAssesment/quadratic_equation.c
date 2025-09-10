#include <stdio.h>
#include <math.h> // For sqrt() function

int main()
{
  float a, b, c, discriminant, root1, root2; // Variables for coefficients and roots

  printf("Enter coefficients a, b and c: ");
  scanf("%f %f %f", &a, &b, &c); // Input equation coefficients

  discriminant = b * b - 4 * a * c; // Formula: b^2 - 4ac

  if (discriminant > 0)
  {
    // Two distinct real roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
  }
  else if (discriminant == 0)
  {
    // One real root (repeated)
    root1 = -b / (2 * a);
    printf("Roots are real and same: %.2f\n", root1);
  }
  else
  {
    // Complex roots
    float realPart = -b / (2 * a);
    float imagPart = sqrt(-discriminant) / (2 * a);
    printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
           realPart, imagPart, realPart, imagPart);
  }

  return 0;
}
