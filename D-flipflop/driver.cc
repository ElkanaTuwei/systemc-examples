#include "driver.h"

void driver::drive(void){
	while(1){
		d_din = 1;
		wait(5,SC_PS);
		d_din = 0;
		wait(20,SC_PS);
				

	}
}
