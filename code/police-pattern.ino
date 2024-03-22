#include <FastLED.h>
#include <IRremote.hpp>
#define LED_PIN     3
#define LED_PIN_2 5
#define NUM_LEDS    60
#define NUM_LEDS_2    60

long currentSignal;

const int RECV_PIN = 8;
unsigned long key_value=0;

int strobo_1 = 30;
int strobo_2 = 80;
int strobo_3 = 50;
int strobo_4 = 100;

int freq_1 = 10;
int freq_2 = 30;
int freq_3 = 100;

int freq_pattern_1 = 50;


CRGB leds[NUM_LEDS];
CRGB leds_2[NUM_LEDS_2];



void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.addLeds<WS2812, LED_PIN_2, GRB>(leds_2, NUM_LEDS_2);
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
}


void rosso() {
  
  for (int i = 0; i <= 3; i++) {
       
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);
  leds[10]=CRGB (255,0,0);
  leds[11]=CRGB (255,0,0);
  leds[12]=CRGB (255,0,0);
  leds[13]=CRGB (255,0,0);
  leds[14]=CRGB (255,0,0);
  leds[15]=CRGB (255,0,0);
  leds[16]=CRGB (255,0,0);
  leds[17]=CRGB (255,0,0);
  leds[18]=CRGB (255,0,0);
  leds[19]=CRGB (255,0,0);

  leds_2[0]=CRGB (255,0,0);
  leds_2[1]=CRGB (255,0,0);
  leds_2[2]=CRGB (255,0,0);
  leds_2[3]=CRGB (255,0,0);
  leds_2[4]=CRGB (255,0,0);
  leds_2[5]=CRGB (255,0,0);
  leds_2[6]=CRGB (255,0,0);
  leds_2[7]=CRGB (255,0,0);
  leds_2[8]=CRGB (255,0,0);
  leds_2[9]=CRGB (255,0,0);
  leds_2[10]=CRGB (255,0,0);
  leds_2[11]=CRGB (255,0,0);
  leds_2[12]=CRGB (255,0,0);
  leds_2[13]=CRGB (255,0,0);
  leds_2[14]=CRGB (255,0,0);
  leds_2[15]=CRGB (255,0,0);
  leds_2[16]=CRGB (255,0,0);
  leds_2[17]=CRGB (255,0,0);
  leds_2[18]=CRGB (255,0,0);
  leds_2[19]=CRGB (255,0,0);


  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  }
}


void bianco()  {

for (int i = 0; i <= 3; i++) {
  
  leds[20]=CRGB (255,255,255);
  leds[21]=CRGB (255,255,255);
  leds[22]=CRGB (255,255,255);
  leds[23]=CRGB (255,255,255);
  leds[24]=CRGB (255,255,255);
  leds[25]=CRGB (255,255,255);
  leds[26]=CRGB (255,255,255);
  leds[27]=CRGB (255,255,255);
  leds[28]=CRGB (255,255,255);
  leds[29]=CRGB (255,255,255);
  leds[30]=CRGB (255,255,255);
  leds[31]=CRGB (255,255,255);
  leds[32]=CRGB (255,255,255);
  leds[33]=CRGB (255,255,255);
  leds[34]=CRGB (255,255,255);
  leds[35]=CRGB (255,255,255);
  leds[36]=CRGB (255,255,255);
  leds[37]=CRGB (255,255,255);
  leds[38]=CRGB (255,255,255);
  leds[39]=CRGB (255,255,255);

  leds_2[21]=CRGB (255,255,255);
  leds_2[20]=CRGB (255,255,255);
  leds_2[23]=CRGB (255,255,255);
  leds_2[22]=CRGB (255,255,255);
  leds_2[25]=CRGB (255,255,255);
  leds_2[24]=CRGB (255,255,255);
  leds_2[27]=CRGB (255,255,255);
  leds_2[26]=CRGB (255,255,255);
  leds_2[29]=CRGB (255,255,255);
  leds_2[28]=CRGB (255,255,255);
  leds_2[31]=CRGB (255,255,255);
  leds_2[30]=CRGB (255,255,255);
  leds_2[33]=CRGB (255,255,255);
  leds_2[32]=CRGB (255,255,255);
  leds_2[35]=CRGB (255,255,255);
  leds_2[34]=CRGB (255,255,255);
  leds_2[37]=CRGB (255,255,255);
  leds_2[36]=CRGB (255,255,255);
  leds_2[39]=CRGB (255,255,255);
  leds_2[38]=CRGB (255,255,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
 } 
}


void blu()  {

for (int i = 0; i <= 3; i++) {
 

  leds[40]=CRGB (0,0,255);
  leds[41]=CRGB (0,0,255);
  leds[42]=CRGB (0,0,255);
  leds[43]=CRGB (0,0,255);
  leds[44]=CRGB (0,0,255);
  leds[45]=CRGB (0,0,255);
  leds[46]=CRGB (0,0,255);
  leds[47]=CRGB (0,0,255);
  leds[48]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);
  leds[50]=CRGB (0,0,255);
  leds[51]=CRGB (0,0,255);
  leds[52]=CRGB (0,0,255);
  leds[53]=CRGB (0,0,255);
  leds[54]=CRGB (0,0,255);
  leds[55]=CRGB (0,0,255);
  leds[56]=CRGB (0,0,255);
  leds[57]=CRGB (0,0,255);
  leds[58]=CRGB (0,0,255);
  leds[59]=CRGB (0,0,255);

  leds_2[40]=CRGB (0,0,255);
  leds_2[41]=CRGB (0,0,255);
  leds_2[42]=CRGB (0,0,255);
  leds_2[43]=CRGB (0,0,255);
  leds_2[44]=CRGB (0,0,255);
  leds_2[45]=CRGB (0,0,255);
  leds_2[46]=CRGB (0,0,255);
  leds_2[47]=CRGB (0,0,255);
  leds_2[48]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  leds_2[50]=CRGB (0,0,255);
  leds_2[51]=CRGB (0,0,255);
  leds_2[52]=CRGB (0,0,255);
  leds_2[53]=CRGB (0,0,255);
  leds_2[54]=CRGB (0,0,255);
  leds_2[55]=CRGB (0,0,255);
  leds_2[56]=CRGB (0,0,255);
  leds_2[57]=CRGB (0,0,255);
  leds_2[58]=CRGB (0,0,255);
  leds_2[59]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
  }
}

