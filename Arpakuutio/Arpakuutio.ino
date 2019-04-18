const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;
const int LED5 = 9;
const int LED6 = 8;
const int LED7 = 7;
#define LEDON HIGH
#define LEDOFF LOW 
const int NAPPI = 5;
#define NAPPIPAINETTU LOW
int kajari = 3;

long randNumero;

void setup() {
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(NAPPI, INPUT_PULLUP);
  
  Serial.begin(9600);


  randomSeed(analogRead(0));

  demoMode();
}

void loop() {
                     
  int tila = digitalRead(NAPPI);
  
  if (tila == NAPPIPAINETTU) {
  tone(kajari, 200, 50);
  randNumero = random(1, 7);                  // tulostaa numeron 1:stä 6:seen.
  Serial.print("Noppa: ");
  Serial.println(randNumero);
  noppa();
    
  }
  
}

void yksi() {

  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
}

void kaksi() {

  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
}

void kolme() {

  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
}

void nelja() {

  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
}

void viisi() {

  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
}

void kuusi() {

  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
}

void alloff() {

  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
}


void noppa() {

  if (randNumero == 1)
  yksi();
  else if (randNumero == 2)
  kaksi();
  else if (randNumero == 3)
  kolme();
  else if (randNumero == 4)
  nelja();
  else if (randNumero == 5)
  viisi();
  else if (randNumero == 6)
  kuusi();
  else alloff();
}

void demoMode() {

  int viive = 120;
  
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(750);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
  delay(750);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
  delay(750);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
  delay(750);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDON);
  delay(750);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(750);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(500);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
  digitalWrite(LED1, LEDON);
  digitalWrite(LED2, LEDON);
  digitalWrite(LED3, LEDON);
  digitalWrite(LED4, LEDON);
  digitalWrite(LED5, LEDON);
  digitalWrite(LED6, LEDON);
  digitalWrite(LED7, LEDON);
  delay(viive);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
  digitalWrite(LED6, LEDOFF);
  digitalWrite(LED7, LEDOFF);
  delay(viive);
}
