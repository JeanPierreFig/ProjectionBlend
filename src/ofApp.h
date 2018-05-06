
#pragma once

#include "ofMain.h"
#include "BlendMask.h"
#include "ofSetting.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    void setupSecondWin();
    void drawSecondWin(ofEventArgs & args);
    void ofSetVideoSizeForScreen();
    void playVideoForPath(string & path);
    
    int curentBlendWidth;
    int curentBlendColor;
    BlendMask blendRight;
    BlendMask blendLeft;
    shared_ptr<ofSetting>  guiW;
    ofVideoPlayer firstPlayer;
};
