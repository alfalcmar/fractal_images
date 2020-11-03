#include"Bitmap.h"
#include"BitmapFileHeader.h"
#include"BitmapInfoHeader.h"

namespace udemyCourse{

Bitmap::Bitmap(int width, int height) : width_(width), height_(height), pPixel_(new uint8_t[width * height *3 ]{}){


}

void Bitmap::SetPixel(const int x, const int y, const uint8_t red, const uint8_t green, const uint8_t blue){
}

bool Bitmap::write(std::string file_name){
    BitmapInfoHeader infoHeader;
    BitmapFileHeader fileHeader;

    fileHeader.fileSize = sizeof(BitmapFileHeader)+sizeof(BitmapInfoHeader)+width_*height_*3;
    fileHeader.dataOffset = sizeof(BitmapInfoHeader)+sizeof(BitmapFileHeader);

    infoHeader.width = width_;
    infoHeader.height = height_;


    return false;
}


Bitmap::~Bitmap(){

}

}