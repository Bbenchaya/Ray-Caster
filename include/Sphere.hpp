//
//  Sphere.hpp
//  CG_EX2
//
//  Created by Asaf Chelouche on 16/11/15.
//  Copyright © 2015 Bbenchaya. All rights reserved.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include "Primitive.hpp"

class Sphere : public Primitive{
    
private:
    Vector3f center;
    float radius;
    Vector3f ka;
    Vector3f kd;
    Vector3f ks;
    float shine;
    
public:
    Sphere(const Vector3f &center,
           float radius,
           const Vector3f &ka,
           const Vector3f &ks,
           const Vector3f &kd,
           float shine);
    
    pair<float, Vector3f> intersect(Ray &ray);

    Vector3f getNormal(Vector3f point);

};

#endif /* Sphere_hpp */
