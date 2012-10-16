/*
 * PlasmaDisplayTest.h
 *
 * Created: 16-10-2012 9:56:53
 *  Author: Jelmer Bruijn
 */ 


#ifndef PLASMADISPLAYTEST_H_
#define PLASMADISPLAYTEST_H_





#endif /* PLASMADISPLAYTEST_H_ */
void SetCursorPos(uint8_t row, uint8_t col);
void SetPixelPos(uint8_t row, uint16_t column);
void SelectDisplayPage(uint8_t page);
void SelectOffscreenPage(uint8_t page);
void SetCursorMode(uint8_t mode);
uint8_t GetBit(char* image,uint16_t column, uint8_t row);
void WriteData(uint8_t data);
void FillScreen(char* image);