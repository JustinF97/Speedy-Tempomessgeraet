int v,vmax, ontime, offtime;
int pin = 3;
int max;
int speedarray[10];

void setup() 
{ Serial.begin(115200);
  pinMode(pin, INPUT);
}

void loop() 
{unsigned long T;          // Periodendauer in us
 int f;                 // Frequenz in MHz 
 vmax=0;                   // 

 for(int i = 0; i <=9; i++) {
 
 ontime = pulseIn(pin, HIGH);
 offtime = pulseIn(pin, LOW);
 T = ontime + offtime;
 f= 1000000/T;           // f=1/T   
 v=f/44.0;     // 24 GHz Radar
 speedarray[i] = v;

 }
 for(int i = 0; i <= 9; i++) {
   if(speedarray[i] > max) {
      max = speedarray[i];
    delay(100);
    Serial.print(max);
    Serial.println("KM/H");
   } 
 }
 delay(500);
 max = 0;
}

