#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    float sq = 300;
    
    float scale = 10;
    
};




