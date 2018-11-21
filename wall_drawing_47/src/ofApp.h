#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    float w = ofGetWidth();
    float h = ofGetHeight();
    float fifteenth = w/15;
    
    float scale = 5;
    
};



