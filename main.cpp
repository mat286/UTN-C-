/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

using punteroFun = bool (*)(int a, int b);

bool ordenMayorMenor(int a, int b)  { 
    return a < b; 
    
}

bool ordenMenorMayor(int a, int b) { 
    return a > b; 
    
}
    
/*void ordenMayorMenor1( int* arr) {
	//cout<< *arr;
	//int arrA[15]=arr
	int aux=0;
	int i=0;
		while(i!=14){
		    if(arr[i] < arr[i+1]) {
				aux=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=aux;
				i=0;
			}else{
			    i++;
			}
			
		}
}

void ordenMenorMayor1( int* arr) {
	//cout<< *arr;
	//int arrA[15]=arr
	int aux=0;
	int i=0;
		while(i!=14){
		    if(arr[i] > arr[i+1]) {
				aux=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=aux;
				i=0;
			}else{
			    i++;
			}
			
		}
}
*/

void ordenar(int * arr, punteroFun comparar){
    int aux=0;
	int i=0;
		while(i!=14){
		    if( comparar(arr[i], arr[i+1]) ) {
				aux=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=aux;
				i=0;
			}else{
			    i++;
			}
			
		}
}

int main()
{
	int numero=0;
	int arr[15]= {5,8,3,10,4,7,6,1,7,5,9,7,4,1,3};

	cout<<"Como queres ordenarlo\n";
	cout<<"- (0) se mayor a menor\n- (1) de menor a mayor\n";
	cin >>numero;
	cout << "\n";
	punteroFun comparar;
	
	if(numero==1){
	    comparar = ordenMayorMenor;
	}else if(numero==0){
	    comparar = ordenMenorMayor;
	}
	cout<<comparar;
	
	if(numero==0 || numero ==1){
	    ordenar(arr, comparar);
	}
	
	
	for(int i=0; i<15; i++) {
		cout<< arr[i]<< " ";
	}
	return 0;
}







