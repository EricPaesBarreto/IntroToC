#include <stdio.h>
#include <math.h>

float sphere_surface_area(float radius) {
    return 4 * M_PI * radius * radius;
}

int main() {
    printf("Surface area of a sphere with a radius of 4 is: %.2f\n", sphere_surface_area(4));
}
