// Program to implement tower of hanoi

//14.1
//Using function
#include <iostream>
using namespace std;
void towerOfHanoi(int n,char source,char auxiliary,char destination) {
	if(n==1) {
        cout<<"\n\t Move disk 1 from rod "<<source<<" to rod "<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout <<"\n\t Move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,source,destination);
}
int main(){
    int n;
    cout<<"\n\t Enter the number of disks : ";
    cin>>n;
	towerOfHanoi(n,'A','B','C');
    return 0;
}
