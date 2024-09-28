//Program to copy, compare, concatenate two strings

//10.1
//Without user defined input
#include <stdio.h>
int main() {
    char str1[]="Hello";
    char str2[]="World";
    char copy[100],concat[200];
	int i=0,j=0;
	//Copy of two strings
    while (str1[i]!='\0') {
        copy[i]=str1[i];
        i++;
    }
    copy[i]='\0';
    printf("\n\t Copy of str1 : %s", copy);
    while(str2[j]!='\0'){
    	copy[j]=str2[j];
    	j++;
	}
	copy[j]='\0';
	printf("\n\t Copy of str2 : %s ",copy);
	//Comparison of two strings
    while (str1[i]!='\0' && str2[j]!='\0'){
        if (str1[i]!=str2[j]){
		break;
        i++;j++;
    	}
    }
    if(str1[i]=='\0' && str2[j]=='\0'){
        printf("\n\t Strings are equal");
    }
    else{
        printf("\n\t Strings are not equal");
	}
	//Concatenation of two strings
    i=0;
    while(str1[i]!='\0') {
        concat[i]=str1[i];
        i++;
    }
    j=0;
    while (str2[j]!='\0') {
        concat[i]=str2[j];
        i++;j++;
    }
    concat[i]='\0';
    printf("\n\t Concatenation of str1 and str2 : %s\n", concat);
    return 0;
}

//10.2
//With user defined input
#include <stdio.h>
int main(){
	while(1){
		char str1[1000],str2[1000],copy[1000],concatenate[2000];
		int i=0,j=0;
		printf("\n\t Enter the first string : ");
		scanf("%s",&str1);
		printf("\n\t Enter the second string : ");
		scanf("%s",&str2);
		//Copy of two strings
		while(str1[i]!='\0'){
			copy[i]=str1[i];
			i++;
		}
		copy[i]='\0';
		printf("\n\t");
		printf(" Copy of str1 : %s ",copy);
		while(str2[j]!='\0'){
			copy[j]=str2[j];
			j++;
		}
		copy[j]='\0';
		printf("\n\t");
		printf(" Copy of str2 : %s ",copy);
		//Comparison of two strings
		i=0;
		while(str1[i]!='\0' && str2[i]!='\0'){
			if(str1[i]!=str2[i]){
				break;
				i++;
			}
		}
		if(str1[i]=='\0' && str2[i]=='\0'){
			printf("\n\t");
			printf(" The two strings %s and %s are equal ",str1,str2);
		}else{
			printf("\n\t");
			printf(" The two strings %s and %s are not equal ",str1,str2);
		}
		//Concatenation of two strings
		i=0;
		while(str1[i]!='\0'){
			concatenate[i]=str1[i];
			i++;
		}
		j=0;
		while(str2[j]!='\0'){
			concatenate[i]=str2[j];
			i++;
			j++;
		}
		concatenate[i]='\0';
		printf("\n\t Concatenation of two string %s and %s is %s ",str1,str2,concatenate);
	}
		return 0;
}

//10.3
//Using a function
#include <stdio.h>
void copyString(char str1[],char copy[]) {
    int i=0;
    while (str1[i]!='\0') {
        copy[i]=str1[i];
        i++;
    }
    copy[i]='\0';
}
int compareStrings(char str1[],char str2[]) {
    int i=0;
    while (str1[i]!='\0' && str2[i]!='\0') {
        if(str1[i]!=str2[i]) {
		return 0;
	}
        i++;
    }
    return(str1[i]=='\0' && str2[i]=='\0');
}
void concatenateStrings(char str1[], char str2[], char result[]) {
    int i=0,j=0;
    while (str1[i]!='\0') {
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0') {
        result[i]=str2[j];
        i++; 
		j++;
    }
    result[i] = '\0';
}
int main() {
    char str1[100],str2[100],copy[100],concat[200];
    printf("\n\t Enter first string : ");
    scanf("%s", str1);
    printf("\n\t Enter second string : ");
    scanf("%s",str2);
    copyString(str2,copy);
    printf("\n\t Copy of first string : %s ",copy);
    copyString(str1,copy);
    printf("\n\t Copy of second string : %s ",copy);
    if(compareStrings(str1,str2)){
        printf("\n\t The two strings are equal ");
    }
    else{
        printf("\n\t The strings are not equal ");
    }
    concatenateStrings(str1,str2,concat);
    printf("\n\t Concatenation of str1 and str2 : %s ",concat);
    return 0;
}
