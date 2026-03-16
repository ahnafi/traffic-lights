// code traffic light tinkercad
//

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

// void light(int red, int yellow, int green){
//   digitalWrite(RNORTH, HIGH);
//   delay(3000);
//   digitalWrite(RNORTH, LOW);
//
//   for (int i=0;i<3;i++){
//    digitalWrite(YNORTH, HIGH);
//    delay(500);
//    digitalWrite(YNORTH, LOW);
//    delay(500);
//   }
//
//   digitalWrite(GNORTH, HIGH);
//   delay(3000);
//   digitalWrite(GNORTH, LOW);
// }

void setup(){
  pinMode(RNORTH, OUTPUT);
  pinMode(YNORTH, OUTPUT);
  pinMode(GNORTH, OUTPUT);
}

void loop(){
  digitalWrite(REAST, HIGH);
  digitalWrite(RSOUTH, HIGH);
  digitalWrite(RWEST, HIGH);
  digitalWrite(RNORTH, HIGH);
  delay(3000);
  digitalWrite(RNORTH, LOW);
  
  for (int i=0;i<3;i++){
   digitalWrite(YNORTH, HIGH);
   delay(500);
   digitalWrite(YNORTH, LOW);
   delay(500);
  }
  
  digitalWrite(GNORTH, HIGH);
  delay(3000);
  digitalWrite(GNORTH, LOW);

digitalWrite(REAST, HIGH);
  digitalWrite(REAST, HIGH);
  digitalWrite(REAST, HIGH);
  digitalWrite(RNORTH, HIGH);
  delay(3000);
  digitalWrite(RNORTH, LOW);
  
  for (int i=0;i<3;i++){
   digitalWrite(YNORTH, HIGH);
   delay(500);
   digitalWrite(YNORTH, LOW);
   delay(500);
  }
  
  digitalWrite(GNORTH, HIGH);
  delay(3000);
  digitalWrite(GNORTH, LOW);



}
