#include <iostream>
using namespace std;
main (){
	// i++, i+=1, i=i+1
	int contar=0;
	for (int i=1;i<=10;i+=1){ // 1 hasta 10
		cout<<i<<endl;
		contar++;
	
	}
	cout<<"Ciclos: "<<contar<<endl;	
	system("pause");
}