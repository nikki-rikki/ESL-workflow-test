#include "vector3d.h"

Vector3D add(Vector3D a, Vector3D b) {
    Vector3D r = {a.x + b.x, a.y + b.y, a.z + b.z};
    return r;
}

Vector3D sub(Vector3D a, Vector3D b) {
    Vector3D r = {a.x - b.x, a.y - b.y, a.z - b.z};
    return r;
}

double dot(Vector3D a, Vector3D b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vector3D cross(Vector3D a, Vector3D b) {
    Vector3D r = {a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x};
    return r;
}
