//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//
//	int k1, k2;
//	vector <int> expo1;
//	vector <int> expo2;
//	vector <double> coef1;
//	vector <double> coef2;
//	
//	scanf("%d", &k1);
//	int e1;
//	double c1;
//	for (int i = 0; i < k1; i++) {
//		scanf("%d %lf", &e1, &c1);
//		expo1.push_back(e1);
//		coef1.push_back(c1);
//	}
//
//	scanf("%d", &k2);
//	int e2;
//	double c2;
//	for (int i = 0; i < k2; i++) {
//		scanf("%d %lf", &e2, &c2);
//		expo2.push_back(e2);
//		coef2.push_back(c2);
//	}
//	
//
//	//printf("Poly1 is: \n");
//	//printf("%d",expo1.size());
//	//for (int i = 0; i < expo1.size(); i++) {
//	//	printf(" %d %.1f",expo1[i],coef1[i]);
//	//}
//	//putchar('\n');
//	//printf("Poly2 is: \n");
//	//printf("%d",expo2.size());
//	//for (int i = 0; i < expo2.size(); i++) {
//	//	printf(" %d %.1f",expo2[i],coef2[i]);
//	//}
//	//putchar('\n');
//
//
//	vector <int> expo;
//	vector <double> coef;
//	expo.push_back(expo1[0]+expo2[0]);
//	coef.push_back(coef1[0]*coef2[0]);
//	int e;
//	double c;
//	for (int i = 0; i < k1; i++) {
//		for (int j = 0; j < k2; j++) {
//			e = expo1[i]+expo2[j];
//			c = coef1[i]*coef2[j];
//
//			//printf("i is: %d, j is: %d\n",i,j);
//			//printf("e is: %d, c is :%.1f\n",e,c);
//
//
//			int k;
//			int size = expo.size();
//			for(k = 0; k < size; k++) {
//				if (e == expo[k]) {
//					coef[k] += c;
//					//printf("Equals!\n");
//					//printf("k is: %d\t e is:%d, c is :%.1f\n",k,e,c);
//					break;
//				}
//				if (e > expo[k]) {
//					vector <int>::iterator e_iter = expo.begin();
//					vector <double>::iterator c_iter = coef.begin();
//					expo.insert(e_iter+i,e);
//					coef.insert(c_iter+i,c);
//					//printf("Insert!\n");
//					//printf("k is: %d\t e is:%d, c is :%.1f\n",k,e,c);
//					break;
//				}
//			}
//			if (k == size) {
//				//printf("Push backs!\n");
//				//printf("k is: %d\t e is:%d, c is :%.1f\n",k,e,c);
//				expo.push_back(e);
//				coef.push_back(c);
//			}
//
//		}
//	}
//
//
//	//expo.push_back(1);
//	//expo.push_back(4);
//	//expo.push_back(2);
//	
//	//vector <int>::iterator iter;
//	//iter = find(expo.begin(),expo.end(),4);
//	//cout << *iter << endl;
//	//cout << distance(expo.begin(),iter) << endl;
//
//
//	coef[0] = coef[0]/2;
//
//	int size = expo.size();
//	for (int i = 0; i < expo.size(); i++) {
//		if (coef[i]==0) size--;
//	}
//
//	printf("%d",size);
//	for (int i = 0; i < expo.size(); i++) {
//		if (coef[i]!=0) printf(" %d %.1f",expo[i],coef[i]);
//	}
//
//
//
//
//}