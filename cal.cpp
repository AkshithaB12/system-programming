#include<iostream>
using namespace std;
class cal {
	private:
		int x,y;
	public: 
		cal(){
			x = 0;
			y = 0;
		}
		int add(int,int);
		int sub(int,int);
};
int cal::add(int x,int y) {
	return x+y;
}
int cal::sub(int x,int y) {
	return x-y;
}
int main(){
	cal obj;
	cout<<"add is "<<obj.add(4,6)<<endl;
	cout<<"sub is "<<obj.sub(6,3)<<endl;
	return 0;
}
