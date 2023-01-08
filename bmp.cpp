#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <algorithm>
#include <graphics.h>

const int BMP_HEADER_SIZE = 54;

struct Color {
    uint8_t blue;
    uint8_t green;
    uint8_t red;
};

struct Image {
    int width;
    int height;
    Color* pixels;
};

// Function prototypes
Image readBMP(const std::string& filename);

void applyEffect(Image& image);
void drawImage(const Image& image);

int main() {
    // init graph
    int gd = DETECT,gm; 
    initgraph (&gd,&gm,NULL);

    std::string filename;
    std::cout << "Enter the name of the BMP file: ";
    std::cin >> filename;
    Image image = readBMP(filename);
    for (int i = 0; i < 10; i++) {
        applyEffect(image);
        drawImage(image);
    }

    return 0;
}

// Function definitions
Image readBMP(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);

    // Read in the BMP file header
    char header[BMP_HEADER_SIZE];
    file.read(header, BMP_HEADER_SIZE);

    // Extract width and height from header
    int width = *(int*)&header[18];
    int height = *(int*)&header[22];

    int total = width * height;
    // Allocate memory for image pixels
    Color* pixels = new Color[total];

    // Read in the pixel data
    file.read((char*)pixels, width * height * sizeof(Color));

    return {width, height, pixels};
}



void applyEffect(Image& image) {
    // Modify the pixel data in the image object
    // ...
}

void drawImage(const Image& image) {
    // Draw the image to the screen
    // ...
}
