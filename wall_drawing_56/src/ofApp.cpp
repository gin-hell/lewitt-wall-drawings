#include "ofApp.h"

// Wall Drawing 47
// A wall divided into fifteen equal parts, each with a different line direction, and all combinations.


//--------------------------------------------------------------

void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(100);
    
    for(int i=0; i<=sq*2; i+=scale){
        ofDrawLine(w/2-sq+i, h/2-sq, w/2-sq+i, h/2+sq);
        ofDrawLine(w/2, h/2-sq+i, w/2+sq, h/2-sq+i);
    }
    
    for(int i=0; i<=sq; i+=scale){
        ofDrawLine(w/2-sq, h/2+i, w/2, h/2+i);
    }

    for(int i=0; i<=sq*3; i+=scale){
        ofDrawLine(w/2-sq+i, h/2, w/2-sq, h/2+i);
    }
    
    for(int i=0; i<=sq; i+=scale){
        ofDrawLine(w/2, h/2+sq-i, w/2+i, h/2+sq);
        ofDrawLine(w/2+sq-i, h/2, w/2+sq, h/2+i);
    }
    
    ofSetColor(255);
    ofDrawRectangle(0, 0, w/2-sq-1, h);
    ofDrawRectangle(0, 0, w, h/2-sq-1);
    ofDrawRectangle(w/2+sq+1, h/2+sq+1, w, 0-h);
    ofDrawRectangle(w/2-sq, h/2+sq, w, h);
    
}








