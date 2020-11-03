#include<cstdint>
#include<string>
#include<memory>

namespace udemyCourse{

class Bitmap{
private:
    int width_;
    int height_;
    std::unique_ptr<uint8_t> pPixel_; 
public:
    Bitmap(int width, int height);
    void SetPixel(const int x, const int y, const uint8_t red, const uint8_t green, const uint8_t blue);
    bool write(std::string name);

    virtual ~Bitmap();

};

}