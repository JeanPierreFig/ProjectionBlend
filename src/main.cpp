#include "ofMain.h"
#include "ofApp.h"
#include "ofSetting.h"
#include "ofAppGLFWWindow.h"





//========================================================================
int main(){
    

    
    
    ofGLFWWindowSettings settings;
    
    
    settings.width = 250;
    settings.height = 500;
    settings.setPosition(ofVec2f(0,0));
    settings.resizable = true;
    settings.title = "Settings";
    
    shared_ptr<ofAppBaseWindow> settingsWindow = ofCreateWindow(settings);
    //settings.shareContextWith = mainWindow;
    
    shared_ptr<ofSetting> settingsApp(new ofSetting);
    
    
    settings.width = 1080;
    settings.height = 720;
    settings.setPosition(ofVec2f(300,0));
    settings.resizable = true;
    settings.title = "Left";
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
    
    
    
    settings.width = 1080;
    settings.height = 720;
    settings.setPosition(ofVec2f(0,0));
    settings.resizable = true;
    settings.title = "Right";
    settings.shareContextWith = mainWindow;
    
    shared_ptr<ofAppBaseWindow> secondWindow = ofCreateWindow(settings);
    
    shared_ptr<ofApp> mainApp(new ofApp);
    mainApp->setupSecondWin();
    mainApp->guiW = settingsApp;
    
    
    
    ofAddListener(secondWindow->events().draw ,mainApp.get(),&ofApp::drawSecondWin);
    
    
    
    
    

    ofRunApp(mainWindow, mainApp);
    ofRunApp(settingsWindow, settingsApp);
    ofRunMainLoop();
    
    
}
