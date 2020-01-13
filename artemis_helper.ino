#include"artemis_helper.h"
#include"pinDefs.h"


byte readpins(){
#ifdef CHAN5
byte pinStates = (digitalRead(CHAN5) << 5) | (digitalRead(CHAN4) << 4) | (digitalRead(CHAN3) << 3) | (digitalRead(CHAN2) << 2) | (digitalRead(CHAN1) << 1) | digitalRead(CHAN0);
#else
byte pinStates = (digitalRead(CHAN4) << 4) | (digitalRead(CHAN3) << 3) | (digitalRead(CHAN2) << 2) | (digitalRead(CHAN1) << 1) | digitalRead(CHAN0);
#endif
return pinStates;
}