void mix_rwb()  {

for (int i = 0; i <= 6; i++) {
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);
  leds[10]=CRGB (255,0,0);
  leds[11]=CRGB (255,0,0);
  leds[12]=CRGB (255,0,0);
  leds[13]=CRGB (255,0,0);
  leds[14]=CRGB (255,0,0);
  leds[15]=CRGB (255,0,0);
  leds[16]=CRGB (255,0,0);
  leds[17]=CRGB (255,0,0);
  leds[18]=CRGB (255,0,0);
  leds[19]=CRGB (255,0,0);

  leds_2[0]=CRGB (255,0,0);
  leds_2[1]=CRGB (255,0,0);
  leds_2[2]=CRGB (255,0,0);
  leds_2[3]=CRGB (255,0,0);
  leds_2[4]=CRGB (255,0,0);
  leds_2[5]=CRGB (255,0,0);
  leds_2[6]=CRGB (255,0,0);
  leds_2[7]=CRGB (255,0,0);
  leds_2[8]=CRGB (255,0,0);
  leds_2[9]=CRGB (255,0,0);
  leds_2[10]=CRGB (255,0,0);
  leds_2[11]=CRGB (255,0,0);
  leds_2[12]=CRGB (255,0,0);
  leds_2[13]=CRGB (255,0,0);
  leds_2[14]=CRGB (255,0,0);
  leds_2[15]=CRGB (255,0,0);
  leds_2[16]=CRGB (255,0,0);
  leds_2[17]=CRGB (255,0,0);
  leds_2[18]=CRGB (255,0,0);
  leds_2[19]=CRGB (255,0,0);
  
  leds[20]=CRGB (255,255,255);
  leds[21]=CRGB (255,255,255);
  leds[22]=CRGB (255,255,255);
  leds[23]=CRGB (255,255,255);
  leds[24]=CRGB (255,255,255);
  leds[25]=CRGB (255,255,255);
  leds[26]=CRGB (255,255,255);
  leds[27]=CRGB (255,255,255);
  leds[28]=CRGB (255,255,255);
  leds[29]=CRGB (255,255,255);
  leds[30]=CRGB (255,255,255);
  leds[31]=CRGB (255,255,255);
  leds[32]=CRGB (255,255,255);
  leds[33]=CRGB (255,255,255);
  leds[34]=CRGB (255,255,255);
  leds[35]=CRGB (255,255,255);
  leds[36]=CRGB (255,255,255);
  leds[37]=CRGB (255,255,255);
  leds[38]=CRGB (255,255,255);
  leds[39]=CRGB (255,255,255);

  leds_2[20]=CRGB (255,255,255);
  leds_2[21]=CRGB (255,255,255);
  leds_2[22]=CRGB (255,255,255);
  leds_2[23]=CRGB (255,255,255);
  leds_2[24]=CRGB (255,255,255);
  leds_2[25]=CRGB (255,255,255);
  leds_2[26]=CRGB (255,255,255);
  leds_2[27]=CRGB (255,255,255);
  leds_2[28]=CRGB (255,255,255);
  leds_2[29]=CRGB (255,255,255);
  leds_2[30]=CRGB (255,255,255);
  leds_2[31]=CRGB (255,255,255);
  leds_2[32]=CRGB (255,255,255);
  leds_2[33]=CRGB (255,255,255);
  leds_2[34]=CRGB (255,255,255);
  leds_2[35]=CRGB (255,255,255);
  leds_2[36]=CRGB (255,255,255);
  leds_2[37]=CRGB (255,255,255);
  leds_2[38]=CRGB (255,255,255);
  leds_2[39]=CRGB (255,255,255);

  leds[40]=CRGB (0,0,255);
  leds[41]=CRGB (0,0,255);
  leds[42]=CRGB (0,0,255);
  leds[43]=CRGB (0,0,255);
  leds[44]=CRGB (0,0,255);
  leds[45]=CRGB (0,0,255);
  leds[46]=CRGB (0,0,255);
  leds[47]=CRGB (0,0,255);
  leds[48]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);
  leds[50]=CRGB (0,0,255);
  leds[51]=CRGB (0,0,255);
  leds[52]=CRGB (0,0,255);
  leds[53]=CRGB (0,0,255);
  leds[54]=CRGB (0,0,255);
  leds[55]=CRGB (0,0,255);
  leds[56]=CRGB (0,0,255);
  leds[57]=CRGB (0,0,255);
  leds[58]=CRGB (0,0,255);
  leds[59]=CRGB (0,0,255);

  leds_2[40]=CRGB (0,0,255);
  leds_2[41]=CRGB (0,0,255);
  leds_2[42]=CRGB (0,0,255);
  leds_2[43]=CRGB (0,0,255);
  leds_2[44]=CRGB (0,0,255);
  leds_2[45]=CRGB (0,0,255);
  leds_2[46]=CRGB (0,0,255);
  leds_2[47]=CRGB (0,0,255);
  leds_2[48]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  leds_2[50]=CRGB (0,0,255);
  leds_2[51]=CRGB (0,0,255);
  leds_2[52]=CRGB (0,0,255);
  leds_2[53]=CRGB (0,0,255);
  leds_2[54]=CRGB (0,0,255);
  leds_2[55]=CRGB (0,0,255);
  leds_2[56]=CRGB (0,0,255);
  leds_2[57]=CRGB (0,0,255);
  leds_2[58]=CRGB (0,0,255);
  leds_2[59]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);

  }
 
}


