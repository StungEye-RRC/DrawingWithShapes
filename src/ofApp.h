#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Shape.h"
#include <vector>

class ofApp : public ofBaseApp {

public:
	void setup() override;
	void update() override;
	void draw() override;

	void keyPressed(int key) override;
	void keyReleased(int key) override;
	void mouseMoved(int x, int y) override;
	void mouseDragged(int x, int y, int button) override;
	void mousePressed(int x, int y, int button) override;
	void mouseReleased(int x, int y, int button) override;
	void mouseEntered(int x, int y) override;
	void mouseExited(int x, int y) override;
	void windowResized(int w, int h) override;
	void dragEvent(ofDragInfo dragInfo) override;
	void gotMessage(ofMessage msg) override;

	std::vector<std::unique_ptr<Shape>> shapes;

	bool mouseIsOnCanvas = false;
	bool userIsEditingShape = false;

	ofxIntSlider rectangleWidth;
	ofxIntSlider rectangleHeight;
	ofxIntSlider heartSize;
	ofxFloatSlider shapeRotation;
	ofxColorSlider shapeColor;
	ofxPanel gui;
};
