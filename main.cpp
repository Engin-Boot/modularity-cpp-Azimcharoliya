#include "Color_test.h"

int main() {

    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    std::string color_coding_manual = get_color_coding();
    std::cout<<"\nColor Coding Manual:\n"<<color_coding_manual;
    return 0;
}