void mix_rb()  {

for (int i = 0; i <= 3; i++) {
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);
  leds[10]=CRGB (255,0,0);
  leds[11]=CRGB (255,0,0);
  leds[12]=CRGB (255,0,0);
  leds[13]=CRGB (255,0,0);
  leds[14]=CRGB (255,0,0);
  leds[15]=CRGB (255,0,0);
  leds[16]=CRGB (255,0,0);
  leds[17]=CRGB (255,0,0);
  leds[18]=CRGB (255,0,0);
  leds[19]=CRGB (255,0,0);

  leds_2[0]=CRGB (255,0,0);
  leds_2[1]=CRGB (255,0,0);
  leds_2[2]=CRGB (255,0,0);
  leds_2[3]=CRGB (255,0,0);
  leds_2[4]=CRGB (255,0,0);
  leds_2[5]=CRGB (255,0,0);
  leds_2[6]=CRGB (255,0,0);
  leds_2[7]=CRGB (255,0,0);
  leds_2[8]=CRGB (255,0,0);
  leds_2[9]=CRGB (255,0,0);
  leds_2[10]=CRGB (255,0,0);
  leds_2[11]=CRGB (255,0,0);
  leds_2[12]=CRGB (255,0,0);
  leds_2[13]=CRGB (255,0,0);
  leds_2[14]=CRGB (255,0,0);
  leds_2[15]=CRGB (255,0,0);
  leds_2[16]=CRGB (255,0,0);
  leds_2[17]=CRGB (255,0,0);
  leds_2[18]=CRGB (255,0,0);
  leds_2[19]=CRGB (255,0,0);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

}

for (int i = 0; i <= 3; i++) {
  
  leds[40]=CRGB (0,0,255);
  leds[41]=CRGB (0,0,255);
  leds[42]=CRGB (0,0,255);
  leds[43]=CRGB (0,0,255);
  leds[44]=CRGB (0,0,255);
  leds[45]=CRGB (0,0,255);
  leds[46]=CRGB (0,0,255);
  leds[47]=CRGB (0,0,255);
  leds[48]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);
  leds[50]=CRGB (0,0,255);
  leds[51]=CRGB (0,0,255);
  leds[52]=CRGB (0,0,255);
  leds[53]=CRGB (0,0,255);
  leds[54]=CRGB (0,0,255);
  leds[55]=CRGB (0,0,255);
  leds[56]=CRGB (0,0,255);
  leds[57]=CRGB (0,0,255);
  leds[58]=CRGB (0,0,255);
  leds[59]=CRGB (0,0,255);

  leds_2[40]=CRGB (0,0,255);
  leds_2[41]=CRGB (0,0,255);
  leds_2[42]=CRGB (0,0,255);
  leds_2[43]=CRGB (0,0,255);
  leds_2[44]=CRGB (0,0,255);
  leds_2[45]=CRGB (0,0,255);
  leds_2[46]=CRGB (0,0,255);
  leds_2[47]=CRGB (0,0,255);
  leds_2[48]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  leds_2[50]=CRGB (0,0,255);
  leds_2[51]=CRGB (0,0,255);
  leds_2[52]=CRGB (0,0,255);
  leds_2[53]=CRGB (0,0,255);
  leds_2[54]=CRGB (0,0,255);
  leds_2[55]=CRGB (0,0,255);
  leds_2[56]=CRGB (0,0,255);
  leds_2[57]=CRGB (0,0,255);
  leds_2[58]=CRGB (0,0,255);
  leds_2[59]=CRGB (0,0,255);
  
  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
  
  }
 
}



