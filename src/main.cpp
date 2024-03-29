#include <iostream>

#include "ofMain.h"
#include "ofApp.h"

#include "rtl-sdr.h"

//========================================================================
int main( ){
  int devices = rtlsdr_get_device_count();
  std::cout<< devices << " devices connected" <<std::endl;

	ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp());

}
