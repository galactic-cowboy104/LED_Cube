#define NUM_COL 9
#define NUM_LEV 3
#define DELAY1 400
#define DELAY2 300

byte columns[NUM_COL] = {23, 22, 21, 19, 18, 5, 4, 2, 15};           
byte levels[NUM_LEV] = {14, 12, 13};

void sequence1() {
  
   for(int i = 0; i < NUM_LEV; i ++)
    digitalWrite(levels[i], HIGH);
  for(int i = 0; i < 3; i ++)
    digitalWrite(columns[i], HIGH);
  delay(DELAY1);

  for(int i = 0; i < 3; i ++)
    digitalWrite(columns[i], LOW);
  for(int i = 3; i < 6; i ++)
    digitalWrite(columns[i], HIGH);
  delay(DELAY1);

  for(int i = 3; i < 6; i ++)
    digitalWrite(columns[i], LOW);
  for(int i = 6; i < 9; i ++)
    digitalWrite(columns[i], HIGH);
  delay(DELAY1);

}

void sequence2() {

  for(int i = 1; i < NUM_LEV; i ++)
    digitalWrite(levels[i], LOW); 
  for(int i = 0; i < NUM_COL; i ++)
    digitalWrite(columns[i], HIGH);
  digitalWrite(levels[0], HIGH);
  delay(DELAY1);

  digitalWrite(levels[0], LOW);
  digitalWrite(levels[1], HIGH);
  delay(DELAY1);

  digitalWrite(levels[1], LOW);
  digitalWrite(levels[2], HIGH);
  delay(DELAY1);

}

void sequence3() {

  for(int i = 0; i < NUM_COL; i ++)
    digitalWrite(columns[i], LOW); 
  for(int i = 0; i < NUM_LEV; i ++)
    digitalWrite(levels[i], HIGH); 
  digitalWrite(columns[0], HIGH);
  delay(DELAY2);

  digitalWrite(columns[0], LOW);
  digitalWrite(columns[1], HIGH);
  digitalWrite(columns[3], HIGH);
  delay(DELAY2);

  digitalWrite(columns[1], LOW);
  digitalWrite(columns[3], LOW);
  digitalWrite(columns[2], HIGH);
  digitalWrite(columns[4], HIGH);
  digitalWrite(columns[6], HIGH);
  delay(DELAY2);

  digitalWrite(columns[2], LOW);
  digitalWrite(columns[4], LOW);
  digitalWrite(columns[6], LOW);
  digitalWrite(columns[5], HIGH);
  digitalWrite(columns[7], HIGH);
  delay(DELAY2);

  digitalWrite(columns[5], LOW);
  digitalWrite(columns[7], LOW);
  digitalWrite(columns[8], HIGH);
  delay(DELAY2);

  digitalWrite(columns[8], LOW);

}

void setup() {

  for(int i = 0; i < NUM_COL; i ++)
    pinMode(columns[i], OUTPUT);

  for(int i = 0; i < NUM_LEV; i ++)
    pinMode(levels[i], OUTPUT);

}

void loop() {

  sequence1();
  sequence2();
  sequence3();

}