void mix_rl_lr()  {

 for (int i = 0; i <= 3; i++) {
  
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);

  leds_2[0]=CRGB (255,0,0);
  leds_2[1]=CRGB (255,0,0);
  leds_2[2]=CRGB (255,0,0);
  leds_2[3]=CRGB (255,0,0);
  leds_2[4]=CRGB (255,0,0);
  leds_2[5]=CRGB (255,0,0);
  leds_2[6]=CRGB (255,0,0);
  leds_2[7]=CRGB (255,0,0);
  leds_2[8]=CRGB (255,0,0);
  leds_2[9]=CRGB (255,0,0);

  leds[50]=CRGB (0,0,255);
  leds[51]=CRGB (0,0,255);
  leds[52]=CRGB (0,0,255);
  leds[53]=CRGB (0,0,255);
  leds[54]=CRGB (0,0,255);
  leds[55]=CRGB (0,0,255);
  leds[56]=CRGB (0,0,255);
  leds[57]=CRGB (0,0,255);
  leds[58]=CRGB (0,0,255);
  leds[59]=CRGB (0,0,255);

  leds_2[50]=CRGB (0,0,255);
  leds_2[51]=CRGB (0,0,255);
  leds_2[52]=CRGB (0,0,255);
  leds_2[53]=CRGB (0,0,255);
  leds_2[54]=CRGB (0,0,255);
  leds_2[55]=CRGB (0,0,255);
  leds_2[56]=CRGB (0,0,255);
  leds_2[57]=CRGB (0,0,255);
  leds_2[58]=CRGB (0,0,255);
  leds_2[59]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
}

 
 for (int i = 0; i <= 3; i++) {
  
  leds[10]=CRGB (255,0,0);
  leds[11]=CRGB (255,0,0);
  leds[12]=CRGB (255,0,0);
  leds[13]=CRGB (2550,0,0);
  leds[14]=CRGB (2550,0,0);
  leds[15]=CRGB (255,0,0);
  leds[16]=CRGB (255,0,0);
  leds[17]=CRGB (255,0,0);
  leds[18]=CRGB (2550,0,0);
  leds[19]=CRGB (2550,0,0);
  
  leds_2[10]=CRGB (255,0,0);
  leds_2[11]=CRGB (255,0,0);
  leds_2[12]=CRGB (255,0,0);
  leds_2[13]=CRGB (2550,0,0);
  leds_2[14]=CRGB (2550,0,0);
  leds_2[15]=CRGB (255,0,0);
  leds_2[16]=CRGB (255,0,0);
  leds_2[17]=CRGB (255,0,0);
  leds_2[18]=CRGB (2550,0,0);
  leds_2[19]=CRGB (2550,0,0);
    
  leds[40]=CRGB (0,0,255);
  leds[41]=CRGB (0,0,255);
  leds[42]=CRGB (0,0,255);
  leds[43]=CRGB (0,0,255);
  leds[44]=CRGB (0,0,255);
  leds[45]=CRGB (0,0,255);
  leds[46]=CRGB (0,0,255);
  leds[47]=CRGB (0,0,255);
  leds[48]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);

  leds_2[40]=CRGB (0,0,255);
  leds_2[41]=CRGB (0,0,255);
  leds_2[42]=CRGB (0,0,255);
  leds_2[43]=CRGB (0,0,255);
  leds_2[44]=CRGB (0,0,255);
  leds_2[45]=CRGB (0,0,255);
  leds_2[46]=CRGB (0,0,255);
  leds_2[47]=CRGB (0,0,255);
  leds_2[48]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  
  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  }
}




