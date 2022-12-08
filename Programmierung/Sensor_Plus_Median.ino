#include <FastLED.h>

#include "MedianFilterLib2.h"

#define LED_PIN 7
#define NUM_LEDS 257

CRGB leds[NUM_LEDS];

int DELAYVAL = 400;
int median = 0;


int v, vmax, ontime, offtime;
int pin = 3;
int max = 0;
int speedarray[] = {1, 1, 2, 7, 5, 9, 2, 5, 4, 2};
size_t valuesLength = sizeof(speedarray) / sizeof(speedarray[0]);

int getMeasure() {
  size_t static index = 0;
  index++;
  //unsigned long T;  // Periodendauer in us
  //int f;            // Frequenz in MHz
  //vmax = 0;         //

 // for (int i = 0; i <= 9; i++) {

 //   ontime = pulseIn(pin, HIGH);
  //  offtime = pulseIn(pin, LOW);
  //  T = ontime + offtime;
  //  f = 1000000 / T;  // f=1/T
  //  v = f / 44.0;     // 24 GHz Radar
    //speedarray[i] = v;
 // }
  return speedarray[index - 1];

}

MedianFilter2<int> medianFilter(5);

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(115200);
  pinMode(pin, INPUT);
}

void loop() {
  int rawMeasure = getMeasure();

  float timeMean = 0;
  for (size_t iCount = 0; iCount < valuesLength; iCount++) {

    unsigned long timeCount = micros();
    int median = medianFilter.AddValue(rawMeasure);
    timeCount = micros() - timeCount;
    timeMean += timeCount;
    Serial.print("Wert = ");
    Serial.print(median);
  }
  // LED ausführen
  switchCase();
  FastLED.show();
  delay(DELAYVAL);
}

void switchCase() {
  int LINKS = 0;
  int RECHTS = 0;
  int Rot = 150;
  int Gruen = 0;

  LINKS = median / 10;
  RECHTS = median % 10;

  for (int i = 0; i <= 255; i++) {
    leds[i] = CRGB(0, 0, 0);
  }

  if (LINKS <= 3 && RECHTS <= 9) {
    Rot = 0;
    Gruen = 150;
  }
  if (LINKS >= 3 && RECHTS >= 0) {
    Rot = 150;
    Gruen = 0;
  }

  switch (LINKS) {
    case 0:
      for (int i = 0; i <= 55; i++) {
        leds[i] = CRGB(0, 0, 0);
      }
      for (int i = 72; i <= 125; i++) {
        leds[i] = CRGB(0, 0, 0);
      }
      break;
    case 1:
      for (int i = 88; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 2:
      for (int i = 10; i <= 29; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 40; i <= 86; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 97; i <= 115; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 3:
      for (int i = 40; i <= 86; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 87; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 4:
      for (int i = 0; i <= 9; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 30; i <= 39; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 56; i <= 71; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 88; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 5:
      for (int i = 0; i <= 9; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 30; i <= 87; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 88; i <= 96; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 116; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 6:
      for (int i = 0; i <= 96; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 116; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 7:
      for (int i = 40; i <= 55; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 88; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 8:
      for (int i = 0; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 9:
      for (int i = 0; i <= 9; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 30; i <= 39; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 40; i <= 125; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
  }


  switch (RECHTS) {
    case 0:
      for (int i = 127; i <= 182; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 199; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 1:
      for (int i = 215; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 2:
      for (int i = 137; i <= 156; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 167; i <= 213; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 225; i <= 244; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 3:
      for (int i = 167; i <= 213; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 214; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 4:
      for (int i = 127; i <= 136; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 157; i <= 166; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 183; i <= 198; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 215; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 5:
      for (int i = 127; i <= 136; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 157; i <= 214; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 215; i <= 224; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 245; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 6:
      for (int i = 127; i <= 224; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 245; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 7:
      for (int i = 167; i <= 182; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 215; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 8:
      for (int i = 127; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
    case 9:
      for (int i = 127; i <= 136; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 157; i <= 166; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      for (int i = 167; i <= 254; i++) {
        leds[i] = CRGB(Rot, Gruen, 0);
      }
      break;
  }
  delay(500);
  max = 0;
}