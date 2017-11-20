#include "ofApp.h"

//--------------------------------------------------------------


void ofApp::setup(){
    

  

    blendRight = BlendMask(125,BLEND_RIGHT,400);
    
    firstPlayer.load("pirates.mp4");
    firstPlayer.play();
    
  
   
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    firstPlayer.update();
    
    
    //Check if the silder is moving and then recreate the blend object.
    //This use about 10 to 20% less CPU if not done this way.
    if (curentBlendWidth != guiW->sizeWidth || curentBlendColor != guiW->grayAlpha){
        
        curentBlendColor = guiW->grayAlpha;
        curentBlendWidth = guiW->sizeWidth;
        
        blendRight = BlendMask(guiW->grayAlpha,BLEND_RIGHT,guiW->sizeWidth);
        blendLeft = BlendMask(guiW->grayAlpha,BLEND_LEFT,guiW->sizeWidth);
        
        
    }
    
    

    
   


}


//--------------------------------------------------------------
void ofApp::draw(){
    
  
     firstPlayer.draw(0, 0);
    
     //This is the last thing to we need to draw. it need to be on top.
     blendRight.Draw();
    
    
}




void ofApp::setupSecondWin(){
    
    
    blendLeft = blendRight = BlendMask(125,BLEND_LEFT,400);
    
}

void ofApp::drawSecondWin(ofEventArgs & args){
    
    
    firstPlayer.draw(0, 0);
    
    
    //This is the last thing to we need to draw. it need to be on top.
    blendLeft.Draw();

    
}