void mix_rl_w_lr()  {

 for (int i = 0; i <= 3; i++) {
  
  leds[0]=CRGB::Red;
  leds[1]=CRGB::Red;
  leds[2]=CRGB::Red;
  leds[3]=CRGB::Red;
  leds[4]=CRGB::Red;
  leds[5]=CRGB::Red;
  leds[6]=CRGB::Red;
  leds[7]=CRGB::Red;
  leds[8]=CRGB::Red;
  leds[9]=CRGB::Red;

  leds_2[0]=CRGB::Red;
  leds_2[1]=CRGB::Red;
  leds_2[2]=CRGB::Red;
  leds_2[3]=CRGB::Red;
  leds_2[4]=CRGB::Red;
  leds_2[5]=CRGB::Red;
  leds_2[6]=CRGB::Red;
  leds_2[7]=CRGB::Red;
  leds_2[8]=CRGB::Red;
  leds_2[9]=CRGB::Red;

  
  leds[20]=CRGB::White;
  leds[21]=CRGB::White;
  leds[22]=CRGB::White;
  leds[23]=CRGB::White;
  leds[24]=CRGB::White;
  leds[25]=CRGB::White;
  leds[26]=CRGB::White;
  leds[27]=CRGB::White;
  leds[28]=CRGB::White;
  leds[29]=CRGB::White;
  leds[30]=CRGB::White;
  leds[31]=CRGB::White;
  leds[32]=CRGB::White;
  leds[33]=CRGB::White;
  leds[34]=CRGB::White;
  leds[35]=CRGB::White;
  leds[36]=CRGB::White;
  leds[37]=CRGB::White;
  leds[38]=CRGB::White;
  leds[39]=CRGB::White;

  leds_2[20]=CRGB::White;
  leds_2[21]=CRGB::White;
  leds_2[22]=CRGB::White;
  leds_2[23]=CRGB::White;
  leds_2[24]=CRGB::White;
  leds_2[25]=CRGB::White;
  leds_2[26]=CRGB::White;
  leds_2[27]=CRGB::White;
  leds_2[28]=CRGB::White;
  leds_2[29]=CRGB::White;
  leds_2[30]=CRGB::White;
  leds_2[31]=CRGB::White;
  leds_2[32]=CRGB::White;
  leds_2[33]=CRGB::White;
  leds_2[34]=CRGB::White;
  leds_2[35]=CRGB::White;
  leds_2[36]=CRGB::White;
  leds_2[37]=CRGB::White;
  leds_2[38]=CRGB::White;
  leds_2[39]=CRGB::White;

  leds[50]=CRGB::Blue;
  leds[51]=CRGB::Blue;
  leds[52]=CRGB::Blue;
  leds[53]=CRGB::Blue;
  leds[54]=CRGB::Blue;
  leds[55]=CRGB::Blue;
  leds[56]=CRGB::Blue;
  leds[57]=CRGB::Blue;
  leds[58]=CRGB::Blue;
  leds[59]=CRGB::Blue;

  leds_2[50]=CRGB::Blue;
  leds_2[51]=CRGB::Blue;
  leds_2[52]=CRGB::Blue;
  leds_2[53]=CRGB::Blue;
  leds_2[54]=CRGB::Blue;
  leds_2[55]=CRGB::Blue;
  leds_2[56]=CRGB::Blue;
  leds_2[57]=CRGB::Blue;
  leds_2[58]=CRGB::Blue;
  leds_2[59]=CRGB::Blue;

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
}

 
 for (int i = 0; i <= 3; i++) {
  
  leds[10]=CRGB::Red;
  leds[11]=CRGB::Red;
  leds[12]=CRGB::Red;
  leds[13]=CRGB::Red;
  leds[14]=CRGB::Red;
  leds[15]=CRGB::Red;
  leds[16]=CRGB::Red;
  leds[17]=CRGB::Red;
  leds[18]=CRGB::Red;
  leds[19]=CRGB::Red;

  leds_2[10]=CRGB::Red;
  leds_2[11]=CRGB::Red;
  leds_2[12]=CRGB::Red;
  leds_2[13]=CRGB::Red;
  leds_2[14]=CRGB::Red;
  leds_2[15]=CRGB::Red;
  leds_2[16]=CRGB::Red;
  leds_2[17]=CRGB::Red;
  leds_2[18]=CRGB::Red;
  leds_2[19]=CRGB::Red;


  leds[20]=CRGB::Black;
  leds[21]=CRGB::Black;
  leds[22]=CRGB::Black;
  leds[23]=CRGB::Black;
  leds[24]=CRGB::Black;
  leds[25]=CRGB::Black;
  leds[26]=CRGB::Black;
  leds[27]=CRGB::Black;
  leds[28]=CRGB::Black;
  leds[29]=CRGB::Black;
  leds[30]=CRGB::Black;
  leds[31]=CRGB::Black;
  leds[32]=CRGB::Black;
  leds[33]=CRGB::Black;
  leds[34]=CRGB::Black;
  leds[35]=CRGB::Black;
  leds[36]=CRGB::Black;
  leds[37]=CRGB::Black;
  leds[38]=CRGB::Black;
  leds[39]=CRGB::Black;
  
  leds_2[20]=CRGB::Black;
  leds_2[21]=CRGB::Black;
  leds_2[22]=CRGB::Black;
  leds_2[23]=CRGB::Black;
  leds_2[24]=CRGB::Black;
  leds_2[25]=CRGB::Black;
  leds_2[26]=CRGB::Black;
  leds_2[27]=CRGB::Black;
  leds_2[28]=CRGB::Black;
  leds_2[29]=CRGB::Black;
  leds_2[30]=CRGB::Black;
  leds_2[31]=CRGB::Black;
  leds_2[32]=CRGB::Black;
  leds_2[33]=CRGB::Black;
  leds_2[34]=CRGB::Black;
  leds_2[35]=CRGB::Black;
  leds_2[36]=CRGB::Black;
  leds_2[37]=CRGB::Black;
  leds_2[38]=CRGB::Black;
  leds_2[39]=CRGB::Black;
    
  leds[40]=CRGB::Blue;
  leds[41]=CRGB::Blue;
  leds[42]=CRGB::Blue;
  leds[43]=CRGB::Blue;
  leds[44]=CRGB::Blue;
  leds[45]=CRGB::Blue;
  leds[46]=CRGB::Blue;
  leds[47]=CRGB::Blue;
  leds[48]=CRGB::Blue;
  leds[49]=CRGB::Blue;

  leds_2[40]=CRGB::Blue;
  leds_2[41]=CRGB::Blue;
  leds_2[42]=CRGB::Blue;
  leds_2[43]=CRGB::Blue;
  leds_2[44]=CRGB::Blue;
  leds_2[45]=CRGB::Blue;
  leds_2[46]=CRGB::Blue;
  leds_2[47]=CRGB::Blue;
  leds_2[48]=CRGB::Blue;
  leds_2[49]=CRGB::Blue;

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  }
}

//*********************************************************************

void rosso_static() {  
       
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);
  leds[10]=CRGB (255,0,0);
  leds[11]=CRGB (255,0,0);
  leds[12]=CRGB (255,0,0);
  leds[13]=CRGB (255,0,0);
  leds[14]=CRGB (255,0,0);
  leds[15]=CRGB (255,0,0);
  leds[16]=CRGB (255,0,0);
  leds[17]=CRGB (255,0,0);
  leds[18]=CRGB (255,0,0);
  leds[19]=CRGB (255,0,0);

  leds_2[0]=CRGB (255,0,0);
  leds_2[1]=CRGB (255,0,0);
  leds_2[2]=CRGB (255,0,0);
  leds_2[3]=CRGB (255,0,0);
  leds_2[4]=CRGB (255,0,0);
  leds_2[5]=CRGB (255,0,0);
  leds_2[6]=CRGB (255,0,0);
  leds_2[7]=CRGB (255,0,0);
  leds_2[8]=CRGB (255,0,0);
  leds_2[9]=CRGB (255,0,0);
  leds_2[10]=CRGB (255,0,0);
  leds_2[11]=CRGB (255,0,0);
  leds_2[12]=CRGB (255,0,0);
  leds_2[13]=CRGB (255,0,0);
  leds_2[14]=CRGB (255,0,0);
  leds_2[15]=CRGB (255,0,0);
  leds_2[16]=CRGB (255,0,0);
  leds_2[17]=CRGB (255,0,0);
  leds_2[18]=CRGB (255,0,0);
  leds_2[19]=CRGB (255,0,0);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);

}


