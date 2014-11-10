//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//int main() {
//
//	int N;
//	scanf("%d",&N);
//
//	vector <int> request;
//	int floor;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &floor);
//		request.push_back(floor);
//	}
//
//	int time = 0;
//	time = 5 * N;
//
//	time += request[0] * 6;
//	for (int i = 1; i < N; i++) {
//		if (request[i] > request[i-1]) 
//			time += (request[i] - request[i-1]) * 6;
//		if (request[i] < request[i-1]) 
//			time += (request[i-1] - request[i]) * 4;
//	}
//
//	printf("%d",time);
//	return 0;
//}