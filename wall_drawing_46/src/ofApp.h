#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    float w = ofGetWidth();
    float h = ofGetHeight();
    ofPolyline poly;
    
    float randomH = 0;
    bool isDrawing = true;
    ofFbo buffer;
    
    float scale = 20;
    float xOff = 100;
    float xInc = 0.1;
		
};
