#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    double x, y, z;
} Vector3D;

Vector3D add(Vector3D a, Vector3D b);
Vector3D sub(Vector3D a, Vector3D b);
double dot(Vector3D a, Vector3D b);
Vector3D cross(Vector3D a, Vector3D b);

#endif
