int red1=5;
int green1=6;
int red2=9;
int green2=10;
int ss1=0;
int ss2=1;
int read1=0;
int read2=0;
int x1=0;
int x2=0;

void setup()
{
  
  pinMode(red1,1);
  pinMode(green1,1);
  pinMode(red2,1); 
  pinMode(green2,1);
  pinMode(ss1,0);
  pinMode(ss2,0);
}

void loop()
{
  read1 = digitalRead(ss1);
  read2 = digitalRead(ss2);
  
  if(read1==1)
  {
    analogWrite(green1,128);
    analogWrite(red1,255);
  }
  
  else 
  {
    analogWrite(green1,0);
    analogWrite(red1,0);
  }

  if(read2==1)
  {
    analogWrite(green2,128);
    analogWrite(red2,255);
  }
  
  else 
  {
    analogWrite(green2,0);
    analogWrite(red2,0);
  }
}