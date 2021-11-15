#include <iostream> //cout için
using namespace std;
class Kuyruk {
public:
	Kuyruk() {
		sayac = 0;
		bas = son = NULL;
	}
	void push(int v) {
		Kuyruk* geciciPtr;
		geciciPtr->sonraki = NULL;
		geciciPtr->veri = v;
		if (isEmpty())
			bas = son = geciciPtr;
		else
		{
			son->sonraki = geciciPtr;
			son = geciciPtr;
		}
		sayac++;
	}
	int front() {
		return bas->veri;
	}
	int back() {
		return son->veri;
	}
	void pop() {
		bas = bas->sonraki;
	}
	bool isEmpty() {
		return sayac == 0;
	}
private:
	int veri;
	int sayac;
	Kuyruk* bas;
	Kuyruk* son;
	Kuyruk* sonraki;
};
int main() {
	Kuyruk* Kuyruk;
	Kuyruk->push(5);
	Kuyruk->push(6);
	Kuyruk->push(7);
	cout<<Kuyruk->front()<<endl;
	cout<<Kuyruk->back()<<endl;
	Kuyruk->pop();
	Kuyruk->pop();
	cout<<Kuyruk->back();






}
