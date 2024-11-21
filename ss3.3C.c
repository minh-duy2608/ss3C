#include <stdio.h>

int main(){
	const float PI = 3.14;
 	int radius;
 	float circumference_tron, area_tron;
 	printf("Nhap ban kinh hinh tron: ");
 	scanf("%d",&radius);
 	circumference_tron = 2 * PI * radius;
 	area_tron = PI * radius * radius;
 	printf("Chu vi hinh tron la: %.2f\n", circumference_tron);
    printf("Dien tich hinh tron la: %.2f\n", area_tron);
    
    return 0;
}
