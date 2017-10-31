#include "ofApp.h"

//--------------------------------------------------------------


void ofApp::setup(){
    
    
    
  
     ofSetBackgroundColor(255,255,255);
    
     w = ofGetWidth();
     h = ofGetHeight();
    
     //100 is the alpha value of the blend, this can be from 0 to 255.
     blend = BlendMask(255, BLEND_LEFT);
    
     
     //Remove comment to add a mask to the right.
     //blend2  = BlendMask(100,BLEND_RIGHT);
  
     //Try TestImage.jpg
     img.load("TestImage2.jpg");
    
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //Test Image 
    img.resize(w, h);
    img.draw(0,0);
    
    
    
    //Call the draw function in the Blend object.
    blend.Draw();
    
    //Remove comment to add a mask to the right.
    //blend2.Draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    mouseX = x;
    mouseY = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
