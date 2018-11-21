#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    float scale = 5;
    float frame = 25;
    
};

