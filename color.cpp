#include "color.h"
#include <stdexcept>

float &Color::operator[](char color){
        switch(color){
            case 'r':
                return rgb[0];
            case 'g':
                return rgb[1];
            case 'b':
                return rgb[2];
            default:
                throw std::out_of_range("Unexpected identifier");
         }
    }