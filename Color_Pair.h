#include "Color_Assignment.h"
#include <iomanip>
namespace TelCoColorCoder
{
class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;  
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
    
    void print_color_coding()
    {
    std::cout << "\nColor Coding : \n";
    std::cout << "\nNo : "<< "Major Minor\n"<< std::endl;

    for (int i = 0; i < 25; i++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i + 1);
        std::cout<< std::setw(2)<<i+1<<" : "<<colorPair.ToString()<<std::endl;
    }
    }
}
