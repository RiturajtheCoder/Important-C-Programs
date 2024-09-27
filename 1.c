//1
//A person wants to go from sealdah to barasat and wants to check if madhyamgram is there or not. write a program to check if he has found his destination or not in C language

//1.1 If the data is user defined
#include <stdio.h>
int main(){
	int route[]={101,102,103,104,105,106,107,108,109,110,111};
	/*Here, Sealdah : 101
	Bidhannagar Road : 102
	Dum Dum Junction : 103
	Dum Dum Cantonment : 104
	Durganagar : 105
	Birati : 106
	Bisharpara Kodaliya : 107
	New Brrackpore : 108
	Madhyamgram : 109
	Hridaypur : 110
	Barasat : 111*/
	int destination=109;//Madhyamgram
	int found=0;
	int i;//If the destination is present in the route or not
	for(i=0;i<11;i++){
		if(route[i]==destination){
			found=1;//The destination is present in the route
			break;
		}
	}
	if(found){
		printf("\n\t Madhyamgram with station code %d is present in the route between Sealdah to Barasat",destination);
	}else{
		printf("\n\t Madhyamgram with station code %d is not present in the route between Sealdah to Barasat",destination);
	}
	return 0;
}

//1.2 If the data is not user defined
#include <stdio.h>
int main(){
	int route[]={101,102,103,104,105,106,107,108,109,110,111};
	//Here, Sealdah : 101
	//Bidhannagar Road : 102
	//Dum Dum Junction : 103
	//Dum Dum Cantonment : 104
	//Durganagar : 105
	//Birati : 106
	//Bisharpara Kodaliya : 107
	//New Brrackpore : 108
	//Madhyamgram : 109
	//Hridaypur : 110
	//Barasat : 111
	int destination;
	printf("\n\t Enter the station code to find : ");
	scanf("%d",&destination);
	int found=0;//If the destination is present in the route or not
	int i;
	for(i=0;i<11;i++){
		if(route[i]==destination){
			found=1;//The destination is present in the route
			break;
		}
	}
	if(found){
		printf("\n\t Station code %d is present in the route between Sealdah(101) to Barasat(111)",destination);
	}else{
		printf("\n\t Station code %d is not present in the route between Sealdah(101) to Barasat(111)",destination);
	}
	return 0;
}

//1.3 Using a function
#include <stdio.h>
int findStation(int route[], int n, int destination){
	int i;
    for(i = 0; i < n; i++){
        if(route[i] == destination){
            return 1;//Station found
        }
    }
    return 0;//Station not found
}
int main(){
    int route[]={101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111};
    //Sealdah : 101
    //Bidhannagar Road : 102
    //Dum Dum Junction : 103
    //Dum Dum Cantonment : 104
    //Durganagar : 105
    //Birati : 106
    //Bisharpara Kodaliya : 107
    //New Barrackpore : 108
    //Madhyamgram : 109
    //Hridaypur : 110
    //Barasat : 111
    int destination;
    printf("\n\tEnter the station code to find : ");
    scanf("%d", &destination);
    //Calling the function to find if the station is present in the route
    int found=findStation(route, 11, destination);
    if(found){
        printf("\n\tStation code %d is present in the route between Sealdah(101) to Barasat(111)", destination);
    }else{
        printf("\n\tStation code %d is not present in the route between Sealdah(101) to Barasat(111)", destination);
    }
    return 0;
}*/
