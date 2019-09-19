//output pin 8 (Arduino Nano)

unsigned short buff = 0;

void setup(){
  
  Serial.begin(115200);
  DDRB = 0xff;
}
void loop(){
    if(!((UCSR0A&0x80) == 0x80)){
        buff += UDR0;
        PORTB = 0x0001&(buff >> 8);
        buff &= 0x00ff;
        
     }

}
