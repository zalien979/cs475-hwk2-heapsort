#include <stdio.h>
#include "employee.h"
#include "heap.h"
#include <string.h>
#define MAX_EMPLOYEES 7
#define MAX_LEN 25
int main(int argc, char *argv[])
{
	Employee arr[MAX_EMPLOYEES];
	Employee a;
	Employee b,c,d,e,f,g;
	char stra[MAX_LEN]="testa";
	strcpy(a.name,stra);
	a.salary= 5;
	arr[0]=a;
	char strb[MAX_LEN]="testb";
	strcpy(b.name,strb);
	b.salary= 7;
	arr[1]=b;
	char strc[MAX_LEN]="testc";
	strcpy(c.name,strc);
	c.salary= 79;
	arr[2]=c;
	char strd[MAX_LEN]="testd";
	strcpy(d.name,strd);
	d.salary= 11;
	arr[3]=d;
	char stre[MAX_LEN]="teste";
	strcpy(e.name,stre);
	e.salary= 12;
	arr[4]=e;
	char strf[MAX_LEN]="testf";
	strcpy(f.name,strf);
	f.salary= 125;
	arr[5]=f;
	char strg[MAX_LEN]="testg";
	strcpy(g.name,strg);
	g.salary= 3;
	arr[6]=g;
	printList(arr, MAX_EMPLOYEES);
	heapSort(arr, MAX_EMPLOYEES);
	printList(arr, MAX_EMPLOYEES);
	return 0;
}
