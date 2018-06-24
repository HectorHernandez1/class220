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

  str[ii+1]='\0';

if (check_int(str)==0){
	fprintf(stderr,"non printable character detected!!\n");
}
	else{
		int a = (str[1]-'0');
		int b = (str[2]-'0');
  	fprintf(stdout,"the gcd is: %d \n",gcd(a,b));
}
  
  return 0;
}

int check_int(char *str){
	int final = 1;
	int ii = 0;
	while(str[ii]!='\0'){
	if( str[ii] < '/'|| str[ii] > ':'){
		final = 0;
		break;
	}
	ii++;
}

return final;
}
