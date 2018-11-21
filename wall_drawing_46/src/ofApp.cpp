#include "ofApp.h"

// Wall Drawing 46
// Vertical lines, not straight, not touching, covering the wall evenly.

//--------------------------------------------------------------
void ofApp::setup(){


    buffer.allocate(w, h);
    buffer.begin();

    ofBackground(255);
    ofSetColor(100);
    ofSetLineWidth(2);

    
    for(int i=0; i<w; i+=scale){

        ofPolyline line;
        float randomHeight = ofRandom(h/4, h);
        
        for(int j=0; j<randomHeight; j+=1){
            line.addVertex(i, j);
            if (randomHeight<h){
                ofPolyline line2;
                for(int k=0; k<h; k++){
                    line2.addVertex(i, randomHeight+20+k);
                }
                for(auto &vert2: line2.getVertices()){
                    float noiseVal= ofNoise(xOff)*20;
                    vert2.x += noiseVal;
                    xOff += 0.01;
                }
                line2.draw();
            }

        }
        

        
        for(auto &vert: line.getVertices()){
            float noiseVal= ofNoise(xOff)*20;
            vert.x += noiseVal;
            xOff += 0.01;
        }

//        line.draw();

    }
    
    buffer.end();
    
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    buffer.draw(0,0);
}
