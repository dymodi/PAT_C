//#include <iostream>
//#include <iomanip>
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <algorithm>
//using namespace std;
//
//class Stack {
//public:
//	Stack(int n) {
//		length = n;
//		s = (int*)calloc(length,sizeof(int));
//		size = 0;
//	}
//	int length;
//	int *s;
//	int size;
//
//	int pop() {
//		if (size == 0) return -1;
//		else {
//			size--;
//			return s[size];
//		}
//	}
//
//	int push(int item) {
//		if (size==length) return -1;
//		else {
//			s[size] = item;
//			size++;
//		}
//	}
//
//};
//
//
//// 1004. Counting Leaves (30)
//// Start: 2014/10/27 20:00
//
//class Node {
//public:
//	Node(){
//		hasChild = false;
//		nextSibling = NULL;
//		oldSon = NULL;
//	};
//	bool hasChild;
//	int id;
//	int level;
//	Node *nextSibling;
//	Node *oldSon;
//};
//
//Node *root;
//int leafNum;
//int *leafInfo;
//int fullLevel;
//
//
//Node *getNode(int id, Node *node) {
//	//printf("Search id %d at id %d\n", id, root->id);
//	//printf("node->nextSibling is", id, root->id);
//	//printf("is node->nextSibling NULL£¿%d",node->nextSibling != NULL);
//	//printf("is node->oldSon NULL£¿%d",node->oldSon != NULL);
//	Node *tmp = node;
//	if (tmp->id == id) return tmp;
//	if (tmp->nextSibling != NULL) return getNode(id, tmp->nextSibling);
//	if (tmp->oldSon != NULL) return getNode(id, tmp->oldSon);
//}
//
//void printLevel(Node *node) {
//	Node *tmp = node;
//	printf("id is : %d\t level is : %d\n",tmp->id, tmp->level);
//	if (tmp->nextSibling != NULL)  printLevel(tmp->nextSibling);
//	if (tmp->oldSon != NULL) printLevel(tmp->oldSon);
//}
//
//int getLevel(int id, Node *node) {
//	Stack s = new Stack();
//	Node *tmp = node;
//	printf("Current id:%d\n", tmp->id);
//	if (tmp->id == id) return tmp->level;
//	if (tmp->nextSibling != NULL) return getLevel(id, tmp->nextSibling);
//	if (tmp->oldSon != NULL) return getLevel(id, tmp->oldSon);
//}
//
//void leafCount(Node *node, int fullLevel) {
//	if (!node->hasChild) leafInfo[getLevel(node->id, root)]++;
//	if (node->nextSibling != NULL) leafCount(node->nextSibling, fullLevel);
//	if (node->oldSon != NULL) leafCount(node->oldSon, fullLevel);
//}
//
//int main() {
//
//	int N, M;
//	scanf("%d %d", &N, &M);
//	if (M == 0) {
//		printf("1");
//		return 0;
//	}
//
//	root = new Node();
//	root->id = 1;
//	root->hasChild = true;
//	root->level = 0;
//
//	int nonLeaf, childNum;
//	scanf("%d %d", &nonLeaf, &childNum);
//	Node *elder = new Node();
//	scanf("%d",&elder->id);
//	root->oldSon = elder;
//	elder->level = 1;
//
//	printf("first elder id: %d\n", elder->id);
//
//	for (int i = 1; i < childNum; i++) {
//		Node *newNode = new Node();
//		scanf("%d",&newNode->id);
//		newNode->level = 1;
//		elder->nextSibling = newNode;
//		printf("nextSibling id: %d\n", newNode->id);
//		elder = newNode;
//	}
//
//	//printf("root->oldSon->id: %d\n", root->oldSon->id);
//	//printf("root->oldSon->level: %d\n", root->oldSon->level);
//	//printf("root->oldSon->nextSibling->id: %d\n", root->oldSon->nextSibling->id);
//	//printf("root->oldSon->nextSibling->level: %d\n", root->oldSon->nextSibling->level);
//
//	printLevel(root);
//	fullLevel = 0;
//	for (int i = 1; i < M; i++) {
//		scanf("%d %d", &nonLeaf, &childNum);
//		Node *newRoot = getNode(nonLeaf, root);
//		
//		newRoot->hasChild = true;
//		printf("I wanna know the level of node: %d\t", nonLeaf);
//		int fatherLevel = getLevel(nonLeaf,root);
//		printf("What I got is: %d\n", fatherLevel);
//
//		printf("newRoot id: %d\t", newRoot->id);
//		printf("newRoot level: %d\n", newRoot->level);
//
//		Node *elder = new Node();
//		scanf("%d",&elder->id);
//		newRoot->oldSon = elder;
//		elder->level = fatherLevel + 1;
//
//		printf("first elder id: %d\n", elder->id);
//
//		printLevel(root);
//		for (int i = 1; i < childNum; i++) {
//			Node *newNode = new Node();
//			scanf("%d",&newNode->id);
//			elder->nextSibling = newNode;
//			newNode->level = fatherLevel + 1;
//			printf("nextSibling id: %d\n", newNode->id);
//			elder = newNode;
//		}
//
//		printLevel(root);
//
//		printf("fatherLevel is: %d\n",fatherLevel);
//		if (fatherLevel+1 > fullLevel) fullLevel = fatherLevel+1;
//		printf("fullLevel is: %d\n",fullLevel);
//	}
//
//	leafNum = 0;
//	leafInfo = (int*)calloc(fullLevel+1, sizeof(int));
//
//	leafCount(root, fullLevel);
//
//	printf("fullLevel is: %d\n",fullLevel);
//
//	printf("%d", leafInfo[0]);
//	for (int i = 1; i < fullLevel; i++) printf(" %d", leafInfo[i]);
//
//	return 0;
//}