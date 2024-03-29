//
//  Primitive.hpp
//  CG_EX2
//
//  Created by Asaf Chelouche on 20/11/15.
//  Copyright © 2015 Bbenchaya. All rights reserved.
//

#ifndef Primitive_hpp
#define Primitive_hpp

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <utility>

#include "Ray.hpp"

#include "Vector3f.h"

using namespace std;

class Primitive {

protected:
    const char type;
    bool mirror;
    
public:
    Primitive();
    Primitive(char type);
    virtual Primitive& operator=(const Primitive &other);
    virtual bool operator!=(const Primitive &other);
    virtual pair<float, Vector3f> intersect(Vector3f p0, Vector3f V);
    const char instanceof();
    virtual Vector3f getNormal(Vector3f point);
    virtual Vector3f getKa(Vector3f at_point);
    virtual Vector3f getKd(Vector3f at_point);
    virtual Vector3f getKs(Vector3f at_point);
    virtual float getShine();
    virtual bool isMirror();
};

#endif /* Primitive_hpp */
