#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>


int main()
{
	setlocale(LC_ALL, "ua");
	int abs,tps;
	

	

	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &abs);

	if(abs == 1) 
	{
	printf("Введiть тип завдання 1 : (1-2)");
	scanf("%d", &tps);
		if(tps == 1) {
			exOneA();
		}
		else if(tps == 2) {
			exOneB();
		}
		else {
			printf("Такого типу немає");
		}
	}
	else if (abs == 2) 
	{
		exTwo();
	} 
	else if (abs == 3) 
	{
		exThree();
	}
	else if (abs == 4) 
	{
		exFour();
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}

	printf("\n\n\n");
	system("pause");
	return 0;
    
}
int exOneA() {
	float x,f;	

	printf("Введите число: ");
    scanf("%f",&x);

	if(x <= 0) {
		f = abs(x+cos(x));
		printf("f(%f)=%f", x,f);
		return 0;
	}

	f = pow(x,2)+5*x-6;
	printf("f(%f)=%f", x,f);
	return 0;
}
int exOneB() {
	float x,f;
    
    printf("Введите число: ");
    scanf("%f",&x);
    
   	if(x > 0) {
		f = pow(x,2)+5*x-6;
	}
	else {
		f = abs(x+cos(x));
	}
    
    printf("f(%f)=%f", x,f);
    return 0;
}
int exTwo() {
	int a,b,c,aOne,bOne,cOne;
	float oneRecS,twoRecS;

	printf("Введiть координати вершин першого трикутника: ");
	printf("a= ");
	scanf("%d",&a);
	printf("b= ");
	scanf("%d",&b);
	printf("c= ");
	scanf("%d",&c);

	if((a + b) > c && (a + c) > b && (b + c) > a) {
		printf("Введiть координати вершин другого трикутника: ");
		printf("a2= ");
		scanf("%d",&aOne);
		printf("b2= ");
		scanf("%d",&bOne);
		printf("c2= ");
		scanf("%d",&cOne);
		if((aOne + bOne) > cOne && (aOne + cOne) > bOne && (bOne + cOne) > aOne) {
			oneRecS = squeltrick(a,b,c);
			twoRecS = squeltrick(aOne,bOne,cOne);
			if(oneRecS > twoRecS) {
				printf("Площа 1 трикутника бiльше!");
			}
			else if(oneRecS == twoRecS) {
				printf("Вони одинаковi!");
			}
			else {
				printf("Площа 2 трикутника бiльше!");
			}
		}
		else {
			printf("Створити такий трикутник неможливо!");
			return 0;
		}

	}
	else {
		printf("Створити такий трикутник неможливо!");
		return 0;
	}
	return 0;
}

int squeltrick(a,b,c) {
	float r,s;
	// S = sqrt(R(R - A)(R - B)(R - C))
	r = (a+b+c)/2;
	
	s = sqrt(r*(r-a)*(r-b)*(r-c));

	return s;

}

int exThree() {
	int n,f = 0;

	printf("Введiть число :");
	scanf("%d",&n);

	if(n <= 100) {
		switch(n) {
			case 1 : printf("%d рiк",n); return 0; break;
			case 21 : printf("%d рiк",n); return 0; break;
			case 31 : printf("%d рiк",n); return 0; break;
			case 41 : printf("%d рiк",n); return 0; break;
			case 51 : printf("%d рiк",n); return 0; break;
			case 61 : printf("%d рiк",n); return 0; break;
			case 71 : printf("%d рiк",n); return 0; break;
			case 81 : printf("%d рiк",n); return 0; break;
			case 91 : printf("%d рiк",n); return 0; break;
			case 2 : f = 1; break;
			case 22 : f = 1; break;
			case 32 : f = 1; break;
			case 42 : f = 1; break;
			case 52 : f = 1; break;
			case 62 : f = 1; break;
			case 72 : f = 1; break;
			case 82 : f = 1; break;
			case 92 : f = 1; break;
			case 3 : f = 1; break;
			case 23 : f = 1; break;
			case 33 : f = 1; break;
			case 43 : f = 1; break;
			case 53 : f = 1; break;
			case 63 : f = 1; break;
			case 73 : f = 1; break;
			case 83 : f = 1; break;
			case 93 : f = 1; break;
			case 4 : f = 1; break;
			case 24 : f = 1; break;
			case 34 : f = 1; break;
			case 44 : f = 1; break;
			case 54 : f = 1; break;
			case 64 : f = 1; break;
			case 74 : f = 1; break;
			case 84 : f = 1; break;
			case 94 : f = 1; break;
		}
	} 
	if(f == 1) {
		printf("%d роки", n);
	}
	else {
		printf("%d рокiв", n);
	}
	
	return 0;
}

int exFour() { 
	float y,z,t;

	printf("Введіть у=");
	scanf("%f", &y);
	printf("Введіть z=");
	scanf("%f", &z);

	
	if((z-2*y) != 0) {
		if((3*((y)/(z-2*y))) > 0 ) {
			// при y = 1 z = 300 сходиться з калкулятором -299 ....
			t=sqrt(3*((y)/(z-2*y)))-y*z;
		}
		else {
			printf("Корiнь з вiдємного числа");
			return 0;
		}
	}
	else {
		printf("Ділення на 0!");
		
		return 0;
	}
	

	printf("t=%f",t);
}
