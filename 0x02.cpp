#include<stdio.h>
int main(){
	unsigned long ulsm = 0;
	long ulcount =5;
	while(0 <= ulcount){
		ulsm += ulcount;
		ulcount--;
	}
	printf("%lu\n",ulsm);
	return 0;
}
