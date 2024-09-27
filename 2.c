//2
//Prabhat sir has come to class and wants to know if debasmita is present in the class or not. Write a program in C to implement this 

//2.1
//If the input is not user defined
#include <stdio.h>
int main(){
	int class[61]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61};
	int student_roll=27;
	int found=0;
	int i;
	for(i=1;i<=61;i++){
		if(class[i]==student_roll){
			found=1;
			break;
		}
	}
	if(found){
		printf("\n\t Student will roll %d(Debasmita) is present in the class ",student_roll);
	}else{
		printf("\n\t Student with roll %d(Debasmita) is not present in the class",student_roll);
	}
	return 0;
}*/

//2.2
//If the input is user defined
#include <stdio.h>
int main(){
	int class[61]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61};
	int found=0;
	int student_roll,i;
	for(i=1;i<=61;i++){
		if(class[i]==student_roll){
			found=1;
			break;
		}
	}
	printf("\n\t Enter the roll number to check : ");
	scanf("%d",&student_roll);
	if(found){
		printf("\n\t Student with roll number %d is present in the class ",student_roll);
	}else{
		printf("\n\t Student with roll number %d is not present in the class ",student_roll);
	}
	return 0;
}

//2.3
//Using a function for the code
#include <stdio.h>
int find_roll(int class[],int n,int student_roll){
	int i;
	for(i=1;i<=n;i++){
		if(class[i]==student_roll){
			return 1;
			break;
		}
	}
}
int main(){
	int class[61]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61};
	int student_roll;
	printf("\n\t Enter the roll to find : ");
	scanf("%d",&student_roll);
	int found=find_roll(class,61,student_roll);
	if(found){
		printf("\n\t Student with roll %d is present in the class ",student_roll);
	}
	else{
		printf("\n\t Studne twith roll %d is not present in the class ",student_roll);
	}
	return 0;
}
