#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

vector<int> radixTrans(vector<int> num, int inRadix, int outRadix) {
	int real = 0;
	for (int i = 0; i < num.size(); i++) {
		real += (int)num[i] * pow((float)inRadix,i);
	}

	vector<int> result;
	while(real>0){
		result.push_back(real%outRadix);
		real = real / outRadix;
	}

	return result;
}

int radix2Dec(vector<int> num, int inRadix) {
	int real = 0;
	for (int i = 0; i < num.size(); i++) {
		real += (int)num[i] * pow((float)inRadix,i);
	}
	
	return real;
}

int main() {

	string n1, n2;
	int tag, radix;
	cin >> n1;
	cin >> n2;
	scanf("%d %d",&tag, &radix);
	if (tag==1) {
		vector<int> num1;
		int size = n1.size();
		for (int i = size-1; i >= 0; i--) {
			printf("n1[%d] is: %c\n", i, n1[i]);
			
			if (n1[i] >= '0' && n1[i] <= '9')
				num1.push_back(n1[i]-'0');
			else
				num1.push_back(n1[i]-'a'+10);
		}
		printf("num1 is:\n");
		for (int i = 0; i < num1.size(); i++) printf("%d ",num1[i]); putchar('\n');

		int numDec = radix2Dec(num1,radix);
		printf("numDec is: %d\n",numDec);

		vector<int> num2;
		size = n2.size();
		for (int i = size-1; i >= 0; i--) {
			printf("n2[%d] is: %c\n", i, n2[i]);

			if (n2[i] >= '0' && n2[i] <= '9')
				num2.push_back(n2[i]-'0');
			else
				num2.push_back(n2[i]-'a'+10 );
		}
		vector<int>::iterator iter = max_element(num2.begin(),num2.end());
		int radMin = (int)*iter + 1;
		if (radMin == 1) radMin = 2;

		printf("radMin is: %d\n",radMin);

		bool noSuit = true;
		int realRadix;
		for(int i = radMin; i <= 36; i++) {
			if (radix2Dec(num2,i) == numDec) {
				noSuit = false;
				realRadix = i;
				break;
			}
		}
		if (noSuit) printf("Impossible");
		else {
			printf("%d",realRadix);
		}

	}

	else{
		vector<int> num1;
		int size = n2.size();
		for (int i = size-1; i >= 0; i--) {
			//printf("n1[i] is: %c\n", n1[i]);
			if (n2[i] >= '0' && n2[i] <= '9')
				num1.push_back(n2[i]-'0');
			else
				num1.push_back(n2[i]-'a'+10);
		}
		//printf("num1 is:\n");
		//for (int i = 0; i < num1.size(); i++) printf("%d ",num1[i]); putchar('\n');

		int numDec = radix2Dec(num1,radix);


		vector<int> num2;
		size = n1.size();
		for (int i = size-1; i >= 0; i--) {
			if (n1[i] >= '0' && n1[i] <= '9')
				num2.push_back(n1[i]-'0');
			else
				num2.push_back(n1[i]-'a'+10);
		}
		vector<int>::iterator iter = max_element(num2.begin(),num2.end());
		int radMin = (int)*iter + 1;

		bool noSuit = true;
		int realRadix;
		for(int i = radMin; i <= 36; i++) {
			if (radix2Dec(num2,i) == numDec) {
				noSuit = false;
				realRadix = i;
				break;
			}
		}
		if (noSuit) printf("Impossible");
		else {
			printf("%d",realRadix);
		}
	}


	//vector<int> test, result;
	//test.push_back(0);
	//test.push_back(1);
	//test.push_back(1);

	//result = radixTrans(test,2,10);

	//for (int i = 0; i < result.size(); i++) printf("%d ",result[i]);


}
