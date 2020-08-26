#include "Color_Assignment.h"

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
    
    std::string get_color_coding()
    {
	    std::string color_mapping = "";
	    for (int i = 0; i < numberOfMajorColors*numberOfMinorColors; i++)
	    {
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i + 1);
		color_mapping = color_mapping + "\n" + std::to_string(i+1) + " : " + colorPair.ToString();
	    }
	    return color_mapping;
	}
}
