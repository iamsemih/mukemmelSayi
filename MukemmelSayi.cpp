#include <iostream>
using namespace std;
/*	SEMIH SAHIN - 1 ÝLE 1000 ARASI MUKEMMEL SAYILAR
	MUKEMMEL SAYI: Kendisi haric butun pozitif bolenlerinin toplami kendisine esit olan sayilardir	*/
	
bool mukemmelMi(unsigned int syc){
	unsigned int temp=syc-1, toplam=0;
	for(temp; temp>=1; temp--){
		if(syc%temp==0){
			toplam+=temp;
		}
	}
	if(toplam==syc){
		return true;
	}
	return false;
}

int main(){
	unsigned int sayac=1, ilkGiris=0;
	cout << "1 ile 1000 arasi mukemmel sayilar:\n";
	do{
		if(mukemmelMi(sayac)==true){
			ilkGiris++;
			if (ilkGiris==1){
				cout << sayac;
				goto A10;
			}
			cout << ", " << sayac;
			A10:;
		}
		sayac++;
	}while(sayac<=1000);
	return 0;
}
