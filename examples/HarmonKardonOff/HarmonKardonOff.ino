#define DEBUG
#include <IRremote.h>
#include <IRremoteInt.h>


IRsend ir;

void setup()
{
 ir.enableWiredOut(9);
 ir.sendNEC(0x010ef906,32);
}

void loop() {}
