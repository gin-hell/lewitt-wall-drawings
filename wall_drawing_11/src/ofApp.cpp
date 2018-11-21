#include "ofApp.h"

// A wall divided horizontally and vertically into four equal parts.
// Within each part, three of the four kinds of lines are superimposed.

//jenhill.art

//--------------------------------------------------------------

void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetColor(200);
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0 ; i <= width*2; i+=scale){

        if (i <= width/2){
            ofDrawLine(i, 0, i, height);
        } else {
            ofDrawLine(i, 0, i, height/2);
        }

        if (i <= height/2){
            ofDrawLine(0, i, width, i);
        } else {
            ofDrawLine(width/2, i, width, i);
        }
        
        ofDrawLine(i+width/2, height/2, width/2, i+height/2);
        if (i <= width/2){
            ofDrawLine(0, i, i, 0);
        }else {
            ofDrawLine(width/2, i-width/2, 0, i);
        }
        if(i<height/2){
            ofDrawLine(0, height-i, i, height);
        }
        ofDrawLine(i, height/2, height/2+i, height);
        ofDrawLine(width/2, height/2-i, width/2+i, height/2);
        
    }
    
    
}