void bianco_static()  {
 
  leds[20]=CRGB (255,255,255);
  leds[21]=CRGB (255,255,255);
  leds[22]=CRGB (255,255,255);
  leds[23]=CRGB (255,255,255);
  leds[24]=CRGB (255,255,255);
  leds[25]=CRGB (255,255,255);
  leds[26]=CRGB (255,255,255);
  leds[27]=CRGB (255,255,255);
  leds[28]=CRGB (255,255,255);
  leds[29]=CRGB (255,255,255);
  leds[30]=CRGB (255,255,255);
  leds[31]=CRGB (255,255,255);
  leds[32]=CRGB (255,255,255);
  leds[33]=CRGB (255,255,255);
  leds[34]=CRGB (255,255,255);
  leds[35]=CRGB (255,255,255);
  leds[36]=CRGB (255,255,255);
  leds[37]=CRGB (255,255,255);
  leds[38]=CRGB (255,255,255);
  leds[39]=CRGB (255,255,255);

  leds_2[20]=CRGB (255,255,255);
  leds_2[21]=CRGB (255,255,255);
  leds_2[22]=CRGB (255,255,255);
  leds_2[23]=CRGB (255,255,255);
  leds_2[24]=CRGB (255,255,255);
  leds_2[25]=CRGB (255,255,255);
  leds_2[26]=CRGB (255,255,255);
  leds_2[27]=CRGB (255,255,255);
  leds_2[28]=CRGB (255,255,255);
  leds_2[29]=CRGB (255,255,255);
  leds_2[30]=CRGB (255,255,255);
  leds_2[31]=CRGB (255,255,255);
  leds_2[32]=CRGB (255,255,255);
  leds_2[33]=CRGB (255,255,255);
  leds_2[34]=CRGB (255,255,255);
  leds_2[35]=CRGB (255,255,255);
  leds_2[36]=CRGB (255,255,255);
  leds_2[37]=CRGB (255,255,255);
  leds_2[38]=CRGB (255,255,255);
  leds_2[39]=CRGB (255,255,255);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);
    
}


void blu_static()  {

  leds[40]=CRGB (0,0,255);
  leds[41]=CRGB (0,0,255);
  leds[42]=CRGB (0,0,255);
  leds[43]=CRGB (0,0,255);
  leds[44]=CRGB (0,0,255);
  leds[45]=CRGB (0,0,255);
  leds[46]=CRGB (0,0,255);
  leds[47]=CRGB (0,0,255);
  leds[48]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);
  leds[49]=CRGB (0,0,255);
  leds[50]=CRGB (0,0,255);
  leds[51]=CRGB (0,0,255);
  leds[52]=CRGB (0,0,255);
  leds[53]=CRGB (0,0,255);
  leds[54]=CRGB (0,0,255);
  leds[55]=CRGB (0,0,255);
  leds[56]=CRGB (0,0,255);
  leds[57]=CRGB (0,0,255);
  leds[58]=CRGB (0,0,255);
  leds[59]=CRGB (0,0,255);

  leds_2[40]=CRGB (0,0,255);
  leds_2[41]=CRGB (0,0,255);
  leds_2[42]=CRGB (0,0,255);
  leds_2[43]=CRGB (0,0,255);
  leds_2[44]=CRGB (0,0,255);
  leds_2[45]=CRGB (0,0,255);
  leds_2[46]=CRGB (0,0,255);
  leds_2[47]=CRGB (0,0,255);
  leds_2[48]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  leds_2[49]=CRGB (0,0,255);
  leds_2[50]=CRGB (0,0,255);
  leds_2[51]=CRGB (0,0,255);
  leds_2[52]=CRGB (0,0,255);
  leds_2[53]=CRGB (0,0,255);
  leds_2[54]=CRGB (0,0,255);
  leds_2[55]=CRGB (0,0,255);
  leds_2[56]=CRGB (0,0,255);
  leds_2[57]=CRGB (0,0,255);
  leds_2[58]=CRGB (0,0,255);
  leds_2[59]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);
  
}

// Pattern 1

