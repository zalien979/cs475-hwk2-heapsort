/*
 * heapsort.c
 *
 *  Created on: Jul 1, 2013
 *      Author:
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include "heap.h"

/**
 * Sorts a list of n employees in descending order
 *
 * @param	*A	Pointer to the list of employees
 * @param	n	Size of the heap
 */
void heapSort(Employee *A, int n)
{
	buildHeap(A,n);
	while(n>0){
		n--;
		swap(&A[n],&A[0]);
		buildHeap(A,n);

	}
}

/**
 * Given an array A[], we want to get A[] into min-heap property
 * We only need to run heapify() on internal nodes (there are floor(n/2) of them)
 * and we need to run it bottom up (top-down cannot build a heap)
 *
 * @param	*A	Pointer to the list of employees
 * @param	n	Size of the heap
 */
void buildHeap(Employee *A, int n)
{
	
	for(int i=(n/2)-1; i>=0; i--){
		heapify(A,i,n);
	}
}
 
/**
 * We want to start with A[i] and percolate it downward
 * if it is greater than either left or right child.
 *
 * @param	*A	Pointer to the list of employees
 * @param	i	Index of current element to heapify
 * @param	n	Size of the heap
 */
void heapify(Employee *A, int i, int n)
{
	
	int left;
	left=(2*i)+1;
	int right;
	right=(2*i)+2;
	int smaller;
	smaller=A[i].salary;
	int side=0;
	if(left<n && smaller>A[left].salary){
		smaller=A[left].salary;
		side =1;
	}
	if(right<n && smaller>A[right].salary){
		side =2;
	}
	if(side ==1){
		swap(&A[i],&A[left]);
		heapify(A,left,n);
	}
	else if(side==2){
		swap(&A[i],&A[right]);
		heapify(A,right,n);
	}

}

/**
 * Swaps the locations of two Employees
 * @param *e1 An Employee
 * @param *e2 Another Employee to swap with
 */
void swap(Employee *e1, Employee *e2)
{
	
	Employee temp;
	temp=*e1;
	*e1=*e2;
	*e2=temp;

}

/**
 * Outputs an array of Employees
 * @param	*A	Pointer to the list of employees
 * @param	n	Size of the list
 */
void printList(Employee *A, int n)
{
	for(int i=0; i<n; i++){
		printf("%d: %s %d\n", i,A[i].name, A[i].salary);
	}
}
