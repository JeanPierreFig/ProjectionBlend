//
//  ofSetting.cpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 11/10/17.
//

#include "ofSetting.h"


//--------------------------------------------------------------


void ofSetting::setup(){
    
    
    
    
    gui.setup();
    gui.add(sizeWidth.setup("Width", 255, 0, 255));
    gui.add(grayAlpha.setup("Alpha", 125, 0, 255));
    
        
    
    
    
}

//--------------------------------------------------------------
void ofSetting::update(){
    
    }


//--------------------------------------------------------------
void ofSetting::draw(){
    
    gui.draw();
    

}

void ofSetting::updateBlend(){
    
    
}

//--------------------------------------------------------------
void ofSetting::keyPressed(int key){
    
    
    
}

//--------------------------------------------------------------
void ofSetting::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofSetting::mouseMoved(int x, int y ){
    
    
}

//--------------------------------------------------------------
void ofSetting::mouseDragged(int x, int y, int button){
    
   
}

//--------------------------------------------------------------
void ofSetting::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofSetting::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofSetting::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofSetting::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofSetting::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofSetting::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofSetting::dragEvent(ofDragInfo dragInfo){
    
}
