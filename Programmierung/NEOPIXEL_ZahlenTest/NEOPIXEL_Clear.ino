// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        7 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 257 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)

}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  LinksNull();
  RechtsFuenf();

}

void LinksNull(){
    //obenlinks
    for(int i=0; i<10; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=30; j<40; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop
 }
    //untenlinks
    for(int i=10; i<20; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=20; j<30; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop
 }
    //obenrechts
    for(int i=98; i<108; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=108; j<118; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop
 }
   //untenrechts
   for(int i=118; i<128; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=88; j<98; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop 
 }
  //obenmitte
  for(int i=40; i<56; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
  
 } 
   //untenmitte
   for(int i=72; i<88; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
  
 }
  pixels.setBrightness(50);
  pixels.show();   // Send the updated pixel colors to the hardware.
       
}

void LinksFuenf(){
    //obenlinks
    for(int i=0; i<10; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=30; j<40; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop
 }
  //obenmitte
  for(int i=40; i<56; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));



   // delay(DELAYVAL); // Pause before next pass through loop
  
 }
   //mittemitte
   for(int i=56; i<72; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
     pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
 }
   //untenrechts
   for(int i=118; i<128; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=88; j<98; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop 
 }
   //untenmitte
   for(int i=72; i<88; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
  
 }
 
  pixels.setBrightness(50);
  pixels.show();   // Send the updated pixel colors to the hardware.
}

void RechtsFuenf(){
    for(int i=128; i<138; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=158; j<168; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop
 }

  for(int i=168; i<184; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop 
 }
   for(int i=184; i<200; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
     pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
 }

   for(int i=200; i<216; i++) { // For each pixel...
    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
   // delay(DELAYVAL); // Pause before next pass through loop
  
 }
   for(int i=216; i<226; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    for(int j=246; j<256; j++){
      pixels.setPixelColor(j, pixels.Color(0, 255, 0));
    }
   // delay(DELAYVAL); // Pause before next pass through loop 
 }
 
  pixels.setBrightness(50);
  pixels.show();   // Send the updated pixel colors to the hardware.
}
