#include <stdio.h>
#define LOWER 0 /* 温度表的下限 */
#define UPPER 300 /* 温度表的上限 */
#define STEP 20 /* 步长 */

int main(){
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	return 0;
}
