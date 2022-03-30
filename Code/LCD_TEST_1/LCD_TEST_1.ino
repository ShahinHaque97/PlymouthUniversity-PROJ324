#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

#define CS_pin 10
#define A0_pin 8
#define RST_pin 9

Adafruit_ST7735 tft = Adafruit_ST7735(CS_pin,A0_pin,RST_pin);
int uptime = 0;

void setup(){
 tft.initR(INITR_BLACKTAB);
 tft.setSPISpeed(40000000);
 tft.fillScreen(ST7735_BLACK);
 tft.setTextColor(ST7735_WHITE,ST7735_BLACK);  
 tft.setRotation(3);
}

void loop(){
  
 tft.setCursor(0,0);
 tft.print("Hello, my uptime is ");
 tft.print(uptime);
 tft.print (" seconds");
 uptime++;
 delay(1000); 
}
