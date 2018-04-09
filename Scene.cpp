#include <iostream>
#include "Scene.h"

using namespace std;


Element::Element(Action action, string size, string color, string x, string y, string text, Shape shape) {    
    _action = action;
    _color = convertColor(color);
    _size = convertSize(size);
    _shape = shape;
    _text = text;
    setPosition(x, y);    
};

Shape Element::convertShape(string shape) {
    if(shape == "circle") return Circle;
    if(shape == "square") return Square;

    return NoShape;
}

Color Element::convertColor(string color)
{    
    if(color == "black")    return Black;
    if(color == "blue")     return Blue;
    if(color == "brown")    return Brown;
    if(color == "green")    return Green;
    if(color == "orange")   return Orange;
    if(color == "purple")   return Purple;
    if(color == "red")      return Red;
    if(color == "yellow")   return Yellow;
    if(color == "white")    return White;
    
    return Black;
}

Scene_Size Element::convertSize(string size)
{    
    if(size == "big")       return Big;
    if(size == "medium")    return Medium;
    if(size == "small")     return Small;
    
    return Medium;        
}

void Element::setPosition(string x, string y) {        
    
    _x_position = Left;

    if(x == "left")     _x_position = Left;
    if(x == "center")   _x_position = X_Center;
    if(x == "right")    _x_position = Right;                    
    
    _y_position = Top;
    
    if(y == "top")      _y_position = Top;
    if(y == "center")   _y_position = Y_Center;
    if(y == "bottom")   _y_position = Bottom;                    
}

Scene::Scene(string name, vector<Element> elements) {
    _name = name;
    _elements = elements;
};

Action Element::getAction() {
    return _action;
}

Color Element::getColor() {
    return _color;
}

X_Position Element::getX() {
    return _x_position;
}

Y_Position Element::getY() {
    return _y_position;
}

Scene_Size Element::getSize() {
    return _size;
}

string Element::getText() {
    return _text;
}

Shape Element::getShape() {
    return _shape;
}

int Scene::getSize(int sizeImg, Scene_Size size) {
    switch(size)
    {
        case Big: return sizeImg * 80 / 100 ;
        case Medium: return sizeImg * 50 / 100 ;
        case Small: return sizeImg * 20 / 100 ;
    }
}

int Scene::getX(int sizeImg, Scene_Size size, X_Position x, int length) {    
    switch(size)
    {
        // text in CImg is not handle perfectly, so we mess a bit with the sizes
        case Big:       return getPosition(sizeImg, (Scene::FONT_BIG * 0.82) * length, x);            
        case Medium:    return getPosition(sizeImg, (Scene::FONT_MEDIUM * 0.82) * length, x); 
        case Small:     return getPosition(sizeImg, (Scene::FONT_SMALL * 0.82) * length, x); 
    }
}

int Scene::getY(int sizeImg, Scene_Size size, Y_Position y) {    
    switch(size)
    {
        case Big:       return getPosition(sizeImg, Scene::FONT_BIG, y);            
        case Medium:    return getPosition(sizeImg, Scene::FONT_MEDIUM, y); 
        case Small:     return getPosition(sizeImg, Scene::FONT_SMALL, y); 
    }
}

int Scene::getSizeFont(Scene_Size size) {
    switch(size)
    {
        case Big:       return Scene::FONT_BIG;            
        case Medium:    return Scene::FONT_MEDIUM; 
        case Small:     return Scene::FONT_SMALL; 
    }
}

unsigned char* Scene::getColor(Color color) {        
    unsigned char* values = new unsigned char[3];    
    
    switch(color)
    {        
        case Black:
            values[0] = 0;
            values[1] = 0;
            values[2] = 0;
            break;
        case Blue:
            values[0] = 0;
            values[1] = 0;
            values[2] = 255;            
            break;
        case Brown:
            values[0] = 165;
            values[1] = 42;
            values[2] = 42;
            break;
        case Green:
            values[0] = 0;            
            values[1] = 255;
            values[2] = 0;
            break;            
        case Red:
            values[0] = 255;             
            values[1] = 0;
            values[2] = 0;
            break;
        case Orange:
            values[0] = 255;
            values[1] = 165;             
            values[2] = 0;
            break;
        case Purple:
            values[0] = 128;             
            values[1] = 0;            
            values[2] = 128;
            break;
        case Yellow:
            values[0] = 255;
            values[1] = 255;
            values[2] = 0;
            break; 
        case White:
            values[0] = 255;
            values[1] = 255;
            values[2] = 255;
            break;
    }

    return values;
}

int Scene::getPosition(int sizeImg, int sizeElement, X_Position x) {
    switch(x)
    {
        case Left: return sizeImg * 10 / 100 ;
        case X_Center: return (sizeImg - sizeElement) / 2 ;
        case Right: return (sizeImg * 90 / 100) - sizeElement ;
    }
}

int Scene::getPosition(int sizeImg, int sizeElement, Y_Position y) {
    switch(y)
    {
        case Top: return sizeImg * 10 / 100 ;
        case Y_Center: return (sizeImg - sizeElement) / 2 ;
        case Bottom: return (sizeImg * 90 / 100) - sizeElement ;
    }
}

void Scene::draw() {
	CImg<unsigned char> image(512,512,1,3,255);       

    for (auto element : _elements) { 
        unsigned char* el_color = getColor(element.getColor());        
        Action action = element.getAction(); 
        Shape shape = element.getShape();       
	
        if(action == Write) {            
            int x = getX(512, element.getSize(), element.getX(), element.getText().length());
            int y = getY(512, element.getSize(), element.getY());
			CImgList<unsigned char> font = CImgList<unsigned char>::font(getSizeFont(element.getSize()), false);
			// I've modified the last argument of this function because the MS Compiler complained about va_args
			image.draw_text(x, y, element.getText().c_str(), el_color, 0, 1, font);
        }
        else if(action == Draw) {            
            int size = getSize(512, element.getSize());
            int x = getPosition(512, size, element.getX());
            int y = getPosition(512, size, element.getY());
            switch(shape) {
                case Square:
                    image.draw_rectangle(x, y, x + size, y + size, el_color, 1);
                    break;
                case Circle:
                    image.draw_circle(x + (size / 2), y + (size / 2), size / 2, el_color, 1);
                    break;
                default:
                    break;
            }            
        }
                        
        delete el_color;
    }        
	
    CImgDisplay main_disp(image, _name.c_str());
	
    while (!main_disp.is_closed()) {
        main_disp.wait();
    }
    image.save_bmp(_name.append(".bmp").c_str());    
};