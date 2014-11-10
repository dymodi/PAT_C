//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//vector <int> maxSumSub(int *num, int left, int right) {
//
//	//printf("Recursion\t left:%d, right:%d\n",left,right);
//	if (left == right) {
//		vector <int> result;
//		result.push_back(num[left]);
//		result.push_back(num[left]);
//		result.push_back(num[right]);
//		//printf("Return!\n");
//		return result;
//	}
//
//	int middle = (left + right)/2;
//	vector <int> leftSum = maxSumSub(num, left, middle);
//	vector <int> rightSum = maxSumSub(num, middle+1, right);
//
//	int leftBoundStart = middle;
//	int rightBoundEnd = middle+1;
//
//	//printf("Here\t left:%d, middle: %d, right:%d\n",left, middle, right);
//	int leftBoundMax = num[middle];
//	int leftBoundSum = 0;
//	for (int i = middle; i >= left; i--) {
//		leftBoundSum += num[i];
//		if (leftBoundSum > leftBoundMax) {
//			leftBoundMax = leftBoundSum;
//			leftBoundStart = i;
//		}
//	}
//	//printf("leftBoundMax:%d \n",leftBoundMax);
//
//
//	int rightBoundMax = num[middle+1]; 
//	int rightBoundSum = 0;
//	for (int i = middle+1; i <= right; i++) {
//		rightBoundSum += num[i];
//		if (rightBoundSum > rightBoundMax) {
//			rightBoundMax = rightBoundSum;
//			rightBoundEnd = i;
//		}
//	}
//	//printf("rightBoundMax: %d\n",rightBoundMax);
//
//
//	//printf("leftSum:%d\t",leftSum[0]);
//	//printf("leftStart:%d\t",leftSum[1]);
//	//printf("leftEnd:%d\n",leftSum[2]);
//
//	//printf("rightSum:%d\t",rightSum[0]);
//	//printf("rightStart:%d\t",rightSum[1]);
//	//printf("rightEnd:%d\n",rightSum[2]);
//
//	//printf("leftBoundMax + rightBoundMax:%d\t",leftBoundMax + rightBoundMax);
//	//printf("leftBoundStart:%d\t",leftBoundStart);
//	//printf("rightBoundEnd:%d\n\n",rightBoundEnd);
//
//	if (leftSum[0] >= rightSum[0]) {
//		if (leftSum[0] >= leftBoundMax + rightBoundMax) {
//			return leftSum;
//		}
//		else {
//			vector <int> cross;
//			cross.push_back(leftBoundMax + rightBoundMax);
//			cross.push_back(num[leftBoundStart]);
//			cross.push_back(num[rightBoundEnd]);
//			return cross;
//		}
//	}
//	else {
//		if (rightSum[0] > leftBoundMax + rightBoundMax) {
//			return rightSum;
//		}
//		else {
//			vector <int> cross;
//			cross.push_back(leftBoundMax + rightBoundMax);
//			cross.push_back(num[leftBoundStart]);
//			cross.push_back(num[rightBoundEnd]);
//			return cross;
//		}
//	}
//
//}
//
//
//int main() {
//
//	int K;
//
//	scanf("%d", &K);
//
//	int *num = (int*)calloc(K,sizeof(int));
//
//	bool allNeg = true;
//	for (int i = 0; i < K; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] >= 0) allNeg = false;
//	}
//
//	if (allNeg) {
//		printf("0 %d %d", num[0], num[K-1]);
//	}
//
//	else {
//
//		vector <int> result;
//		result = maxSumSub(num,0,K-1);
//
//		printf("%d %d %d",result[0], result[1], result[2]);
//	}
//
//}