#include<stdio.h>
#include<stdlib.h>
#include"gcd.h"
#define  MAXCHARS 1024

int check_int(char *str);

int main () {
  

  /*
cd /Users/hectorhernandez/Dropbox/school/CSC220/class_assighnment/Week4/day1/practice7/

gcc -ansi -pedantic -Wall practice7.c

gcc practice7.c gcd.c -ansi -pedantic -Wall
  */
 

     int c;
    int ii=0;
	char str[MAXCHARS];
  while ( (c = getc(stdin)) != EOF) {
    str[ii]=c;
    ii++;
  }

 

fprintf(stdout,"the input is: %s \n",str);


if (check_int(str)==0){
	fprintf(stderr,"non numerical values detected!!\n");
}
	else{
		int a = (str[0]-'0');
		int b = (str[1]-'0');
  	fprintf(stdout,"the gcd is: %d \n",gcd(a,b));
}
  
  return 0;
}

int check_int(char *str){
	int final = 1;
	int ii = 0;
	while(str[ii]!='\0'){
	if( str[ii] < 0 && str[ii] > 9){
		final = 0;
		break;
	}
	ii++;
}

return final;
}
