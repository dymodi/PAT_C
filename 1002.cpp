//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//void bubble(int *e, double *c, int n) {
//	int flag = 0;
//	int index = 0;
//	int tmpi;
//	double tmpd;
//	while (flag = 0) {
//		flag = 1;
//		for (int i = 0; i < n - index; i++) {
//			if (e[i] < e[i+1]) {
//				flag = 0;
//				tmpi = e[i]; tmpd = c[i];
//				e[i] = e[i+1]; c[i] = c[i+1];
//				e[i+1] = tmpi; c[i+1] = tmpd;
//			}
//		index++;
//		}
//	}
//}
//
//
//int main(void) {
//		
//		
//		int k1, k2;
//		scanf("%d",&k1);
//
//		int *e1 = (int*)calloc(k1,sizeof(int));
//		double *c1 = (double*)calloc(k1,sizeof(double));
//		for (int i = 0; i < k1; i++) {
//			scanf("%d",&e1[i]);
//			scanf("%lf",&c1[i]);
//		}
//
//		scanf("%d",&k2);
//		int *e2 = (int*)calloc(k2,sizeof(int));
//		double *c2 = (double*)calloc(k2,sizeof(double));
//		for (int i = 0; i < k2; i++) {
//			scanf("%d",&e2[i]);
//			scanf("%lf",&c2[i]);
//		}
//		
//		//bubble(e1,c1,k1);
//		//bubble(e2,c2,k2);
//
//		int *e3 = (int*)calloc(k1+k2,sizeof(int));
//		double *c3 = (double*)calloc(k1+k2,sizeof(double));
//		int p1 = 0;
//		int p2 = 0;
//		int p3 = 0;
//		while(p1 < k1 && p2 < k2) {
//			if (e1[p1] > e2[p2]) {
//				e3[p3] = e1[p1];
//				c3[p3] = c1[p1];
//				p1++;
//				p3++;
//			}
//			else if (e1[p1] < e2[p2]) {
//				e3[p3] = e2[p2];
//				c3[p3] = c2[p2];
//				p2++;
//				p3++;
//			}
//			else {
//				e3[p3] = e1[p1];
//				c3[p3] = c1[p1] + c2[p2];
//				if (c3[p3] - 0 < 0.001) {
//					p1++;
//					p2++;	
//				}
//				else {
//					p1++;
//					p2++;
//					p3++;
//				}
//			}
//		}
//		
//		if (p1 == k1) {
//			for (;p2 < k2; p2++) {
//				e3[p3] = e2[p2];
//				c3[p3] = c2[p2];
//				p3++;
//			}
//		}
//		else if (p2 == k2) {
//			for (;p1 < k1; p1++) {
//				e3[p3] = e1[p1];
//				c3[p3] = c1[p1];
//				p3++;
//			}
//		}
//		
//		printf("%d",p3);
//		for (int i = 0; i < p3; i++) {
//			printf(" %d", e3[i]);
//			printf(" %.1f", c3[i]);
//		}
//
//	
//	}
//	
//
