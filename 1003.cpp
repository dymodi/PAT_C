#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

using namespace std;


// 1003. Emergency (25)
// Start: 2014/10/26 16:22
int minMoves, maxTeams, targetCity, optiPathNum;
int *cityPathNum, *cityMap, *cityPathDest;
int N;
int *cityTeam;

class Node {
public:
	Node(){};
	Node *preNode;
	int currMoves;
	int currCity;
	int totalTeams;
};

bool hasVisited (Node *node, int city) {
	Node *n = node;
	if (n->preNode == NULL) return false;
	else {
		while (n != NULL) {
			if (n->currCity == city) return true;
			n = n->preNode;
		}
		return false;
	}
}

void search (Node *node) {
	if (node->currCity == targetCity) {
		if (node->currMoves < minMoves) {
			minMoves = node->currMoves;
			maxTeams = node->totalTeams;
			optiPathNum = 1;
		}
		else if (node->currMoves == minMoves) {
			if (node->totalTeams > maxTeams) maxTeams = node->totalTeams;
			optiPathNum++;
		}
		else {
			delete node;
			return;
		}
	}
	else {
		if (node->currMoves > minMoves) {
			delete node;
			return;
		}
		else {
			for (int i = 0; i < cityPathNum[node->currCity]; i++) {
				if (!hasVisited(node,cityPathDest[node->currCity*N + i])) {
					Node *nextSearch = new Node;
					nextSearch->currCity = cityPathDest[node->currCity*N + i];
					nextSearch->currMoves = node->currMoves + cityMap[node->currCity*N + nextSearch->currCity];
					nextSearch->preNode = node;
					nextSearch->totalTeams = node->totalTeams + cityTeam[nextSearch->currCity];
					//printf("Current city: %d\t Next city:%d\n", node->currCity, nextSearch->currCity);
					//printf("minMoves: %d\t maxTeams: %d\n", minMoves, maxTeams);
					search(nextSearch);
				}
			}
		}
	}

}


int main() {

	int M, c1, c2;
	scanf("%d %d %d %d",&N, &M, &c1, &c2);

	cityTeam = (int*)calloc(N,sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &cityTeam[i]);
	}

	int *pathFrom = (int*)calloc(M,sizeof(int));
	int *pathTo = (int*)calloc(M,sizeof(int));
	int *pathLength = (int*)calloc(M,sizeof(int));
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &pathFrom[i], &pathTo[i], &pathLength[i]);
	}


	cityPathNum = (int*)calloc(N,sizeof(int));
	cityPathDest = (int*)calloc(N*N,sizeof(int));
	cityMap = (int*)calloc(N*N,sizeof(int));
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cityMap[i*N+j] = INT_MAX;
		}
	}

	for(int i = 0; i < M; i++) {

		cityPathDest[pathFrom[i]*N+cityPathNum[pathFrom[i]]] = pathTo[i];
		cityPathDest[pathTo[i]*N+cityPathNum[pathTo[i]]] = pathFrom[i];
		cityPathNum[pathFrom[i]]++;
		cityPathNum[pathTo[i]]++;

		cityMap[pathFrom[i]*N+pathTo[i]] = pathLength[i];
		cityMap[pathTo[i]*N+pathFrom[i]] = pathLength[i];
	}


	//for(int i = 0; i < N; i++) {
	//	for(int j = 0; j < N; j++) {
	//		printf("%d\t",cityMap[i*N+j]);
	//	}
	//	putchar('\n');
	//}
	//putchar('\n');
	//for(int i = 0; i < N; i++) {
	//	for(int j = 0; j < N; j++) {
	//		printf("%d\t",cityPathDest[i*N+j]);
	//	}
	//	putchar('\n');
	//}

	Node *ori = new Node();
	ori->currCity = c1;
	ori->preNode = NULL;
	ori->currMoves = 0;
	ori->totalTeams = cityTeam[ori->currCity];

	minMoves = INT_MAX;
	maxTeams = ori->totalTeams;
	targetCity = c2;
	optiPathNum = 0;

	search(ori);

	printf("%d %d", optiPathNum, maxTeams);

	return 0;
}
