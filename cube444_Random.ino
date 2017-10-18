int LP = 3;
int CP = 4;
int DP = 2;

#define A 30
#define B 31
#define C 32
#define D 33

void setup ()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(LP, OUTPUT);
  pinMode(CP, OUTPUT);
  pinMode(DP, OUTPUT);
  randomSeed(analogRead(0));
}
void loop()
{
  char cubeA[3];
  cubeA[0] = char(random(0, 255));
  cubeA[1] = char(random(0, 255));
  char cubeB[3];
  cubeB[0] = char(random(0, 255));
  cubeB[1] = char(random(0, 255));
  char cubeC[3];
  cubeC[0] = char(random(0, 255));
  cubeC[1] = char(random(0, 255));
  char cubeD[3];
  cubeD[0] = char(random(0, 255));
  cubeD[1] = char(random(0, 255));
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(LP, LOW);
    switch (i)
    {
      case 0:
        digitalWrite(A, HIGH);
        shiftOut(DP, CP, MSBFIRST, cubeA[0]);
        shiftOut(DP, CP, MSBFIRST, cubeA[1]);
        digitalWrite(A, LOW);
        break;
      case 1:
        digitalWrite(B, HIGH);
        shiftOut(DP, CP, MSBFIRST, cubeB[0]);
        shiftOut(DP, CP, MSBFIRST, cubeB[1]);
        digitalWrite(B, LOW);
        break;
      case 2:
        digitalWrite(C, HIGH);
        shiftOut(DP, CP, MSBFIRST, cubeC[0]);
        shiftOut(DP, CP, MSBFIRST, cubeC[1]);
        digitalWrite(C, LOW);
        break;
      case 3:
        digitalWrite(D, HIGH);
        shiftOut(DP, CP, MSBFIRST, cubeD[0]);
        shiftOut(DP, CP, MSBFIRST, cubeD[1]);
        digitalWrite(D, LOW);
        break;
    }
    digitalWrite(LP, HIGH);
  }
}
