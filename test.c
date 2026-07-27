#include <stdio.stdio.h>

int main() {
    double num1, num2;

        printf("Enter first number: ");
            scanf("%lf", &num1);

                printf("Enter second number: ");
                    scanf("%lf", &num2);

                        if (num1 > num2) {
                                printf("%.2lf is the biggest number.\n", num1);
                                    } else if (num2 > num1) {
                                            printf("%.2lf is the biggest number.\n", num2);
                                                } else {
                                                        printf("Both numbers are equal.\n");
                                                            }

                                                                return 0;
                                                                }
                                                                