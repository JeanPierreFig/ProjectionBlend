//
//  Blend.cpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 10/29/17.
//

#include "BlendMask.h"




BlendMask::BlendMask(int alpha,int ofType, int sizeOfGradient){
    
    _alpha = alpha;
    _ofType = ofType;
    _sizeOfGradient = sizeOfGradient;
   
    w = ofGetWidth();
    h = ofGetHeight();
    
    //allocate the space for the alpha and just 1 pixels
    OverlayImage.allocate(alpha,1,OF_IMAGE_COLOR_ALPHA);
    
    
    //Generate a simple black gradient from 0 to 255 alpha
    for (float i=0; i <alpha; i++) {
        
       OverlayImage.setColor(i,0,ofColor(0,0,0,i));
    }
    
    //Update the image on the graphics card. after modifying the pixels in memory.
    OverlayImage.update();
    
    //Resize the image to fit our screen and (make it 1/6 of the screen) <- Im not sure about this yet.
    OverlayImage.resize(sizeOfGradient, h);
   
    
    
    //If we need to blend_left the image should be mirrored.
    if (ofType == BLEND_LEFT){
        
        OverlayImage.mirror(false, true);
    }
    
    
    
    
}




void BlendMask::Draw(){
    
    
    if (_ofType == BLEND_LEFT){
        
         OverlayImage.draw(0, 0);
    }
    else if (_ofType == BLEND_RIGHT){
        
         OverlayImage.draw(w-_sizeOfGradient, 0);
    }
    
    
    
    
    
}
 



