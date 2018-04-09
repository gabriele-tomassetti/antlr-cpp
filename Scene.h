#include <algorithm>
#include <vector>
#include <string>
#include "libs/CImg.h"

using namespace std;
using namespace cimg_library;

enum Action { Draw, Write, NoAction };
enum Shape { Circle, Square, NoShape }; 
enum Scene_Size { Big, Medium, Small }; 
enum X_Position { Left, X_Center, Right };  
enum Y_Position { Top, Y_Center, Bottom };  
enum Color { Black, Blue, Brown, Green, Red, Orange, Purple, Yellow, White };

class Element {
    public:
        Element(Action action, string size, string color, string x, string y, string text, Shape shape);
        
        Action      getAction();
        Color       getColor();   
        X_Position  getX();
        Y_Position  getY();
        Scene_Size  getSize();
        string      getText();
        Shape       getShape();

        static Shape convertShape(string shape);
    
    private:
        Action      _action;
        Color       _color;
        X_Position  _x_position;
        Y_Position  _y_position; 
        Scene_Size  _size;   
        string      _text;
        Shape       _shape;
        
        //Action convertAction(string action);
        Color convertColor(string color);
        Scene_Size convertSize(string size);
        void setPosition(string x, string y);
};

class  Scene {
    public:
        Scene(string name, vector<Element> elements);   
        void draw();

    private:
        string              _name;
        vector<Element>     _elements;
        
        static const int    FONT_BIG = 53;
        static const int    FONT_MEDIUM = 23;
        static const int    FONT_SMALL = 13;

        int getSize(int sizeImg, Scene_Size size);
        int getSizeFont(Scene_Size size);
        int getX(int sizeImg, Scene_Size size, X_Position x, int length);
        int getY(int sizeImg, Scene_Size size, Y_Position y);
        int getPosition(int sizeImg, int sizeElement, X_Position x);
        int getPosition(int sizeImg, int sizeElement, Y_Position y);
        unsigned char* getColor(Color color);
};

