#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void show (T d[],int N,int j){
	for (int i=0;i<N;i++){
		if(j==i){
			cout << "["<< d[i] << "] ";
		}else {
			cout << d[i] << " ";
		}
	} 
}

template <typename T>
void insertionSort(T d[],int N){

//Write your code here.
	int end;
	for(int i=1;i<N;i++){
		show (d,N,i);
		cout << "=> "; 
		for( end = i; end >0;end--){
			if(d[end]>d[end-1]) swap(d,end,end-1);	
			else break;	
		}
		show (d,N,end);
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}