#include <stdio.h>
#include "vector3d.h"

int main() {
    Vector3D a = {1, 2, 3};
    Vector3D b = {4, 5, 6};

    Vector3D s = add(a, b);
    Vector3D d = sub(a, b);
    double dp = dot(a, b);
    Vector3D c = cross(a, b);

    printf("Sum: %.1f %.1f %.1f\n", s.x, s.y, s.z);
    printf("Sub: %.1f %.1f %.1f\n", d.x, d.y, d.z);
    printf("Dot: %.1f\n", dp);
    printf("Cross: %.1f %.1f %.1f\n", c.x, c.y, c.z);

    return 0;
}