void pattern_1()  {

  for (int i = 0; i <= 3; i++) {  
    
    leds[0]=CRGB (255,0,0);
    leds[1]=CRGB (255,0,0);
    leds[2]=CRGB (255,0,0);
    leds[3]=CRGB (255,0,0);
    leds[4]=CRGB (255,0,0);
    leds[5]=CRGB (255,0,0);
    leds[6]=CRGB (255,0,0);
    leds[7]=CRGB (255,0,0);
    leds[8]=CRGB (255,0,0);
    leds[9]=CRGB (255,0,0);

    leds_2[0]=CRGB (255,0,0);
    leds_2[1]=CRGB (255,0,0);
    leds_2[2]=CRGB (255,0,0);
    leds_2[3]=CRGB (255,0,0);
    leds_2[4]=CRGB (255,0,0);
    leds_2[5]=CRGB (255,0,0);
    leds_2[6]=CRGB (255,0,0);
    leds_2[7]=CRGB (255,0,0);
    leds_2[8]=CRGB (255,0,0);
    leds_2[9]=CRGB (255,0,0);

    leds[50]=CRGB (0,0,255);
    leds[51]=CRGB (0,0,255);
    leds[52]=CRGB (0,0,255);
    leds[53]=CRGB (0,0,255);
    leds[54]=CRGB (0,0,255);
    leds[55]=CRGB (0,0,255);
    leds[56]=CRGB (0,0,255);
    leds[57]=CRGB (0,0,255);
    leds[58]=CRGB (0,0,255);
    leds[59]=CRGB (0,0,255);

    leds_2[50]=CRGB (0,0,255);
    leds_2[51]=CRGB (0,0,255);
    leds_2[52]=CRGB (0,0,255);
    leds_2[53]=CRGB (0,0,255);
    leds_2[54]=CRGB (0,0,255);
    leds_2[55]=CRGB (0,0,255);
    leds_2[56]=CRGB (0,0,255);
    leds_2[57]=CRGB (0,0,255);
    leds_2[58]=CRGB (0,0,255);
    leds_2[59]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1);
    }

  for (int i = 0; i <= 3; i++) {
  
    leds[10]=CRGB (255,0,0);
    leds[11]=CRGB (255,0,0);
    leds[12]=CRGB (255,0,0);
    leds[13]=CRGB (255,0,0);
    leds[14]=CRGB (255,0,0);
    leds[15]=CRGB (255,0,0);
    leds[16]=CRGB (255,0,0);
    leds[17]=CRGB (255,0,0);
    leds[18]=CRGB (255,0,0);
    leds[19]=CRGB (255,0,0);
    
    leds_2[10]=CRGB (255,0,0);
    leds_2[11]=CRGB (255,0,0);
    leds_2[12]=CRGB (255,0,0);
    leds_2[13]=CRGB (255,0,0);
    leds_2[14]=CRGB (255,0,0);
    leds_2[15]=CRGB (255,0,0);
    leds_2[16]=CRGB (255,0,0);
    leds_2[17]=CRGB (255,0,0);
    leds_2[18]=CRGB (255,0,0);
    leds_2[19]=CRGB (255,0,0);
    
    leds[40]=CRGB (0,0,255);
    leds[41]=CRGB (0,0,255);
    leds[42]=CRGB (0,0,255);
    leds[43]=CRGB (0,0,255);
    leds[44]=CRGB (0,0,255);
    leds[45]=CRGB (0,0,255);
    leds[46]=CRGB (0,0,255);
    leds[47]=CRGB (0,0,255);
    leds[48]=CRGB (0,0,255);
    leds[49]=CRGB (0,0,255);

    leds_2[40]=CRGB (0,0,255);
    leds_2[41]=CRGB (0,0,255);
    leds_2[42]=CRGB (0,0,255);
    leds_2[43]=CRGB (0,0,255);
    leds_2[44]=CRGB (0,0,255);
    leds_2[45]=CRGB (0,0,255);
    leds_2[46]=CRGB (0,0,255);
    leds_2[47]=CRGB (0,0,255);
    leds_2[48]=CRGB (0,0,255);
    leds_2[49]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    }
}


// Pattern 2

void pattern_2()  {

  for (int i = 0; i <= 3; i++) {  
    
    leds[0]=CRGB (255,0,0);
    leds[1]=CRGB (255,0,0);
    leds[2]=CRGB (255,0,0);
    leds[3]=CRGB (255,0,0);
    leds[4]=CRGB (255,0,0);
    leds[5]=CRGB (255,0,0);
    leds[6]=CRGB (255,0,0);
    leds[7]=CRGB (255,0,0);
    leds[8]=CRGB (255,0,0);
    leds[9]=CRGB (255,0,0);

    leds_2[0]=CRGB (255,0,0);
    leds_2[1]=CRGB (255,0,0);
    leds_2[2]=CRGB (255,0,0);
    leds_2[3]=CRGB (255,0,0);
    leds_2[4]=CRGB (255,0,0);
    leds_2[5]=CRGB (255,0,0);
    leds_2[6]=CRGB (255,0,0);
    leds_2[7]=CRGB (255,0,0);
    leds_2[8]=CRGB (255,0,0);
    leds_2[9]=CRGB (255,0,0);

    leds[50]=CRGB (0,0,255);
    leds[51]=CRGB (0,0,255);
    leds[52]=CRGB (0,0,255);
    leds[53]=CRGB (0,0,255);
    leds[54]=CRGB (0,0,255);
    leds[55]=CRGB (0,0,255);
    leds[56]=CRGB (0,0,255);
    leds[57]=CRGB (0,0,255);
    leds[58]=CRGB (0,0,255);
    leds[59]=CRGB (0,0,255);

    leds_2[50]=CRGB (0,0,255);
    leds_2[51]=CRGB (0,0,255);
    leds_2[52]=CRGB (0,0,255);
    leds_2[53]=CRGB (0,0,255);
    leds_2[54]=CRGB (0,0,255);
    leds_2[55]=CRGB (0,0,255);
    leds_2[56]=CRGB (0,0,255);
    leds_2[57]=CRGB (0,0,255);
    leds_2[58]=CRGB (0,0,255);
    leds_2[59]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1);
    }

 
  for (int i = 0; i <= 3; i++) {
  
    leds[10]=CRGB (255,0,0);
    leds[11]=CRGB (255,0,0);
    leds[12]=CRGB (255,0,0);
    leds[13]=CRGB (255,0,0);
    leds[14]=CRGB (255,0,0);
    leds[15]=CRGB (255,0,0);
    leds[16]=CRGB (255,0,0);
    leds[17]=CRGB (255,0,0);
    leds[18]=CRGB (255,0,0);
    leds[19]=CRGB (255,0,0);

    leds_2[10]=CRGB (255,0,0);
    leds_2[11]=CRGB (255,0,0);
    leds_2[12]=CRGB (255,0,0);
    leds_2[13]=CRGB (255,0,0);
    leds_2[14]=CRGB (255,0,0);
    leds_2[15]=CRGB (255,0,0);
    leds_2[16]=CRGB (255,0,0);
    leds_2[17]=CRGB (255,0,0);
    leds_2[18]=CRGB (255,0,0);
    leds_2[19]=CRGB (255,0,0);

    leds[40]=CRGB (0,0,255);
    leds[41]=CRGB (0,0,255);
    leds[42]=CRGB (0,0,255);
    leds[43]=CRGB (0,0,255);
    leds[44]=CRGB (0,0,255);
    leds[45]=CRGB (0,0,255);
    leds[46]=CRGB (0,0,255);
    leds[47]=CRGB (0,0,255);
    leds[48]=CRGB (0,0,255);
    leds[49]=CRGB (0,0,255);

    leds_2[40]=CRGB (0,0,255);
    leds_2[41]=CRGB (0,0,255);
    leds_2[42]=CRGB (0,0,255);
    leds_2[43]=CRGB (0,0,255);
    leds_2[44]=CRGB (0,0,255);
    leds_2[45]=CRGB (0,0,255);
    leds_2[46]=CRGB (0,0,255);
    leds_2[47]=CRGB (0,0,255);
    leds_2[48]=CRGB (0,0,255);
    leds_2[49]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    }
   
}



