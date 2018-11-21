#include "ofApp.h"

// Wall Drawing 47
// A wall divided into fifteen equal parts, each with a different line direction, and all combinations.


//--------------------------------------------------------------

void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetColor(100);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(100);
    
    for(int i=0; i<=h; i+=scale){
        ofDrawLine(0, i, fifteenth, i);
        ofDrawLine(fifteenth*4, i, fifteenth*7, i);
        ofDrawLine(fifteenth*10, i, fifteenth*13, i);
        ofDrawLine(fifteenth*14, i, w, i);
    }
    
    for (int i=0; i<=fifteenth; i+=scale){

        ofDrawLine(fifteenth+i, 0, fifteenth+i, h);
        ofDrawLine(fifteenth*4+i, 0, fifteenth*4+i, h);
        ofDrawLine(fifteenth*7+i, 0, fifteenth*7+i, h);
        ofDrawLine(fifteenth*8+i, 0, fifteenth*8+i, h);
        ofDrawLine(fifteenth*10+i, 0, fifteenth*10+i, h);
        ofDrawLine(fifteenth*11+i, 0, fifteenth*11+i, h);
        ofDrawLine(fifteenth*13+i, 0, fifteenth*13+i, h);
        ofDrawLine(fifteenth*14+i, 0, fifteenth*14+i, h);
    }
    
    for (int i =0; i<=h+fifteenth; i+=scale) {
        
        ofDrawLine(fifteenth*2, i-fifteenth, fifteenth*3, i);
        ofDrawLine(fifteenth*5, i-fifteenth, fifteenth*6, i);
        ofDrawLine(fifteenth*7, i-fifteenth, fifteenth*8, i);
        ofDrawLine(fifteenth*9, i-fifteenth, fifteenth*10, i);
        ofDrawLine(fifteenth*11, i-fifteenth, fifteenth*12, i);
        ofDrawLine(fifteenth*12, i-fifteenth, fifteenth*13, i);
        ofDrawLine(fifteenth*13, i-fifteenth, fifteenth*14, i);
        ofDrawLine(fifteenth*14, i-fifteenth, fifteenth*15, i);
    }
    
    for (int i=0; i<=h+fifteenth; i+=scale) {
        
        ofDrawLine(fifteenth*3, i, fifteenth*4, i-fifteenth);
        ofDrawLine(fifteenth*6, i, fifteenth*7, i-fifteenth);
        ofDrawLine(fifteenth*8, i, fifteenth*9, i-fifteenth);
        ofDrawLine(fifteenth*9, i, fifteenth*10, i-fifteenth);
        ofDrawLine(fifteenth*10, i, fifteenth*11, i-fifteenth);
        ofDrawLine(fifteenth*12, i, fifteenth*13, i-fifteenth);
        ofDrawLine(fifteenth*13, i, fifteenth*14, i-fifteenth);
        ofDrawLine(fifteenth*14, i, fifteenth*15, i-fifteenth);
        
        
    }
    
    ofSetColor(255);
    ofDrawRectangle(0, 0, w, 200);
    ofDrawRectangle(0, h-200, w, h);
    
}







