//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class record{
//
//public:
//	record(string id, int inHour, int inMinute, int inSecond, int outHour, int outMinute, int outSecond) {
//		this->id = id;
//		this->inHour = inHour;
//		this->inMinute = inMinute;
//		this->inSecond = inSecond;
//		this->outHour = outHour;
//		this->outMinute = outMinute;
//		this->outSecond = outSecond;
//	};
//	string id;
//	int inHour;
//	int inMinute;
//	int inSecond;
//	int outHour;
//	int outMinute;
//	int outSecond;
//
//};
//
//int main() {
//
//	vector <record> allRecord;
//
//	int M;
//	scanf("%d", &M);
//	
//	string id;
//	int inHour;int inMinute;int inSecond;
//	int outHour;int outMinute;int outSecond;
//
//	for (int i = 0; i < M; i++) {
//		cin >> id;
//		//scanf("%s",&id);
//		//printf("Step 1 Done\n");
//		scanf("%d:%d:%d", &inHour, &inMinute, &inSecond);
//		//printf("Step 2 Done\n");
//		scanf("%d:%d:%d", &outHour, &outMinute, &outSecond);
//		//printf("Step 3 Done\n");
//		record *r = new record(id, inHour, inMinute, inSecond, outHour, outMinute, outSecond);
//		allRecord.push_back(*r);
//		delete r;
//	}
//
//
//	int earlyIndex = 0;
//	int lateIndex = 0;
//	for (int i = 1; i < allRecord.size(); i++) {
//		if (allRecord[i].inHour < allRecord[earlyIndex].inHour) {
//			earlyIndex = i;
//		}
//		else if (allRecord[i].inHour == allRecord[earlyIndex].inHour) {
//			if (allRecord[i].inMinute < allRecord[earlyIndex].inMinute) {
//				earlyIndex = i;
//			}
//			else if (allRecord[i].inMinute == allRecord[earlyIndex].inMinute) {
//				if (allRecord[i].inSecond < allRecord[earlyIndex].inSecond) {
//					earlyIndex = i;
//				}
//			}
//		}
//
//		if (allRecord[i].outHour > allRecord[lateIndex].outHour) {
//			lateIndex = i;
//		}
//		else if (allRecord[i].outHour == allRecord[lateIndex].outHour) {
//			if (allRecord[i].outMinute > allRecord[lateIndex].outMinute) {
//				lateIndex = i;
//			}
//			else if (allRecord[i].outMinute == allRecord[lateIndex].outMinute) {
//				if (allRecord[i].outSecond > allRecord[lateIndex].outSecond) {
//					lateIndex = i;
//				}
//			}
//		}
//	
//	}
//
//
//	cout << allRecord[earlyIndex].id << " " << allRecord[lateIndex].id << endl;
//
//	return 0;
//}
//
