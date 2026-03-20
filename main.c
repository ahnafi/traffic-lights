// code traffic light tinkercad

/*
* inisialisasi constanta lampu dari utara -> timur -> selatan -> barat
* dengan pin digital mulai dari 13 sampai 2
*/
// north
const int RNORTH = 13;
const int YNORTH = 12;
const int GNORTH = 11;

// east
const int REAST = 10;
const int YEAST = 9;
const int GEAST = 8;

// south
const int RSOUTH = 7;
const int YSOUTH = 6;
const int GSOUTH = 5;

// west
const int RWEST = 4;
const int YWEST = 3;
const int GWEST = 2;

/*
* fungsi untuk menyalakan traffic light pada satu sisi.
* fungsi ini menyalakan semua lampu traffic light merah,
* selanjutnya untuk menyalakan lampu disisi tersebut.
* void light(int redLight,int yellowLight, int greenLight)
* int redLight untuk pin led warna merah,
* int yellowLight untuk pin led warna kuning
* int greenLight untuk pin led warna hijau
*/
void light(int red, int yellow, int green){
  // menyalakan semua lampu merah
  digitalWrite(REAST, HIGH);
  digitalWrite(RSOUTH, HIGH);
  digitalWrite(RWEST, HIGH);
  digitalWrite(RNORTH, HIGH);

  // mematikan lampu merah pada simpang 
  delay(1000);
  digitalWrite(red, LOW);

  // Menyalakan lampu kuning 
  // berkedip sebanyak 3x dalam 2 detik
  for (int i = 0; i < 3; i++) {
   digitalWrite(yellow, HIGH);
   delay(333); // Lampu menyala selama 333 ms
   digitalWrite(yellow, LOW);
   delay(333); // Lampu mati selama 333 ms
  }

  //menyalakan lampu hijau selama 5 detik
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);

  // menyalakan lampu merah
  digitalWrite(red, HIGH);
}

/*
* void setup() disini digunakan sebagai inisialisasi pin pada arduino
* pinMode pada semua lampu led merah, kuning, dan hijau sebagai output
* mulai dari arah utara -> timur -> selatan -> barat (sesuai arah jam)
* selanjutnya inisialisasi untuk menyalakan semua lampu merah agar ketika dinyalakan 
* pertama kali lampu merah sudah menyala
*/
void setup(){
  // north led
  pinMode(RNORTH, OUTPUT);
  pinMode(YNORTH, OUTPUT);
  pinMode(GNORTH, OUTPUT);

  // east led
  pinMode(REAST, OUTPUT);
  pinMode(YEAST, OUTPUT);
  pinMode(GEAST, OUTPUT);

  // south led
  pinMode(RSOUTH, OUTPUT);
  pinMode(YSOUTH, OUTPUT);
  pinMode(GSOUTH, OUTPUT);

  // west led
  pinMode(RWEST, OUTPUT);
  pinMode(YWEST, OUTPUT);
  pinMode(GWEST, OUTPUT);

  // menyalakan semua lampu merah
  digitalWrite(REAST, HIGH);
  digitalWrite(RSOUTH, HIGH);
  digitalWrite(RWEST, HIGH);
  digitalWrite(RNORTH, HIGH);

}

/*
* void loop() menyalakan lampu traffic light berurutan dari arah utara -> barat -> selatan -> timur
* dan kembali ke arah utara lagi 
*/
void loop(){
    // north
    light(RNORTH, YNORTH, GNORTH);

    // east
    light(REAST, YEAST, GEAST);

    // south
    light(RSOUTH, YSOUTH, GSOUTH);

    // west
    light(RWEST, YWEST, GWEST);

}

