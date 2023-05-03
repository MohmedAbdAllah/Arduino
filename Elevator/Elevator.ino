//Example_2_Blinking_with_Switch

//const int ledPin3 = 1;
/*const int ledPin2 = 4;
const int ledPin1 = 3;
const int ledPin0 = 2;*/
           
const int buttonPin0 = 11;
const int buttonPin1 = 12;
const int buttonPin2 = 13;
//const int buttonPin3 = 5;
const int puttonPin0 = 7;
const int puttonPin1 = 9;
const int puttonPin2 = 8;
         
int val0;
int val1;
int val2;
int val3;

int va0;
int va1;
int va2;

int x =0;
int y =0;
int I;

const int CW2=2;
const int PWM=3;
const int CCW2=4;
// int SPEED_Control=60;

void setup ( )

 {
  //pinMode(ledPin0, OUTPUT);  
  pinMode(buttonPin0, INPUT);
  
  //pinMode(ledPin1, OUTPUT);  
  pinMode(buttonPin1, INPUT);
  
  //pinMode(ledPin2, OUTPUT);  
  pinMode(buttonPin2, INPUT);

  pinMode(puttonPin0, INPUT);
  pinMode(puttonPin1, INPUT);
  pinMode(puttonPin2, INPUT);

pinMode(CW2,OUTPUT);
pinMode(CCW2,OUTPUT);
pinMode(PWM,OUTPUT);
pinMode(5,OUTPUT);
  
 // pinMode(ledPin3, OUTPUT);  
 // pinMode(buttonPin3, INPUT);    

 }

void loop()

{

  val0 = digitalRead(buttonPin0);
  val1 = digitalRead(buttonPin1);
  val2 = digitalRead(buttonPin2);
 // val3 = digitalRead(buttonPin3);
  va0 = digitalRead(puttonPin0);
  va1 = digitalRead(puttonPin1);
  va2 = digitalRead(puttonPin2);
  
  digitalWrite(5,HIGH);
  digitalWrite(PWM,60
  );

  if (val0 == HIGH)
     
     {
      x=0;        
      } 
  else if (val1 == HIGH)
     
     {
      x=1;        
      }                     
   
    else if (val2 == HIGH)
     
     {
      x=2;         
      }                     
 
  
    else
     
     {
      I=0;     
      }                     


     if (va0 == HIGH)
     
     {
      y=0;        
      }

     else if (va1 == HIGH)
     
     {
      y=1;        
      }                     
   
    else if (va2 == HIGH)
     
     {
      y=2;         
      }                     
  
     else
     
     {
      I=0;         
      } 
   if(x > y)
   {
digitalWrite(CW2,LOW);
digitalWrite(CCW2,HIGH); // if ccw2 is HIGH motor rotate DWON
    }
   else if(y > x)
   {
digitalWrite(CW2,HIGH);
digitalWrite(CCW2,LOW); // if ccw2 is LOW motor rotate UP
  
    }
    else
    {
      digitalWrite(CW2,LOW);
      digitalWrite(CCW2,LOW); 

      }
                         
   
}
