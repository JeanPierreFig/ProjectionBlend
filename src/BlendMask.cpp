//
//  Blend.cpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 10/29/17.
//

#include "BlendMask.h"




BlendMask::BlendMask(int alpha,int OfType){
    
    _alpha = alpha;
    _OfType = OfType;
   
    w = ofGetWidth();
    h = ofGetHeight();
    
    OverlayImage.allocate(alpha,1,OF_IMAGE_COLOR_ALPHA);
    

    //Generate a simple black gradient from 255 to 0 alpha
    for (float x=0; x <alpha; x++) {
        
       OverlayImage.setColor(x,0,ofColor(0,0,0,x));
    }
    
    //Update the image on the graphics card. after modifying the pixels in memory.
    OverlayImage.update();
    
    //Resize the image to fit our screen and (make it 1/6 of the screen) <- Im not sure about this yet.
    OverlayImage.resize(w/6, h);
   
    
    //If we need to blend_left the image should be mirror.
    if (_OfType == BLEND_LEFT){
        
        OverlayImage.mirror(false, true);
    }
    
    
    
    
}




void BlendMask::Draw(){
    
    
    if (_OfType == BLEND_LEFT){
        
         OverlayImage.draw(0, 0);
    }
    else if (_OfType == BLEND_RIGHT){
        
         OverlayImage.draw(w/6, h-h);
    }
    
    
    
    
    
}
 



