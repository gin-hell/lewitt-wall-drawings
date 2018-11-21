#include "ofApp.h"

//Bands of lines 12 inches (30 cm) wide, in three directions (vertical, horizontal, diagonal right) intersecting.

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

//    ofDrawLine(width/2-foot/2, 0, width/2-foot/2, height);
//    ofDrawLine(width/2+foot/2, 0, width/2+foot/2, height);
//    ofDrawLine(0, height/2-foot/2, width, height/2-foot/2);
//    ofDrawLine(0, height/2+foot/2, width, height/2+foot/2);

    
    for(int i=0; i<=width; i+=scale){
        ofDrawLine(i, height/2-foot/2, i, height/2+foot/2);
    }
    
    for (int i=0; i<=height; i+=scale) {
        ofDrawLine(width/2-foot/2, i, width/2+foot/2, i);
    }
    
    ofPushMatrix;
        ofTranslate(-leg, height);
        ofRotateDeg(-(angle+1.5));
//        ofTranslate(0, leg);
        for(int i=0; i<=h*2; i+=scale){
            ofDrawLine(i, 0, i, foot);
        }
    ofPopMatrix();
    
    std::cout<<angle<<std::endl;
//    std::cout<<h<<std::endl;
    
    
//    ofDrawLine(0, height-leg, leg, height);
    
//    for (int i=0; i<=h; i+=scale){
//        ofDrawLine(i*0.8, height-leg-(i*0.6), leg+(i*0.8), height-(i*0.6));
//
//        std::cout<<i*0.8<<std::endl;
//        std::cout<<i*0.6<<std::endl;
//    }
    
    
}


