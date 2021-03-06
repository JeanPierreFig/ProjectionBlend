//
//  ofSetting.hpp
//  ProjectionBlend
//
//  Created by Jean Pierre on 11/10/17.
//


#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofSetting : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void updateBlend();
    void chooseFile();
   // void videoPath(String path);
    
    ofxIntSlider sizeWidth;
    ofxIntSlider grayAlpha;
    ofxButton chooseButton;
    ofxLabel fileLable;
    ofxPanel gui;
    ofEvent<string> onVideoPathChosen;
};
