#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    float sixth = w/6;
    
    float scale = 10;
    
};


