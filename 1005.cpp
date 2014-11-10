//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <stack>
//#include <stdio.h>
//
//using namespace std;
//
//string eng(int id) {
//	if (id == 0) return "zero";
//	if (id == 1) return "one";
//	if (id == 2) return "two";
//	if (id == 3) return "three";
//	if (id == 4) return "four";
//	if (id == 5) return "five";
//	if (id == 6) return "six";
//	if (id == 7) return "seven";
//	if (id == 8) return "eight";
//	if (id == 9) return "nine";
//}
//
//int main() {
//
//	vector <int> num;
//	char c = getchar();
//	while(c != '\n') {
//		num.push_back(c-'0');
//		c = getchar();
//	}
//
//	int sum = 0;
//	for (int i = 0; i < num.size(); i++)
//		sum += num[i];
//
//	stack <string> out;
//
//	if (sum == 0) out.push(eng(0));
//
//	while(sum > 0) {
//		out.push(eng(sum%10));
//		sum = sum / 10;
//	}
//
//	cout << out.top();out.pop();
//	while(!out.empty()) {
//		printf(" ");
//		cout << out.top();out.pop();
//	}
//
//
//	////for (int i = 0; i < num.size(); i++)
//	////	printf("%d - ",num[i]);
//
//	//return 0;
//}