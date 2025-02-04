#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

______________ randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.______________(rand()%10);
    ______________;
}

______________ showVector(______________){
	cout << "[";
	for(unsigned int i = 0; _____________________; i++){
		cout << _________________;
		if(_________________) cout << "]";
		else cout << " ";
	}
}

_________________ dotProduct(_____________________________){
	int sum = 0;
	for(unsigned int i = 0; _____________________; i++) sum += _________________;	
	_________________;
}

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}
