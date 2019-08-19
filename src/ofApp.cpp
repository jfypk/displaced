#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (drawTop) {
        ofDrawLine(mouseX - 50, mouseY - 50, mouseX + 50, mouseY - 50);
    } else if (drawLeft) {
        ofDrawLine(mouseX + 50, mouseY - 50, mouseX + 50, mouseY + 50);
    } else if (drawBottom) {
        ofDrawLine(mouseX - 50, mouseY + 50, mouseX + 50, mouseY + 50);
    } else if (drawRight) {
        ofDrawLine(mouseX - 50, mouseY - 50, mouseX - 50, mouseY + 50);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'w') {
        drawTop = true;
    } else if (key == 'd') {
        drawLeft = true;
    } else if (key == 's') {
        drawBottom = true;
    } else if (key == 'a') {
        drawRight = true;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'w') {
        drawTop = false;
    } else if (key == 'd') {
        drawLeft = false;
    } else if (key == 's') {
        drawBottom = false;
    } else if (key == 'a') {
        drawRight = false;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
