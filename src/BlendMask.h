//
//  Blend.hpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 10/29/17.
//
#include "ofMain.h"


#define BLEND_RIGHT 2
#define BLEND_LEFT 1



class BlendMask {

    
private:
    
    
    ofImage OverlayImage;
    int _alpha;
    int _OfType;
    int w;
    int h;
    
    
public:
    
    BlendMask() = default;
    BlendMask(int alpha,int OfType);
    
    void  Draw();
    
    
  
    
    

    
};

