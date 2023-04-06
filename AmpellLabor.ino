int schalter = 0; // Anlegen der variable schalter

void setup() {
  // put your setup code here, to run once:

  pinMode(10,OUTPUT); //Digitalpin 10 wird als Output festgelegt
  pinMode(11,OUTPUT); //Digitalpin 11 wird als Output festgelegt
  pinMode(12,OUTPUT); //digitalpin 12 wird als Output festgelegt
  pinMode(3,INPUT);  //Digitalpin 3 wird als input festgelegt

}//hier endet die Setup Funktion

void loop() {
  // put your main code here, to run repeatedly:

  schalter=digitalRead(3); // der wert, der an pin 3 eingelesen wird, wird in Schalter geschrieben

  if(schalter==LOW){ // Abfrage der Bedingung, ob an Pin 3 ein LOW Signal vorlieg => Taster nicht gedruckt

  // Ampel rot
  digitalWrite(12,HIGH); //Pin 12 gibt HIGH aus => rote LED leuchtet
  digitalWrite(11,LOW); // pin 11 gibt LOW aus => gelbe LED leuchtet
  digitalWrite(10,LOW); //Pin 10 gibt LOW aus => grune LED leuchtett
  delay(250); // Verzögerung von 250 ms


  }  
  else { // =>Taster gedruckt, es liegt HIGH an pin 3
  
  // Ampel rot
  digitalWrite(12,HIGH); //Pin 12 gibt HIGH aus => rote LED leuchtet
  digitalWrite(11,LOW); // pin 11 gibt LOW aus => gelbe LED leuchtet
  digitalWrite(10,LOW); //Pin 10 gibt LOW aus => grune LED leuchtett
  delay(250); // Verzögerung von 250 ms



  
  // Ampel gelb
  digitalWrite(12,LOW); //Pin 12 gibt HIGH aus => rote LED leuchtet
  digitalWrite(11,HIGH); // pin 11 gibt LOW aus => gelbe LED leuchtet
  digitalWrite(10,LOW); //Pin 10 gibt LOW aus => grune LED leuchtett
  delay(4000); // Verzögerung von 4000 ms
  
  // Ampel grün
  digitalWrite(12,LOW); //Pin 12 gibt HIGH aus => rote LED leuchtet
  digitalWrite(11,LOW); // pin 11 gibt LOW aus => gelbe LED leuchtet
  digitalWrite(10,HIGH); //Pin 10 gibt LOW aus => grune LED leuchtett
  delay(10000); // Verzögerung von 1000 ms


  }

}











