#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

#define CS_pin A1
#define A0_pin A3
#define RST_pin A2

Adafruit_ST7735 tft = Adafruit_ST7735(CS_pin,A0_pin,RST_pin);
int uptime = 0;
int LEDpin = 2;


void setup(){
 pinMode(LEDpin, OUTPUT);  // sets the pin as output
 analogWrite(LEDpin,255);
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
