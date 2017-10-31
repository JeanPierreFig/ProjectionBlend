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
    
    OverlayImage.allocate(h,h,OF_IMAGE_COLOR_ALPHA);

    //This if else is a hack to make it work for now.
    //If blend_Right starts from 0 there will be a black line on screen.
    //If Blend_left starts from 1, there will be a small gap of about one pixel between the blend and the edge of the screen.
    int startY  = 0;
    if (_OfType == BLEND_RIGHT) {
        
        startY = 1;
    }
    else if (_OfType == BLEND_LEFT){
         startY = 0;
    }
    

    for (float y=startY; y< 255; y++) {
        for (float x=0; x<h; x++) {
            
            
            switch (_OfType) {
                case 1:
                    OverlayImage.setColor(y,x,ofColor(y,y,y,alpha));
                    break;
                    
                case 2:
                    OverlayImage.setColor(y,x,ofColor(y*-1,y*-1,y*-1,alpha));
                    break;
                    
                default:
                    break;
            }
            
        }
        
        
    }
    
    OverlayImage.update();
    
    
}




void BlendMask::Draw(){
    
    switch (_OfType) {
        case 1:
            OverlayImage.draw(w-w, h-h);
            break;
            
        case 2:
            OverlayImage.draw(w-255, h-h);
            break;
            
        case 3:
            printf("type 3");
            break;
            
        default:
            break;
    }
    
    
}
 



