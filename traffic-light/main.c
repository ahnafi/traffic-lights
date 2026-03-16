// code traffic light tinkercad

// north
const int RNORTH = 13;
const int YNORTH = 12;
const int GNORTH = 11;

// west
const int RWEST = 10;
const int YWEST = 9;
const int GWEST = 8;

// south
const int RSOUTH = 7;
const int YSOUTH = 6;
const int GSOUTH = 5;

// east
const int REAST = 4;
const int YEAST = 3;
const int GEAST = 2;

void light(int red, int yellow, int green){
  digitalWrite(REAST, HIGH);
  digitalWrite(RSOUTH, HIGH);
  digitalWrite(RWEST, HIGH);
  digitalWrite(RNORTH, HIGH);
  delay(3000);
  digitalWrite(red, LOW);

  for (int i=0;i<3;i++){
   digitalWrite(yellow, HIGH);
   delay(500);
   digitalWrite(yellow, LOW);
   delay(500);
  }

  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
}

void setup(){
  pinMode(RNORTH, OUTPUT);
  pinMode(YNORTH, OUTPUT);
  pinMode(GNORTH, OUTPUT);

  pinMode(RWEST, OUTPUT);
  pinMode(YWEST, OUTPUT);
  pinMode(GWEST, OUTPUT);

  pinMode(RSOUTH, OUTPUT);
  pinMode(YSOUTH, OUTPUT);
  pinMode(GSOUTH, OUTPUT);

  pinMode(REAST, OUTPUT);
  pinMode(YEAST, OUTPUT);
  pinMode(GEAST, OUTPUT);
}

void loop(){
    // north
    light(RNORTH, YNORTH, GNORTH);

    // west
    light(RWEST, YWEST, GWEST);

    // south
    light(RSOUTH, YSOUTH, GSOUTH);

    // east
    light(REAST, YEAST, GEAST);

}
