#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SoftwareSerial.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
SoftwareSerial Myserial1(2, 3);
SoftwareSerial Myserial2(7, 8);
SoftwareSerial Myserial3(10, 11);

int dist;
int check;
int i;
int uart[9];
const int HEADER = 0x59;

void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  Serial.begin(9600);
}

void loop()
{
  display.setTextSize(1.4);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.display();
  Myserial1.begin(115200);
  Myserial1.listen();
  if (Myserial1.isListening())
  {
    display.setCursor(0, 0);
    display.print("Left: ");
    if (Myserial1.read() == HEADER)
    {
      uart[0] = HEADER;
      if (Myserial1.read() == HEADER)
      {
        uart[1] = HEADER;
        for (i = 2; i < 9; i++)
        {
          uart[i] = Myserial1.read();
        }
        check = uart[0] + uart[1] + uart[2] + uart[3] + uart[4] + uart[5] + uart[6] + uart[7];
        if (uart[8] == (check & 0xff))
        {
          dist = uart[2] + uart[3] * 256;
          display.clearDisplay();
          display.print(dist);
          display.print(" cm");
          //          Serial.println("L:");
          //          Serial.println(dist);
          delay (1000);
        }
      }
    }
  }
  Myserial1.end();

  Myserial2.begin(115200);
  Myserial2.listen();
  if (Myserial2.isListening())
  {
    display.setCursor(0, 12);
    display.print("Back: ");
    if (Myserial2.read() == HEADER)
    {
      uart[0] = HEADER;
      if (Myserial2.read() == HEADER)
      {
        uart[1] = HEADER;
        for (i = 2; i < 9; i++)
        {
          uart[i] = Myserial2.read();
        }
        check = uart[0] + uart[1] + uart[2] + uart[3] + uart[4] + uart[5] + uart[6] + uart[7];
        if (uart[8] == (check & 0xff))
        {
          dist = uart[2] + uart[3] * 256;
          display.clearDisplay();
          display.print(dist);
          display.print(" cm");
          //          Serial.println("B:");
          //          Serial.println(dist);
          delay (1000);
        }
      }
    }
  }
  Myserial2.end();

  Myserial3.begin(115200);
  Myserial3.listen();
  if (Myserial3.isListening())
  {
    display.setCursor(0, 24);
    display.print("Right: ");
    if (Myserial3.read() == HEADER)
    {
      uart[0] = HEADER;
      if (Myserial3.read() == HEADER)
      {
        uart[1] = HEADER;
        for (i = 2; i < 9; i++)
        {
          uart[i] = Myserial3.read();
        }
        check = uart[0] + uart[1] + uart[2] + uart[3] + uart[4] + uart[5] + uart[6] + uart[7];
        if (uart[8] == (check & 0xff))
        {
          dist = uart[2] + uart[3] * 256;
          display.clearDisplay();
          display.print(dist);
          display.print(" cm");
          //          Serial.println("R:");
          //          Serial.println(dist);
          delay (1000);
        }
      }
    }
  }
  Myserial3.end();
}
