#include <iostream>
using namespace std;

int add(int a, int b){
	
	int r;
	r = a + b;
	//cout << r << endl;
	return (r);
}
int sub(int a, int b){
	
	int r, j;
	r = add(a, b);
	j = a - b;
	cout << "added: " << r << endl;
	cout << "subtracted: " << j << endl;
	return (j);
}
int mult(int a, int b){
	int x, total;
	x = sub(a, b);
	total = x * b;
	cout << "from subFunc: " << x << endl;
	cout << "total: " << total << endl;
	return (total);

}


int main(){

	int x = 3;
	int y = 2;
	
	//sub(x, y);
	mult(x,y);

return 0;

}	
