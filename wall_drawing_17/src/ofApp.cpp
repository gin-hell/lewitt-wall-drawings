#include "ofApp.h"

// Wall Drawing 17
// Four-part drawing with a different line direction in each part.


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
    
    for (int i = 0 ; i <= width/2; i+=scale){
        ofDrawLine(i, 0, i, height/2);
    }
    
    for (int i = 0 ; i <= height/2; i+=scale){
        ofDrawLine(width/2, i, width, i);
    }
    
    for (int i =0 ; i <= width; i+=scale){
        ofDrawLine(width/2-i, height/2, width/2, height/2+i);
    }
    for (int i =0 ; i <= width; i+=scale){
        ofDrawLine(width/2+i, height/2, width/2, height/2+i);
    }
    
    ofSetColor(255);
    
    ofDrawRectangle(0, 0, frame, height);
    ofDrawRectangle(width/2-frame/2, 0, frame, height);
    ofDrawRectangle(width-frame, 0, frame, height);
    ofDrawRectangle(0, 0, width, frame);
    ofDrawRectangle(0, height/2-frame/2, width, frame);
    ofDrawRectangle(0, height-frame, width, frame);
    
    
    
    
}





