// C++ code
//
int boton;
int rojo;
int verde;
int azul;
int tiempoBoton=400;
bool estadoBoton=LOW;

void setup()
{
  	pinMode(11,INPUT);

	pinMode(10,OUTPUT);
    
    pinMode(9,OUTPUT);
  
    pinMode(5,INPUT);

	pinMode(3,OUTPUT);
    
    pinMode(13,OUTPUT);
    
}



void loop()
{
  if(!digitalRead(13) == HIGH)
  {
	estadoBoton=!estadoBoton;
    	delay(tiempoBoton);
  }
 
 
  if(estadoBoton){
 analogWrite(6,0); 
  analogWrite(5,0); 
  analogWrite(3,0); 
  
  analogWrite(11,200); 
  analogWrite(10,0); 
  analogWrite(9,100); 
  
  delay(300);
  
  	analogWrite(6,0);
 	 analogWrite(5, 0); 
  	analogWrite(3, 0); 
  	analogWrite(11, 200); 
 	 analogWrite(10, 0); 
 	 analogWrite(9, 100); 
    
  delay(300); 
  
  	analogWrite(11, 150); 
  	analogWrite(10, 75); 
  	analogWrite(9, 0); 
  	delay(300); 
 	 analogWrite(11, 255); 
  	analogWrite(10, 0); 
 	 analogWrite(9, 0); 
 	 
  delay(300); 
  
 	 analogWrite(11, 255); 
 	 analogWrite(10, 0); 
 	 analogWrite(9, 255); 
 	 
  delay(300); 
  
  	analogWrite(11, 0); 
  	analogWrite(10, 100); 
  	analogWrite(9, 100); 
  	
    delay(300);
 }else{
 	analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 0);
   
   delay(300);
    
   	analogWrite(6, 200);
    analogWrite(5, 0);
    analogWrite(3, 100);
    
   delay(300);
   
   	analogWrite(6, 50);
    analogWrite(5, 25);
    analogWrite(3, 0);
    
   delay(300);

   
   	analogWrite(6,255);
    analogWrite(5, 0);
    analogWrite(3, 0);
    
   delay(300);
   
   	analogWrite(6, 255);
    analogWrite(5, 0);
    analogWrite(3, 255);
    
   delay(300);
  
   	analogWrite(6, 0);
    analogWrite(5, 100);
    analogWrite(3, 100);
    
   delay(300);
  } 
  
 
}
  