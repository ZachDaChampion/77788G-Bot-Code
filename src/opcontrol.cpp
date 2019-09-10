#include "main.h"
#include "definition.h"

using namespace pros;

void opcontrol(){
  while(true){
    chassisLF.move(leftY);
    chassisLB.move(leftY);
    chassisRF.move(rightY);
    chassisRB.move(rightY);

    lift.move((controlL1 - controlL2)*100);
  }
}
