#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofLoadImage(pixels, "wall.png");
    texture.loadData(pixels);

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    ofNoFill();

    std::cout<<ofGetMouseX()<<", "<<ofGetMouseY()<<std::endl;

}

//--------------------------------------------------------------
void ofApp::draw(){

    texture.draw(0,0);
    ofSetColor(0, 0, 100, 50);
    
    //----- far left object -----
    
    ofDrawLine(0,0,247,586);
    ofDrawLine(0,0,267,586);
    ofDrawLine(0,0,247,601);
    ofDrawLine(0, 653, 247, 586);
    ofDrawLine(0, 653, 247, 601);
    ofDrawLine(0, 653, 267, 601);
    ofDrawLine(w, 0, 247, 586);
    ofDrawLine(w, 0, 267, 586);
    ofDrawLine(w, 0, 267, 601);
    ofDrawLine(w, 653, 247, 601);
    ofDrawLine(w, 653, 267, 586);
    ofDrawLine(w, 653, 267, 601);

    ofDrawLine(267, 586, 281, 605);
    ofDrawLine(267, 586, 281, 570);
    ofDrawLine(247, 586, 281, 570);
    ofDrawLine(267, 601, 281, 605);
    
    
    //----- elec outlet -----
    
    ofDrawLine(0,0,281,570);
    ofDrawLine(0,0,281,605);
    ofDrawLine(0,0,301,570);
    ofDrawLine(0, 653, 281, 605);
    ofDrawLine(0, 653, 281, 570);
    ofDrawLine(0, 653, 301, 605);
    ofDrawLine(w, 0, 281, 570);
    ofDrawLine(w, 0, 301, 570);
    ofDrawLine(w, 0, 301, 605);
    ofDrawLine(w, 653, 281, 570);
    ofDrawLine(w, 653, 281, 605);
    ofDrawLine(w, 653, 301, 605);
    
    ofDrawLine(301, 570, 1196, 673);
    ofDrawLine(301, 570, 1196, 655);
    ofDrawLine(301, 605, 1196, 655);
    ofDrawLine(301, 570, 1215, 655);

    
    //----- far right object -----
    
    ofDrawLine(0, 0, 1197, 655);
    ofDrawLine(0, 0, 1197, 673);
    ofDrawLine(0, 0, 1215, 655);
    ofDrawLine(0, 653, 1197, 655);
    ofDrawLine(0, 653, 1197, 673);
    ofDrawLine(w, 0, 1197, 655);
    ofDrawLine(w, 0, 1215, 655);
    ofDrawLine(w, 0, 1215, 673);
    ofDrawLine(w, 653, 1197, 655);
    ofDrawLine(w, 653, 1215, 673);
    ofDrawLine(w, 653, 1215, 655);
    
    ofDrawLine(247, 601, 1197, 673);

    
    ofSetColor(ofColor::white);
}



