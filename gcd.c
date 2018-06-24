#include<stdio.h>
#include"gcd.h"

int gcd(int x,int y){
	int remainder;
if(y==0){
	return x;
	}else if(y>0){
		remainder = x%y;
	return gcd(y, remainder);
	}
}
