void setup(){
Serial.begin(9600);
pinMode(13,OUTPUT);  //Sets Relayoutput 1 to high or low
pinMode(3,OUTPUT); //To L293 enable
digitalWrite(3,1);

pinMode(10,OUTPUT);//Sets ground to relay input2, u could easily connect relay to ground to save pins
digitalWrite(10,0);
}

void loop(){
 char s;
if(Serial.available()){
s=Serial.read();

if(s=='o'){
digitalWrite(13,1);}
else if (s=='f')
{
digitalWrite(13,0);
}

}
}
