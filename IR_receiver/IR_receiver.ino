#include <IRremote.h>             //includo libreria
int rxPin = 5;                    //dichiaro il pin su cui connetto il sensore
IRrecv irrecv(rxPin);             //dichiaro l'oggetto ricevitore
decode_results results;           //dichiaro l'oggetto per tradurre

void setup() {
Serial.begin(9600);
irrecv.enableIRIn();              //abilito la lettura
}

void loop() {
 if (irrecv.decode(&results)){             //se il sensore percepisce
  Serial.println(results.value, HEX);      //scrive il valore .value in esadecimale
  irrecv.resume();                         //resetto la comunicazione
 }

}

