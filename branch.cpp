//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	//int V;
//	//cin >> V;
//	//if(V>60)
//	//	cout << "Speed: " << V <<" - Speeding" << endl;
//	//else
//	//	cout << "Speed: " << V <<" - OK" << endl;
//	
//	double x1,y1,x2,y2,x3,y3; 
//	double S,L;
//	double l1,l2,l3;
//
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//
//	S=fabs(x1*y2+x2*y3+x3*y1-x1*y3-x2*y1-x3*y2)/2.0L;
//
//	//cout << S << endl;
//
//	l1 = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
//	l2 = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
//	l3 = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
//	L = l1+l2+l3;
//
//	
//	//if((S>0)&&(fabs(x1)<=100)&&(fabs(y1)<=100)&&(fabs(x2)<=100)&&(fabs(y2)<=100)&&(fabs(x3)<=100)&&(fabs(y3)<=100))
//	if(S>0)
//	{
//	 cout.precision(2);
//	 cout.setf(ios::fixed);
//	 cout << "L = " << L <<", " << "A = " << S << endl;
//	}
//	else
//		cout <<"Impossible" << endl;
//	return 0;
//}