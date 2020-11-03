#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <cstdint>

#pragma pack(2)

struct BitmapInfoHeader{

    const std::int32_t headerSize{40};
    std::int32_t width;
    std::int32_t height;
    const std::int16_t planes{1};
    const std::int16_t bitsPerPixel{24};
    const std::int32_t compression{0};
    const std::int32_t dataSize{0};
    const std::int32_t horizontalResolution{2400};
    const std::int32_t verticalResolution{2400};
    const std::int32_t colors{0};
    const std::int32_t importantColors{0};
};

#endif
