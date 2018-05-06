//
//  Blend.hpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 10/29/17.
//
#include "ofMain.h"

#pragma once

#define BLEND_RIGHT 2
#define BLEND_LEFT 1

class BlendMask {

private:
    ofImage OverlayImage;
    int _alpha;
    int _ofType;
    int _sizeOfGradient;
    int w;
    
    
public:
    BlendMask() = default;
    BlendMask(int alpha,int ofType,int sizeOfGradient);
    void  Draw();
    int h;

};

