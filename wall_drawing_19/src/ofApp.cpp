#include "ofApp.h"

// Wall Drawing 19
// A wall divided vertically into six equal parts, with two of the four kinds of line directions superimposed in each part.


//--------------------------------------------------------------

void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetColor(150);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(1.0);
    ofSetColor(150);
    
    ofDrawLine(sixth, 0, sixth, h);
    ofDrawLine(sixth*2, 0, sixth*2, h);
    ofDrawLine(sixth*3, 0, sixth*3, h);
    ofDrawLine(sixth*4, 0, sixth*4, h);
    ofDrawLine(sixth*5, 0, sixth*5, h);

    for (int i =0 ; i <= h*2; i+=scale){
        ofDrawLine(sixth*3-i, 0, sixth*3, i);
        ofDrawLine(sixth*2, i, sixth*2+i, 0);
        
    }
    
    for(int i=0; i<h; i+=scale){
        ofDrawLine(sixth, i, sixth*2, i);
        ofDrawLine(sixth*4, i, w, i);
    }
    
    for (int i =0 ; i <= sixth; i+=scale){
        ofDrawLine(i, 0, i, h);
        ofDrawLine(sixth*5+i, 0, sixth*5+i, h);
        ofDrawLine(sixth*3+i, 0, sixth*3+i, h);
        
    }

    
    
    
    
    
}






