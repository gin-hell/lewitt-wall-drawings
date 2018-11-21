#pragma once

#include "ofMain.h"
#include "math.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    float height = ofGetHeight();
    float width = ofGetWidth();
    
    float foot = height/3;
    float scale = 5;

    float leg = sqrt((foot*foot)/2);
    float h = ofDist(0, height, width, 0);
    float angle = (asin(height/h)) * (180.0 / PI);
};
