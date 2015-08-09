#include<p18f4550.h>

void main()
{
  OSCCONbits.IRCF0=1; // Sets the internal Oscillator to work at 8 Mhz 
  OSCCONbits.IRCF1=1;
  OSCCONbits.IRCF2=1;
  TRISD=0x00; // Sets the PortD as output port
  PORTD= 0b10101100; Sets the 3rd, 4th, 6th and 8th bit of PortD to high.
}
