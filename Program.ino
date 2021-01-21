int lamp = 9; // for relay connected with lamp
int sensor =2 ; // for PIR sensor connected with uno

void setup() 
{
  Serial.begin(9600);
  pinMode(lamp, OUTPUT);//lamp is output
  pinMode(sensor, INPUT); //PIR sensor is the input provided
}

void loop() 
{
  int val=digitalRead(sensor);
  Serial.println(val);

    if (val==1) //if senses any movement
    {
          digitalWrite(lamp,1);//lamp will glow
          Serial.println("LAMP is ON for you");
    }
    else if (val==0)
    {
         digitalWrite(lamp,0);//lamp will be off if no movement
         Serial.println("LAMP is OFF we are saving energy");
    }
  delay(100);
}