//****************************************************************


void white_blink() {

  for (int i = 0; i <= 3; i++) {
   
    leds[13]=CRGB (255,255,255);
    leds[14]=CRGB (255,255,255);
    leds[15]=CRGB (255,255,255);
    
    leds_2[13]=CRGB (255,255,255);
    leds_2[14]=CRGB (255,255,255);
    leds_2[15]=CRGB (255,255,255);
    
    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 

    leds[10]=CRGB (255,255,255);
    leds[11]=CRGB (255,255,255);
    leds[12]=CRGB (255,255,255);

    leds_2[10]=CRGB (255,255,255);
    leds_2[11]=CRGB (255,255,255);
    leds_2[12]=CRGB (255,255,255);
    
    leds[16]=CRGB (255,255,255);
    leds[17]=CRGB (255,255,255);
    leds[18]=CRGB (255,255,255);

    leds_2[16]=CRGB (255,255,255);
    leds_2[17]=CRGB (255,255,255);
    leds_2[18]=CRGB (255,255,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    
  }

}


void loop() {

if(IrReceiver.decode()){
  currentSignal=0;
  currentSignal=IrReceiver.decodedIRData.decodedRawData;
  IrReceiver.resume();
}

switch (currentSignal) {

    case 3910598400:
    {
      FastLED.clear ();
      break;
    }

    case 4077715200:
    {
      rosso();
      delay (strobo_2);
      blu();
      delay(strobo_2);
      rosso();
      delay (strobo_2);
      blu();
      delay(strobo_2);
      break;
    }
    
    case 3877175040:{
      mix_rwb();
      delay(strobo_2);
      break;
    }
    case 2707357440:{
      mix_rb();
      delay(strobo_2);
      break;
    }
    case 4144561920:{
      mix_rl_lr(); 
      delay(strobo_1);
      break;
    }
    
    case 3810328320:{
      mix_rl_w_lr();
      delay(strobo_1);
      break;
    }
    case 2774204160:{
      for(int i=0;i<5;i++)
      {
        rosso();
        delay (strobo_2);
        blu();
        delay(strobo_2);
        rosso();
        delay (strobo_2);
        blu();
        delay(strobo_2);
      }
      
      for(int i=0;i<5;i++)
      {
        mix_rl_w_lr();
        delay(strobo_1);
      }
      break;
    }
    case 3175284480:{
      pattern_1();
      break;
    }
    case 2907897600:{
      pattern_2();
      break;
    }
    /*case 3041591040:{
      
    }*/
}

//--------------------------------------- STEP 1
//rosso();
//delay (strobo_2);

//blu();
//delay(strobo_2);

//rosso();
//delay (strobo_2);

//blu();
//delay(strobo_2);

//-------------------------------------- STEP 2

//mix_rwb();
//delay(strobo_2);

//-------------------------------------- STEP 3



//-------------------------------------- STEP 4

//mix_rb();
//delay(strobo_2);

//-------------------------------------- STEP 5
/*

  
  for (int i = 0; i <= 3; i++) {
    mix_rl_lr(); 
   delay(strobo_1);
  }

//-------------------------------------- STEP 6

bianco();
delay(strobo_2);


//-------------------------------------- STEP 7

  for (int i = 0; i <= 6; i++) {
    mix_rl_w_lr();
    delay(strobo_1);
  }

//-------------------------------------- STEP 8


  for (int i = 0; i <= 6; i++) {
    rosso();
    delay (strobo_2);

    blu();
    delay(strobo_2);

    rosso();
    delay (strobo_2);

    blu();
    delay(strobo_2);
  }


//-----------------------------------  STEP 11

 for (int i = 0; i <= 6; i++) {
    pattern_1();
 }


//------------------------------------ STEP 12


for (int i = 0; i <= 6; i++) {
    pattern_2();
 }
 */
}