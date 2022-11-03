#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    257

CRGB leds[NUM_LEDS];

int DELAYVAL = 50;


int v,vmax, ontime, offtime;
int pin = 3;
int max;
int speedarray[10];


void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(115200);
  pinMode(pin, INPUT);
}

void loop() {
{unsigned long T;                             // Periodendauer in us
 int f;                                       // Frequenz in MHz 
 vmax=0;                                       // 

 for(int i = 0; i <=9; i++) {
 
 ontime = pulseIn(pin, HIGH);
 offtime = pulseIn(pin, LOW);
 T = ontime + offtime;
 f= 1000000/T;           // f=1/T   
 v=f/44.0;     // 24 GHz Radar
 speedarray[i] = v;

 }
 for(int i = 0; i <= 9; i++) {
   if(speedarray[i] > max) 
   {
      max = speedarray[i];
    delay(100);
    Serial.print(max);
    Serial.println("KM/H");
   } 
 }
 delay(500);


// LED ausführen
  switchCase(); 
  FastLED.show();
  delay(DELAYVAL);
 }
}

void switchCase() {
int LINKS = 0;
int RECHTS = 0;

max = LINKS;
max = RECHTS;

LINKS  = max/10;
RECHTS = max&10;

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
     for(int i=225; i<=244; i++) 
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
  max = 0;
}






      
