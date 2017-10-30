#pragma once

#include "ofMain.h"
#include "BlendMask.h"

class ofApp : public ofBaseApp{

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
    
    
    BlendMask blend;
    
    //Remove comment to add a mask to the right.
    //BlendMask blend2;
    ofImage img;
    int mouseX;
    int mouseY;
    ofMesh temp;
    int w;
    int h;
};
