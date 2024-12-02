#include "color.h"

class Image{
    private:
        short int MAX_IMAGE_SIZE;
        short int MAX_IMAGE_BORDER_SIZE;
        Color color_values;

    public:
        static Image& get();
    
}