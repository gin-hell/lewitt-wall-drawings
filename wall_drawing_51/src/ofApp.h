#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    ofPixels pixels;
    ofTexture texture;
    
};
