#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    257

CRGB leds[NUM_LEDS];

int DELAYVAL = 50;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {

  switchCase(); 
  FastLED.show();
  delay(DELAYVAL);
}

void switchCase() {
int LINKS = 2;
int RECHTS = 2;

 switch (LINKS) {
  case 0:
     for(int i=0; i<=55; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=72; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 1:
     for(int i=88; i<=125; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
      break;
  case 2:
     for(int i=10; i<=29; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=40; i<=86; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=97; i<=115; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 3:
     for(int i=40; i<=86; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
     for(int i=87; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 4:
     for(int i=0; i<=9; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=30; i<=39; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=56; i<=71; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=88; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }  
      break;
  case 5:
       for(int i=0; i<=9; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=30; i<=87; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=88; i<=96; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=116; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
   case 6:
     for(int i=0; i<=96; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=116; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
   case 7:
     for(int i=40; i<=55; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=88; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
    case 8:
       for(int i=0; i<=125; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
      break;
   case 9:
     for(int i=0; i<=9; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=30; i<=39; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=40; i<=125; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      break;
  }


switch (RECHTS) {
  case 0:
     for(int i=127; i<=182; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=199; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 1:
     for(int i=215; i<=254; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
      break;
  case 2:
     for(int i=137; i<=156; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=167; i<=213; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=224; i<=242; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 3:
     for(int i=167; i<=213; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
     for(int i=214; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
  case 4:
     for(int i=127; i<=136; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=157; i<=166; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=183; i<=198; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=215; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }  
      break;
  case 5:
       for(int i=127; i<=136; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=157; i<=214; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=215; i<=224; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
     for(int i=245; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
   case 6:
     for(int i=127; i<=224; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=245; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
   case 7:
     for(int i=167; i<=182; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=215; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     } 
      break;
    case 8:
       for(int i=127; i<=254; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
      break;
   case 9:
     for(int i=127; i<=136; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      for(int i=157; i<=166; i++)
     {
     leds[i] = CRGB(150, 0, 0);    
     } 
     for(int i=167; i<=254; i++) 
     {
     leds[i] = CRGB(150, 0, 0);
     }
      break;
  }
}




      
